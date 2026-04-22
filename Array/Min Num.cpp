#include <iostream>
using namespace std;

int main() {
    int n, min;

    cout<<"Enter the Size in the array = ";
    cin>> n;

    int arr[n];
    cout<<"Enter the Array = ";
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
	}
		min = arr[0];
	
	for(int i = 0; i < n; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	    cout<<"Minimum Number is = "<<min;
	return 0;
}