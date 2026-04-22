#include<bits/stdc++.h>
using namespace std;

int SumSmallElement(int arr[], int n, int k){
	priority_queue<int, vector<int>, greater<int>>pq;
	for(int i=0; i<n; i++){
		if(pq.size()<k){ // jab tk K value na aa jay push krta rha
		pq.push(arr[i]);
	    }
	    else if(arr[i]>pq.top()){ // Matlab naya element bara ho
			pq.pop(); // chota pop
			pq.push(arr[i]); // naya bada element dalo
		}
	}
	if(pq.size()<k){
		return -1;
	}
	else{
        return pq.top();
	}	
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int k;
	cout<<"Enter the K(largest element) ";
	cin>>k;
	
	cout<<"Kth Largest element in the stream: "<<SumSmallElement(arr, n, k)<<endl;
}