#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarrays(vector<int>& nums, int k) {
        int total = 0;
        unordered_map<int,int>freq;
        int start = 0, end = 0, count = 0, n = nums.size();

        // fOR K Values
        while(end<n){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                count++;
            
            while(count == k){
                total += n - end;
                freq[nums[start]]--;
                if(freq[nums[start]] == 0)
                    count--;
                start++;
            }
            end++;
        }

        start = 0 ,end = 0 , count = 0;
        freq.clear();
        k++;  
        
                // fOR K+1 Values          
        while(end<n){
            freq[nums[end]]++;
            if(freq[nums[end]] == 1){
                count++;
            }
            while(count == k){
                total -= n - end;

                freq[nums[start]]--;
                if(freq[nums[start]] == 0)
                    count--;
                start++;
            }
            end++;
        }
        return total;
    }
};



//                                          2nd Methode
//class Solution {
//public:
//    long long subArray(vector<int>& nums, int k) {
//        long long ans = 0;
//
//        // Storing frequency of each element in the nums
//        unordered_map<int, int> m;
//        // Simulating Logic
//        int start = 0, end = 0, n = nums.size();
//
//        while(end < n) {
//            // Element included in the window;
//            m[nums[end]]++;
//            // Decreasing window size
//            while(m.size() == k) {
//                // Updating Answer
//                ans += (n - end);
//                
//                m[nums[start]]--;
//                
//                if(m[nums[start]] == 0)
//                m.erase(nums[start]);
//                start++;
//            }
//            // Increaing window size
//            end++;
//        }
//        return ans;
//    }
//
//    int subarraysWithKDistinct(vector<int>& nums, int k) {
//        return (int)(subArray(nums, k) - subArray(nums, k+1) );
//    }
//};