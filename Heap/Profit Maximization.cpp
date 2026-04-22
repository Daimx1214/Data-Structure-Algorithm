#include<bits/stdc++.h>
using namespace std;

int MaxProfit(int arr[], int n, int B){ // n = arraySize, B = tickets to sell
    priority_queue<int> pq;  

    int sum = 0; 
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
     
    while (B>0&& !pq.empty()){
        int Peek = pq.top(); 
        pq.pop();               
        sum = sum+Peek; 
        if(Peek>1){
            pq.push(Peek-1); 
        }
        B--; 
    }
    return sum;
}

int main() {
	int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int B;
	cout<<"Enter Ticket to sell(B): ";
	cin>>B;
    cout<<"Profit Maximization: "<<MaxProfit(arr, n, B)<<endl; 
    return 0;
}
