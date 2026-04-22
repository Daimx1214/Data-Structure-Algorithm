#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Size of Array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of Array = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int currSum = 0 , maxSum = 0;
        for(int i=0; i<n; i++){
            currSum = currSum + arr[i];

    	if(currSum > maxSum){
        	maxSum  = currSum;
    	}
    
    	if(currSum<0){
        	currSum = 0;
    	}
	}
    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}


