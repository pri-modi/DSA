#include<iostream>
using namespace std;

//Reversing using a new array
int reverseArr(int arr[], int size) {
    int revArr[size];
    for(int i=0; i<size; i++) {
        revArr[i] = arr[size-1-i];
    }

    //Printing reversed array
    for(int i=0; i<size;i++) {
        cout<<revArr[i]<<" ";
    }
}

int main() {
    int orgArr[] = {1,2,3,4,5};
    int size = sizeof(orgArr) / sizeof(orgArr[0]);
    //cout<<sizeof(orgArr)<<endl;
    //cout<<sizeof(orgArr[0]);
    reverseArr(orgArr, size);
    return 0;
}