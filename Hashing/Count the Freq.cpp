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
	for(int i=0; i<n; i++){
		freq[arr[i]]++;
	}
	cout<<"Result: "<<endl;
	for(auto i: freq){
		cout<<i.first<<" -> "<<i.second<<endl;
	}
}