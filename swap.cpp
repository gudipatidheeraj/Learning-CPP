#include<iostream>
using namespace std;

int swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << " Elements After swap are " << x << "and " << y;
}

int main() {
    int a = 10;
    int b = 20;
    cout << " Elements Before swap are " << a << "and " << b;
    swap(a,b);
}