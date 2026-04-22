#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>>threeSum(vector<int>& nums){
	vector<vector<int>>ans;
	
	sort(nums.begin(), nums.end());
	for(int i=0; i<nums.size()-2; i++){
		if(nums[i]>0) break;
		if(i>0&&nums[i]==nums[i-1]){ // skip duplicate
			continue;
		}
	int left = i+1;
	int right = nums.size()-1;
	while(right>left){
		int sum = nums[i]+nums[left]+nums[right];
		
		if(sum==0){
			ans.push_back({nums[i],nums[left],nums[right]});
			left++;
			right--;
		    while(right>left && nums[left]==nums[left-1]){
		    	left++;
		    }
	     	while(right>left && nums[right]==nums[right+1]){
		      	right--;
		    }
	    }
	    else if(sum<0){
	    	left++;
		}
		else{
			right--;
		}
	  } 
	}
	return ans;
}