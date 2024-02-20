//Reversing using inbuilt function
#include<iostream>
#include<algorithm> //For reverse function
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr+size);
    cout<<"Reverse Array: ";
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    return 0;
}