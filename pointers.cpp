#include<iostream>
using namespace std;
int main() {
    string item = "Burger";
    string *ptr = &item;
    cout << item << "\n";
    cout << "Base address of the " << item << " is " << &item;
}