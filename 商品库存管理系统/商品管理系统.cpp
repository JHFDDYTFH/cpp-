#include <iostream>
#include <list>
#include <string>
#include <iomanip>
#include <ctime>
#include <algorithm>

// 商品类（封装商品属性和基础行为）
class Product {
private:
    std::string code;       // 商品编码
    std::string name;       // 商品名称
    int quantity;           // 库存数量
    double price;           // 单价
    std::string category;   // 商品分类

public:
    // 构造函数
    Product(std::string c, std::string n, int q, double p, std::string cate)
        : code(c), name(n), quantity(q), price(p), category(cate) {}

    // 析构函数（空，因为没有动态分配内存）
    ~Product() {}

    // 成员函数：获取属性（只读）
    std::string getCode() const { return code; }
    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }
    std::string getCategory() const { return category; }

    // 成员函数：修改库存（进货/出货）
    bool stockIn(int num) {
        if (num <= 0) return false; // 进货数量需大于0
        quantity += num;
        return true;
    }

    bool stockOut(int num) {
        if (num <= 0 || quantity < num) return false; // 出货数量无效或库存不足
        quantity -= num;
        return true;
    }

    // 成员函数：显示商品信息
    void showInfo() const {
        std::cout << std::left
                  << std::setw(15) << code
                  << std::setw(20) << name
                  << std::setw(10) << quantity
                  << std::setw(10) << price
                  << std::setw(15) << category << std::endl;
    }
};

// 库存管理类（封装库存的核心操作）
class InventoryManager {
private:
    std::list<Product> productList; // 存储所有商品的链表

    // 内部辅助函数：查找商品（返回迭代器）
    std::list<Product>::iterator findProduct(const std::string& code) {
        return std::find_if(productList.begin(), productList.end(),
            [&](const Product& p) { return p.getCode() == code; });
    }

public:
    // 1. 添加商品
    bool addProduct(const Product& product) {
        // 检查商品编码是否重复
        if (findProduct(product.getCode()) != productList.end()) {
            return false;
        }
        productList.push_back(product);
        return true;
    }

    // 2. 进货操作
    bool stockIn(const std::string& code, int num) {
        auto it = findProduct(code);
        if (it == productList.end()) return false;
        return it->stockIn(num);
    }

    // 3. 出货操作
    bool stockOut(const std::string& code, int num) {
        auto it = findProduct(code);
        if (it == productList.end()) return false;
        return it->stockOut(num);
    }

    // 4. 删除商品
    bool deleteProduct(const std::string& code) {
        auto it = findProduct(code);
        if (it == productList.end()) return false;
        productList.erase(it);
        return true;
    }

    // 5. 查看所有商品
    void showAllProducts() const {
        if (productList.empty()) {
            std::cout << "暂无商品数据！" << std::endl;
            return;
        }
        // 打印表头
        std::cout << std::left
                  << std::setw(15) << "商品编码"
                  << std::setw(20) << "商品名称"
                  << std::setw(10) << "库存数量"
                  << std::setw(10) << "单价"
                  << std::setw(15) << "分类" << std::endl;
        std::cout << "-------------------------------------------------------------" << std::endl;
        // 打印商品列表
        for (const auto& p : productList) {
            p.showInfo();
        }
    }

    // 6. 库存预警（低于阈值的商品）
    void checkStockWarning(int threshold = 10) const {
        std::cout << "\n=== 库存预警（阈值：" << threshold << "）===" << std::endl;
        bool hasWarning = false;
        for (const auto& p : productList) {
            if (p.getQuantity() < threshold) {
                hasWarning = true;
                std::cout << "预警：" << p.getName() << "（编码：" << p.getCode() 
                          << "）库存不足，当前库存：" << p.getQuantity() << std::endl;
            }
        }
        if (!hasWarning) {
            std::cout << "所有商品库存正常！" << std::endl;
        }
    }

    // 7. 按分类筛选商品
    void filterByCategory(const std::string& cate) const {
        std::cout << "\n=== 分类：" << cate << " 的商品 ===" << std::endl;
        bool hasProduct = false;
        // 打印表头
        std::cout << std::left
                  << std::setw(15) << "商品编码"
                  << std::setw(20) << "商品名称"
                  << std::setw(10) << "库存数量"
                  << std::setw(10) << "单价" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        for (const auto& p : productList) {
            if (p.getCategory() == cate) {
                hasProduct = true;
                std::cout << std::left
                          << std::setw(15) << p.getCode()
                          << std::setw(20) << p.getName()
                          << std::setw(10) << p.getQuantity()
                          << std::setw(10) << p.getPrice() << std::endl;
            }
        }
        if (!hasProduct) {
            std::cout << "该分类下暂无商品！" << std::endl;
        }
    }
};

// 主函数：菜单交互
int main() {
    InventoryManager manager;
    int choice;

    do {
        // 打印菜单
        std::cout << "\n===== 商品库存管理系统（C++版）=====" << std::endl;
        std::cout << "1. 添加商品" << std::endl;
        std::cout << "2. 进货" << std::endl;
        std::cout << "3. 出货" << std::endl;
        std::cout << "4. 删除商品" << std::endl;
        std::cout << "5. 查看所有商品" << std::endl;
        std::cout << "6. 库存预警检查" << std::endl;
        std::cout << "7. 按分类筛选商品" << std::endl;
        std::cout << "0. 退出系统" << std::endl;
        std::cout << "请输入操作选项：";
        std::cin >> choice;
        std::cin.ignore(); // 忽略换行符，避免后续getline读取异常

        // 菜单逻辑
        switch (choice) {
            case 1: { // 添加商品
                std::string code, name, category;
                int quantity;
                double price;
                std::cout << "\n--- 添加商品 ---" << std::endl;
                std::cout << "请输入商品编码："; std::getline(std::cin, code);
                std::cout << "请输入商品名称："; std::getline(std::cin, name);
                std::cout << "请输入初始库存："; std::cin >> quantity;
                std::cout << "请输入商品单价："; std::cin >> price;
                std::cin.ignore();
                std::cout << "请输入商品分类："; std::getline(std::cin, category);

                Product p(code, name, quantity, price, category);
                if (manager.addProduct(p)) {
                    std::cout << "商品添加成功！" << std::endl;
                } else {
                    std::cout << "商品编码重复，添加失败！" << std::endl;
                }
                break;
            }
            case 2: { // 进货
                std::string code;
                int num;
                std::cout << "\n--- 进货操作 ---" << std::endl;
                std::cout << "请输入商品编码："; std::getline(std::cin, code);
                std::cout << "请输入进货数量："; std::cin >> num;
                if (manager.stockIn(code, num)) {
                    std::cout << "进货成功！" << std::endl;
                } else {
                    std::cout << "商品不存在或进货数量无效！" << std::endl;
                }
                break;
            }
            case 3: { // 出货
                std::string code;
                int num;
                std::cout << "\n--- 出货操作 ---" << std::endl;
                std::cout << "请输入商品编码："; std::getline(std::cin, code);
                std::cout << "请输入出货数量："; std::cin >> num;
                if (manager.stockOut(code, num)) {
                    std::cout << "出货成功！" << std::endl;
                } else {
                    std::cout << "商品不存在、出货数量无效或库存不足！" << std::endl;
                }
                break;
            }
            case 4: { // 删除商品
                std::string code;
                std::cout << "\n--- 删除商品 ---" << std::endl;
                std::cout << "请输入商品编码："; std::getline(std::cin, code);
                if (manager.deleteProduct(code)) {
                    std::cout << "商品删除成功！" << std::endl;
                } else {
                    std::cout << "商品不存在，删除失败！" << std::endl;
                }
                break;
            }
            case 5: // 查看所有商品
                std::cout << "\n--- 所有商品列表 ---" << std::endl;
                manager.showAllProducts();
                break;
            case 6: // 库存预警
                manager.checkStockWarning();
                break;
            case 7: { // 按分类筛选
                std::string cate;
                std::cout << "\n--- 按分类筛选 ---" << std::endl;
                std::cout << "请输入分类名称："; std::getline(std::cin, cate);
                manager.filterByCategory(cate);
                break;
            }
            case 0: // 退出
                std::cout << "感谢使用，系统退出！" << std::endl;
                break;
            default:
                std::cout << "输入错误，请选择0-7的选项！" << std::endl;
        }
    } while (choice != 0);

    return 0;
}