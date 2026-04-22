#include<bits/stdc++.h>
using namespace std;

int SumBtwK1K2(int arr[], int n, int k1, int k2){
	priority_queue<int, vector<int>, greater<int>>pq;   // 22,20,16,12,10,8,4
	priority_queue<int, vector<int>, greater<int>>pq2; //  22,20,16,12,10,8,4

	    for(int i=0; i<k1; i++){
	    	pq.push(arr[i]);
		}
		
		for(int i=0; i<k2-1; i++){ 
	    	pq2.push(arr[i]);
		}
		
		for(int i=k1; i<n; i++){
			if(arr[i]>pq.top()){
				pq.pop();
				pq.push(arr[i]);
			}
		}
		for(int i=k2-1; i<n; i++){
			if(arr[i]>pq2.top()){
				pq2.pop();
				pq2.push(arr[i]);
			}
		}
		// sum of both max heap then subtract second from first
		
		int first = 0;
		int second = 0;
		
		while(!pq.empty()){
			first = first + pq.top();
			pq.pop();
		}
		
		while(!pq2.empty()){
			second = second + pq2.top();
			pq2.pop();
		}
		return second - first;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int k1;
	cout<<"Enter the K1(Largest element) ";
	cin>>k1;
	
	int k2;
	cout<<"Enter the K2(Largest element) ";
	cin>>k2;
	
	cout<<"Sum of K1 and K2 largest element: "<<SumBtwK1K2(arr, n, k1, k2)<<endl;
}