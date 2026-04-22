#include<bits/stdc++.h>
using namespace std;

class Solution { 
public:
    int maxSubarray(vector<int>& nums, int k){
        int length = 0;
        unordered_map<int, int>count;

        int start = 0, end = 0, n = nums.size();
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]] > k){
                count[nums[start]]--;
                start++;
            }
            length = max(length , end-start+1);
            end++;
        }
        return length;
    }
};

int main(){
	
	int n,k;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Enter k: ";
    cin>>k;

    Solution obj;
    int ans = obj.maxSubarray(nums, k);

    cout<<"Maximum subarray length = "<<ans<<endl;
	
}