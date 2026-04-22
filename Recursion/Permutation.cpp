#include<iostream>
#include<vector>
using namespace std;

void getPermutation(vector<int> &arr, int idx, vector<vector<int>> &ans){
	if(idx==arr.size()){
		ans.push_back(arr);
		return;
	}
	for(int i=idx; i<idx; i++){
		swap(arr[idx], arr[i]);
		getPermutation(arr, idx+1, ans);
		swap(arr[idx], arr[i]);
	}
}
	
vector<vector<int>> permute(vector<int>& arr){
	vector<vector<int>>ans;
	getPermutation(arr, 0, ans);
	return ans;
}