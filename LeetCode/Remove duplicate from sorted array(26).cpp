#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,1,2,2,3,3,3,4,5,5};
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
        count++;
        while(i<nums.size()-1 && nums[i]==nums[i+1]){
            i++;
        }
    }
    cout<<endl<<count;
}                       