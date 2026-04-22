#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums {3,2,4};
	int target = 6;
	for(int i = 0; i<nums.size(); i++){
		for(int j = i +1; j < nums.size(); j++){
			if(nums[i] + nums[j] == target){
				cout<<"Target found: "<<i <<" "<<j<<endl;
			}
		}
	}
}
