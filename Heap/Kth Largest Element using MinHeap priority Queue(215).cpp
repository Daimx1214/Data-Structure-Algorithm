#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n, int k){
	priority_queue<int, vector<int>, greater<int>>pq;
	
	for(int i=0; i<k; i++){ // K elements hi lain ga total ma sa
        pq.push(arr[i]);
    }
    
    for(int i=k; i<n; i++){ 
    	if(arr[i]>pq.top()){  // Array: [7, 10, 4, 3, 20, 15], k = 3
        // Step 1: First k elements already pushed
        // Min-heap = [4, 7, 10]
        // Top = 4  (smallest among k largest so far) i = 3 ? arr[3] = 3
        // 3 > 4, So 3 is NOT among k largest Heap remains unchanged
    		pq.pop();
    		pq.push(arr[i]); // add the new largest element
		}
	}
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
    
    int k;
	cout<<"Enter k(Largest Element): ";
	cin>>k;
	
    cout<<"Kth largest Element: "<<LargestElement(arr,n,k)<<endl;
}