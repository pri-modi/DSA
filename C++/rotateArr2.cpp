//Rotating using 2 pointers or swapping elements
#include<iostream>
using namespace std;

void RightRotateArr(int arr[], int size) {
    int i=0, j=size-1;
    while(i != j) {
        //int temp = arr[j];
        //arr[j] = arr[i];
        //arr[i] = temp;
        swap(arr[i], arr[j]);
        i++;
    }
}

void LeftRotateArr(int arr[], int size) {
    int i=0, j=size-1;
    while(j != i){
        swap(arr[i], arr[j]);
        j--;
    }
}

void printArr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original Array: ";
    printArr(arr, size);
    RightRotateArr(arr, size);
    cout<<"Right Rotated Array: ";
    printArr(arr, size);
    LeftRotateArr(arr, size); //Give the array from where we started
    cout<<"Left Rotated Array: ";
    printArr(arr, size);
    return 0;
}