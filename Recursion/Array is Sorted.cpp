#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>&arr, int n){
	if(n==0 || n==1){
		return true;
	}
	if(arr[n-1]<arr[n-2]){
		return false;
	}
	return isSorted(arr,n-1);
}
int main(){
    vector<int>arr={1,2,4,5};
    vector<int>arr2={1,2,3,8,5};
    cout<<isSorted(arr, arr.size())<<endl;
    cout<<isSorted(arr2, arr2.size())<<endl;
    return 0;
}