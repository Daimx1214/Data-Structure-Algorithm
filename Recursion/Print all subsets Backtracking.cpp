#include<iostream>
#include<vector>
using namespace std;

void Subsets(vector<int> &arr, vector<int> &subset, int i){
	if(i==arr.size()){
		for(int val:subset){
		    cout<<val<<" ";
		}
		cout<<endl;
		return;
	}
	//including
	subset.push_back(arr[i]);
	Subsets(arr, subset, i+1);
	subset.pop_back(); // Backtracking
	Subsets(arr, subset, i+1); //excluding
}
int main(){
	vector<int>arr = {1,2,3};
	vector<int>subset;
	
	Subsets(arr,subset,0);
}