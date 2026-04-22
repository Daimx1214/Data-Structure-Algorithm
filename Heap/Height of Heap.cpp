#include<bits/stdc++.h>
using namespace std;

void HeapHeight(int arr[], int n){
	if(n==1){
		cout<<1;
	}
	int height = 0;
	
	while(n>1){
		height++;
		n = n/2;
	}
	cout<<height;
}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }

	HeapHeight(arr, n);
}