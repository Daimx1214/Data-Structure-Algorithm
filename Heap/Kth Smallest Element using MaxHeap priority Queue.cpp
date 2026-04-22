#include<bits/stdc++.h>
using namespace std;

int SmallestElement(int arr[], int n, int k){
	priority_queue<int>pq;
	
	for(int i=0; i<k; i++){ // K elements hi lain ga total ma sa
        pq.push(arr[i]);
    }
    
    for(int i=k; i<n; i++){ // Array: [7, 10, 4, 3, 20, 15], k = 3
//    Push first 3 elements ? heap = [10, 7, 4] (max-heap)
//    Top = 10 (currently the 3rd smallest among first 3) i=3 ? arr[3] = 3
//    3 < 10 ? pop 10, push 3 ? heap = [7, 4, 3]
    	if(arr[i]<pq.top()){
    		pq.pop();
    		pq.push(arr[i]); // add the new smaller element
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
	cout<<"Enter k(Smallest Element): ";
	cin>>k;
	
    cout<<"Kth smallest Element: "<<SmallestElement(arr,n,k)<<endl;
}