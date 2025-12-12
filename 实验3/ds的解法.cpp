#include <iostream>
using namespace std;

int main()
{
    float x, sum = 0, aver;
    int n = 0;
    
    for (cout << "Please enter a number:", cin >> x; x >= 0; cout << "Please enter a number:", cin >> x)
    {
        sum += x;
        n++;
    }
    
    aver = sum / n;
    cout << "average=" << aver << endl;
    
    return 0;
}
