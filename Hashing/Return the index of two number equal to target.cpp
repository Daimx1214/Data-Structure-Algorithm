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
	
	int k;
	cout<<"Enter Target: ";
	cin>>k;
	
	unordered_map<int,int>freq;
	int result =0;
	for(int i=0; i<n; i++){
		result = k - arr[i];
	// count check krta k key array ma present ha ya nhi
	if(freq.count(result)){ // wo number jo result k sath mil kr target bana raha
		cout<<freq[result]<<" "<<i; // freq[result] first number index and i 2nd num index
		return 0;
	}
	freq[arr[i]] = i; // store current number index
    }
}
	
	