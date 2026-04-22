//Given a binary array consisting of only 0s and 1s,
//find the length of the longest subarray with equal number of 0s and 1s.

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    unordered_map<int,int>freq;
	int sum = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			sum = sum-1;
		}
		else{
			sum = sum+1;
		}
		
		if(sum==0){
			count = i+1;
		}
        if(freq.count(sum)){ // check sum phala b aa chuka?
            count = max(count, i-freq[sum]); //  freq[sum]---pehli baar sum kahan aaya, i---current index
        }
        else{
            freq[sum] = i;
        }
    }
    cout<<count;
}