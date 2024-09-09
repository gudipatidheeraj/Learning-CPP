#include<iostream>
using namespace std;


void selectionsort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int minTerm = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minTerm]) {
                minTerm = j;
            }
        }
        int temp = arr[minTerm];
        arr[minTerm] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {9,1,4,2,5,34,55,11,44,33,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}