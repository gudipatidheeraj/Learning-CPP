#include<iostream>
using namespace std;

int main() {
    int input[] = {1,4,2,5,6,33,6,5,0};
    int n = sizeof(input) / sizeof(input[0]);

    int minElement = input[0];
    int maxElement = input[0];

    for(int i = 1; i < n; i++) {
        if (input[i] < minElement) {
            minElement = input[i];
        }
        if (input[i] > maxElement) {
            maxElement = input[i];
        }
    }
    cout << minElement << endl;
    cout << maxElement;
}