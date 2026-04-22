#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {2,3,7,6,5,4};
	vector<int> arr2(arr);
	
	arr2[0] = arr[0];
	
	for(int i=1; i<arr.size(); i++){
		arr2[i] = arr2[i-1] + arr[i];
	}
	for(int i=0; i<arr2.size(); i++){
		cout<<arr2[i]<<" ";
	}
}