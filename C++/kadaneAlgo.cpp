//The task is to find the sum of the contiguous subarray within a arr[] with the largest sum.
#include<iostream>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int start = 0;
    int end = 0;
    int s = 0;
    int max_so_far = INT8_MIN;
    int max_ending_here = 0;
    for(int i=0; i<size; i++){
        max_ending_here += arr[i];
        if (max_so_far<max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        } 
        if(max_ending_here<0) {
            max_ending_here = 0;
            s = i+1;
        }
    }
    cout<<"Starting index: "<<start<<endl;
    cout<<"Ending index: "<<end<<endl;
    return max_so_far;
}

int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, size);
    cout<<"Maximum Contiguous Sum: "<<max_sum;
    return 0;
}