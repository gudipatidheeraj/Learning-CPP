#include<iostream>
using namespace std;

int findingSum(int num1, int num2, int num3 ) {
    return num1 + num2 + num3;
}

int main() {
    int result = findingSum(10,20,30);
    cout << result;
}