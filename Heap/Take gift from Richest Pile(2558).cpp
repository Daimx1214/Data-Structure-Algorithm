#include<bits/stdc++.h>
using namespace std;

int RichestPile(int arr[], int n, int k){
	priority_queue<int>pq;
	
	for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    
    while(k--){
	    int first = pq.top();
	    pq.pop();
	    pq.push(sqrt(first));
	}
	    int sum=0;
	    while(!pq.empty()){
	    	sum = sum + pq.top();
            pq.pop();
        }
    return sum;
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
    
    int k;
	cout<<"Enter k(richest Pile): ";
	cin>>k;
	
    cout<<"Gift from Richest Pile: "<<RichestPile(arr,n,k)<<endl;
}