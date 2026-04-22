#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the Size in the array = ";
    cin>> n;

    int arr[n];
    cout<<"Enter the Array = "<<endl;
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
	}
	cout<<"Array is Reversed "<<endl;
	
	for(int i = n-1; i >= 0; i--){
		cout<<arr[i]<<" " ;
	}
	return 0;
}