#include<iostream>
using namespace std;

void bubblesort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {9,1,4,2,5,34,55,11,44,33,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}