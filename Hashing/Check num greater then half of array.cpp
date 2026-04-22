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
	
	for(int i=0; i<n; i++){
		if(freq[arr[i]]>n/2){
			cout<<arr[i]<<endl;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}