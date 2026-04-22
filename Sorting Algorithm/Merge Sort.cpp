#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int str, int mid, int end){
	vector<int> temp;
	int i=str, j=mid+1;
	
	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){     //if dsecending >=
			temp.push_back(arr[i]);
			i++;
		}
		else{
			temp.push_back(arr[j]);
			j++;
		}
	}
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=end){
		temp.push_back(arr[j]);
		j++;
	}
	
	for(int idx=0; idx<temp.size(); idx++){
		arr[idx+str]=temp[idx];
	}
}

void mergeSort(vector<int> &arr, int str, int end){
	if(str<end){
		int mid = str+(end-str)/2;
		
		mergeSort(arr, str, mid); //left
		mergeSort(arr,mid+1,end); //right
		
		merge(arr,str,mid,end);
	}
}

int main(){
	vector<int> arr={12,31,35,8,32,17};
	mergeSort(arr,0,arr.size()-1);
	
	for(int val:arr){
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}