#include<iostream>
#include<vector>
using namespace std;

    int BinarySearch(vector<int>& arr, int target, int str, int end){
        if(str<=end){
            int mid = str + (end-str)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                return BinarySearch(arr, target, mid+1, end);
            }
            else{
                return BinarySearch(arr, target, str, mid-1);
            }
        }
        return -1;
}

int search(vector<int>& arr, int target){
    return BinarySearch(arr,target,0,arr.size()-1);
}

