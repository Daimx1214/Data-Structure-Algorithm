#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int start, int mid, int end){
	vector<int>temp(end-start+1);
	int left  = start;
	int right = mid+1, index = 0;
	
	while(left<=mid&&right<=end){
		if(arr[left]<=arr[right]){
			temp[index]= arr[left];
			index++;
			left++;
		}
		else{
		temp[index]= arr[right];
		index++;
		right++;	
		}
	}
	while(left<=mid){
		temp[index]= arr[left];
		index++;
		left++;
	}
	while(right<=mid){
		temp[index]= arr[right];
		index++;
		right++;
	}
	index=0;
	
	while(start<=end){
		arr[start]=temp[index];
		start++;
		index++;
	}
}

void MergeSort(vector<int>& arr, int start, int end, int portion, int K){
	if(portion<2){
		return;
	}
	int mid = start + (portion/2)*K-1;
	// left side portion
	MergeSort(arr,start,mid,portion/2,K);
	// right side portion
	MergeSort(arr,mid-1,end,portion-portion/2,K);
	// Merge both of them
	Merge(arr,start,mid,end);                                                                                            
	
}

vector<int> MergeKarray(vector<vector<int>>arr , int K){
	vector<int>ans;
	for(int i=0; i<K; i++){
		for(int j=0; j<K; j++){
			ans.push_back(arr[i][j]);
		}
	}
	MergeSort(ans,0,ans.size()-1,K,K); // ans , starting index , ending index
	return ans;
}


