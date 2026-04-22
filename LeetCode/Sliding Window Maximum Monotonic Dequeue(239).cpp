#include<bits/stdc++.h>
using namespace std;

int main(){
	int nums , k;
	cin>>nums >> k;
	vector<int>arr(nums);
	for(auto &i : arr){
		cin>>i;
	}
	
	if(k>nums){
		return 0;
	}
	
	deque<int>dq;  // aise maintain karenge ke front par hamesha window ka maximum element ka index ho.
	vector<int> ans; // isme har window ka maximum store hoga.
	
	for(int i=0; i<k; i++){
		while(!dq.empty() && arr[dq.back()] < arr[i]){ // if new element bara ho deque ke last wale element se
		      dq.pop_back();
		}
		dq.push_back(i);
	}
	ans.push_back(arr[dq.front()]);
	
	for(int i=k; i<nums; i++){
		if(dq.front() == i-k){ // jab front index queue sa bahar aa jay 3-3=0, 0 is index here i=3 yani SW Total 3 hn		
			dq.pop_front();
		}
		while(!dq.empty() && arr[dq.back()]<arr[i]){
		      dq.pop_back();
		}
		dq.push_back(i);
		ans.push_back(arr[dq.front()]);
	}
	for(auto i : ans){
		cout<<i<<endl;
	}
}


//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//
//	    if(k>nums.size()){
//        return{}
//      }
//		deque<int> dq;
//		vector<int>ans;
//		
//		for(int i=0; i<k; i++){
//			while(!dq.empty() && nums[dq.back()] < nums[i]){
//				dq.pop_back(); 
//            }   
//			   dq.push_back(i); 
//		}
//		ans.push_back(nums[dq.front()]);
//		
//		for(int i=k; i<nums.size(); i++){
//			if(dq.front() == i-k){
//				dq.pop_front();
//			}
//			while(!dq.empty() && nums[dq.back()] < nums[i]){
//				dq.pop_back();
//            }
//			   dq.push_back(i); 
//			   ans.push_back(nums[dq.front()]);
//        }
//		return ans;
//    }
//};
