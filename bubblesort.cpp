#include<iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for( int j = 0; j < n - i - 1; j ++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main() {
    int arr[] = {9,1,4,2,5,34,55,11,44,33,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}