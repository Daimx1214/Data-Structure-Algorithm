#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int str, int mid, int end){
	vector<int> temp;
	int i=str, j=mid+1;
	int InvCount = 0;
	
	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){     //if descending >=
			temp.push_back(arr[i]);
			i++;
		}
		else{
			temp.push_back(arr[j]);
			j++;
			InvCount += (mid-i+1); // condition2 
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
	return InvCount;
}

int mergeSort(vector<int> &arr, int str, int end){
	if(str<end){
		int mid = str+(end-str)/2;
		
		int leftInvCount = mergeSort(arr, str, mid); //left
		int rightInvCount = mergeSort(arr,mid+1,end); //right
		
		int invCount = merge(arr,str,mid,end);
 		return leftInvCount + rightInvCount + invCount;
	}
	return 0;
}

int main(){
	vector<int> arr={6,3,5,2,7};
	int val = mergeSort(arr,0,arr.size()-1);
	cout<<val;
	return 0;
}