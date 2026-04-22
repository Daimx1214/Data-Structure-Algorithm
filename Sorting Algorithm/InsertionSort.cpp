#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
	for(int i=1; i<n; i++){
	    int key = arr[i];   // element to insert
		int j = i-1;  // 0 index per point kr rha
		while(j>=0 && arr[j] > key){
		    arr[j+1]=arr[j];
            j--; // element ko LEFT side mein aage le jaane ke liye
		}
		arr[j+1]=key;
	}
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	InsertionSort(arr,n);
	cout<<"Insertion Sort: "<<endl;
	for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}