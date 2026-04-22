#include<bits/stdc++.h>
using namespace std;

int MinCost(int arr[], int n){
	priority_queue<int, vector<int>, greater<int>>pq; 
	
	for(int i=0; i<n; i++){	
	pq.push(arr[i]);
    }
	int cost = 0;
	while(pq.size()>1){
//	    int sum = pq.top();
//	    pq.pop();
//	    sum = sum + pq.top();
//	    pq.pop();
//	    cost = cost + sum;
//	    pq.push(sum);
        int first = pq.top();
		pq.pop();
        int second = pq.top();
		pq.pop();
        int sum = first+second;
        cost = cost+sum;
        pq.push(sum);
	}
	return cost;
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
    cout<<"Min Cost of Robes: "<<MinCost(arr,n)<<endl;
    
}