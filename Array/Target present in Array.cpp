#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout<<"Enter the Size in the array = ";
    cin>> n;
    

    int arr[n];
    cout<<"Enter the Array = ";
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
	}
	cout<<"Enter the Target in the array = ";
    cin>> target;
    
    int found = 0;
    
	for(int i = 0; i < n; i++){
	if(arr[i] == target){
			cout<<"Target is Present";
			found = 1;
			break;
		}		
	}
	if(found==0){
			cout<<"Target is Absent";
	}
	return 0;
}