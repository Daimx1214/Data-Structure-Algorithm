#include<iostream>
using namespace std;
// i se end tak minimum element dhundo. Minimum ko i ke sath swap kar do. i++

void SelectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int minEle = i;
		
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[minEle]){
                minEle = j;
			}
		}
		swap(arr[i], arr[minEle]);
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
	SelectionSort(arr,n);
	cout<<"Selection Sort: "<<endl;
	for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}