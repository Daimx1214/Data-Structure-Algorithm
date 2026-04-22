#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int solve(vector<int>&nums, int goal){

	int i=0, j=0, n=nums.size(), sum=0, count=0;
	while(j<n){
		sum = sum+nums[j];
		while(sum>goal && i<=j){
			sum = sum-nums[i];
			i++;
		}
		count = count + (j-i+1);
		j++;
	}
	return count;
}
	
int subarraySum(vector<int>& nums, int goal) {
    return (solve(nums,goal)-solve(nums,goal-1));
    }
};

int  main(){
	Solution sol;
    vector<int>nums = {1,0,1,0,1};
    int goal = 2;

    cout<<sol.subarraySum(nums, goal);
}