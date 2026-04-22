//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//  
//	vector<int> nums = {1,2,3};
//	for(int i = 0; i < nums.size(); i++){
//		for(int j = i+1; j < nums.size(); j++){
//			if(nums[i] == nums[j]){
//				return false;
//				return 0; 
//			}
//		}
//	}
//	return true;
//	return 0; 
//}




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int  i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};









	