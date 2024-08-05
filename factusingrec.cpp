#include<iostream>
using namespace std;

int recurFact(int n) {
    if (n < 0) {
        cout << "Cannot find factorial for numbers less than 0";
    }
    else if (n == 1) {
        return 1;
    }
    else {
        float factorial = n * recurFact(n -1);
    }
}
int main() {
    int number;
    cout << "Enter a number to find factorial: \n";
    cin >> number;
    cout << "Factorial of the number " << number << " is " << recurFact(number);
}