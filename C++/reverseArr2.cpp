#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Reversing using the same array
void reverseArr(int arr[], int start, int end) {
    while (start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArr(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr, 0, size-1);
    cout<<"Reverse Array:"<<endl;
    printArr(arr, size);
    return 0;
}