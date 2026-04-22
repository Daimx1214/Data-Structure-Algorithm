#include <iostream>
using namespace std;

int main() {
    int n, max;

    cout<<"Enter the Size in the array = ";
    cin>> n;

    int arr[n];
    cout<<"Enter the Array = ";
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
	}
		max = arr[0];
	
	for(int i = 0; i < n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	    cout<<"Maximum Number is = "<<max;
	return 0;
}