#include<iostream>
#include<vector>
using namespace std;

void missingNum(vector<int>nums){
	int n = nums.size();
	int total = n*(n+1)/2; // total sum
	int sum = 0; // array sum
	for(auto num : nums){
		sum = sum + num;
	}
	int result = total-sum;
	cout<<result;
}

int main(){
	vector<int>nums = {1,0,3};
	missingNum(nums);
	
}