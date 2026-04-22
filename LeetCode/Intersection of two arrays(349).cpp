         ///////ya sahii nhi ha isa sahii kr
         /// ghalat ha ya

#include<iostream>
#include<vector>
using namespace std;

vector<int>intersection(vector<int>& nums1, vector<int>& nums2){
    vector<int>count;
	for(int i=0; i<nums1.size(); i++){
		for(int j=0; j<nums2.size(); j++){
			if(nums1[i]==nums2[j]){
				count.push_back(nums1[i]);
				break;
			}
		}
	}
		return count;
};
