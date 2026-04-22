#include<bits/stdc++.h>
using namespace std;

int MagicChocolate(int arr[], int n){
	priority_queue<int>pq;
	for(int i=0; i<n; i++){
		pq.push(arr[i]);
	}
	
	int MaxChoc = 0;
	while(n--&&!pq.empty()){
		int peek = pq.top();
		pq.pop();
		MaxChoc += peek;
		
		if(peek/2>0){
		    pq.push(peek/2);
		}
	}
	return MaxChoc;
}

//    while(n--){
//	    int x = pq.top();
//	    pq.pop();
//	    MaxChoc += x;
//	    pq.push(x/2);
//    }
//    return MaxChoc;
//}

int main(){
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<"Magician and Chocolate: "<<MagicChocolate(arr,n)<<endl;
}
	
	