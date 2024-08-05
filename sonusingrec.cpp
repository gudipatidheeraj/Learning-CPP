#include<iostream>
using namespace std;

int recurSum(int n) {
    if (n <= 1) {
        return n;
    }
    else {
    return n +  recurSum(n - 1);
    }
}
int main() {
    int find_sum = 5;
    cout << recurSum(find_sum);
    return 0;
}