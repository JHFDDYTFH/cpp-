#include <iostream>
#include <string>
using namespace std;

struct Product{
    char code[20];
    char name[100];
    int quantity;
    double price;
    Product*next;
};
