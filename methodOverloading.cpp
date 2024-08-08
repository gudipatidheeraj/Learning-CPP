#include<iostream>
using namespace std;


int intplusFunction(int x, int y) {
    int result = x + y;
    return result;
}


float floatplusFunction(float x, float y) {
    float result = x + y;
    return result;
}


int main() {
    int a,b;
    float i,j;
    cout << "Enter value of input one:";
    cin >> a;
    cout << "Enter value of input Two:";
    cin >> b;
    cout << "Enter value of input Three:";
    cin >> i;
    cout << "Enter value of input Four:";
    cin >> j;
    int outputOne = intplusFunction(a, b);
    float outputTwo = floatplusFunction(i,j);
    float outputThree = (outputOne / outputTwo);
    cout << outputOne << endl;
    cout << outputTwo << endl;
    cout << outputThree << endl;
    
}