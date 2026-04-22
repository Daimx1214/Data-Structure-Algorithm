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
	for(int i=0; i<n; i++){
		sum = sum + arr[i];
		
		if(sum==0){
			cout<<true;
			return 0;
		}
		if(freq.count(sum)){
			cout<<true;
			return 0;
		}
		freq[sum]++;
	}
	cout<<false;
	return 0;
}