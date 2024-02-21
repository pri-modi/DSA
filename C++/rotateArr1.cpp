//Rotating using the same array or by using the 'temp' variable
#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void RightRotateArr(int arr[], int size) {
    int temp = arr[size-1];
    for(int i=size-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout<<"Right Rotated Array: "<<endl;
    printArr(arr, size);
}

void LeftRotateArr(int arr[], int size) {
    int temp = arr[0];
    for(int i=0; i<size-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    cout<<"Left Rotated Array: "<<endl;
    printArr(arr, size);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original Array: "<<endl;
    printArr(arr, size);
    RightRotateArr(arr, size);
    LeftRotateArr(arr, size); //This will give back the original array
    return 0;
}