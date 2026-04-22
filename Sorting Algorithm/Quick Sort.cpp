#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int str, int end){
	int idx = str-1, pivot = arr[end];
	
	for(int j=str; j<end; j++){
		if(arr[j]<=pivot){
			idx++;
			swap(arr[j], arr[idx]); // for left >Origin< right 
		}
	}
	idx++;
	swap(arr[idx], arr[end]); //for origin 
	return idx;
}

void quickSort(vector<int> &arr, int str, int end){
	if(str<end){
		int pivIdx = partition(arr,str,end);
		
		quickSort(arr,str,pivIdx-1); // for left
		quickSort(arr,pivIdx+1,end); // for right
	}
}

int main(){
	vector<int> arr={12,31,35,8,32,17};
	quickSort(arr,0,arr.size()-1);
	for(int val:arr){
		cout<<val<<" ";
	}
	cout<<endl;
}