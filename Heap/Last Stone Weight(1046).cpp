#include<bits/stdc++.h>
using namespace std;

int LastStone(int arr[], int n){
	priority_queue<int>pq;
	
	for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    while(pq.size()>1){
	    int first = pq.top();
	    pq.pop();
	    int second = pq.top();
	    pq.pop();
 
	    if(first != second){
            pq.push(first - second);
        }
    }
    if(pq.empty())
        return 0;
    else
        return pq.top();
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
    cout<<"Last Stone Weight: "<<LastStone(arr,n)<<endl;
}