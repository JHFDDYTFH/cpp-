#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义学生链表节点
typedef struct Student {
    char id[6];    // 学生ID
    char name[20]; // 姓名
    char sex[2];   // 性别
    int age;       // 年龄
    struct Student *next; // 指向下一节点的指针
} Student;

// 1. 创建新节点（初始化学生信息）
Student* createStudent(char id[], char name[], char sex[], int age) {
    Student *newStu = (Student*)malloc(sizeof(Student));
    strcpy(newStu->id, id);
    strcpy(newStu->name, name);
    strcpy(newStu->sex, sex);
    newStu->age = age;
    newStu->next = NULL;
    return newStu;
}

// 2. 尾插节点到链表（符合题目“链尾添加”要求）
void appendToTail(Student **head, Student *node) {
    if (*head == NULL) {
        *head = node;
        return;
    }
    // 遍历到链表末尾
    Student *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

// 3. 双跟踪指针删除指定ID的节点（题目要求的双指针遍历）
Student* deleteByID(Student **head, char targetID[]) {
    if (*head == NULL) {
        return NULL;
    }

    Student *pre = NULL;  // 前驱指针（跟踪当前节点的前一个节点）
    Student *cur = *head; // 当前指针（遍历链表）

    // 找到目标ID对应的节点
    while (cur != NULL && strcmp(cur->id, targetID) != 0) {
        pre = cur;
        cur = cur->next;
    }

    if (cur == NULL) { // 未找到目标学生
        return NULL;
    }

    // 从链表中移除当前节点（分“头节点”和“非头节点”处理）
    if (pre == NULL) {
        *head = cur->next; // 目标是头节点：更新链表头
    } else {
        pre->next = cur->next; // 目标是中间/尾节点：前驱节点指向当前节点的下一个
    }
    cur->next = NULL; // 断开被移除节点的后续链接
    return cur;
}

// 4. 打印分组信息
void printGroup(Student *head, char groupName[]) {
    printf("\nGroup %s Students :\n", groupName);
    Student *temp = head;
    while (temp != NULL) {
        printf("ID:%s, Name:%s, Sex:%s, Age:%d\n", 
               temp->id, temp->name, temp->sex, temp->age);
        temp = temp->next;
    }
}

int main() {
    // ========== 初始化分组（题目要求：Wang已加入A组） ==========
    Student *groupA = NULL;
    Student *groupB = NULL;

    // 初始化A组：10101(Xing)、10103(Hao)、10106(Wang)
    appendToTail(&groupA, createStudent("10101", "Xing", "M", 18));
    appendToTail(&groupA, createStudent("10103", "Hao", "F", 17));
    appendToTail(&groupA, createStudent("10106", "Wang", "M", 18));

    // 初始化B组：10102(Sheng)、10104(Jing)、10105(Chen)
    appendToTail(&groupB, createStudent("10102", "Sheng", "M", 19));
    appendToTail(&groupB, createStudent("10104", "Jing", "F", 18));
    appendToTail(&groupB, createStudent("10105", "Chen", "M", 16));


    // ========== 输入调动信息（匹配题目运行示例） ==========
    char targetID[6];
    char newGroup[2];
    printf("Please input the student id:");
    scanf("%s", targetID);
    printf("Please input the new group [A/B]:");
    scanf("%s", newGroup);


    // ========== 双指针删除+链尾添加（核心逻辑） ==========
    Student *movedStu = NULL;
    if (strcmp(newGroup, "B") == 0) {
        // 从A组删除，尾插到B组
        movedStu = deleteByID(&groupA, targetID);
        if (movedStu != NULL) {
            appendToTail(&groupB, movedStu);
        }
    } else if (strcmp(newGroup, "A") == 0) {
        // 从B组删除，尾插到A组
        movedStu = deleteByID(&groupB, targetID);
        if (movedStu != NULL) {
            appendToTail(&groupA, movedStu);
        }
    } else {
        printf("Invalid group!\n");
        return 1;
    }


    // ========== 打印调整后的分组（匹配题目运行结果） ==========
    printGroup(groupA, "A");
    printGroup(groupB, "B");

    return 0;
}