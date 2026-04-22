#include<iostream>
#include<vector>
using namespace std;

int main(){
	int maxNum;
	int n;
	cout<<"Enter the value of n = ";
	cin>>n;
	
	vector<int>vec(n);
	for(int i =0; i<n; i++){
		cin>>vec[i];
	}
	
	for(int str =0; str<n; str++){
		int currSum = 0;
	    for(int end =str; end<n; end++){
			currSum = currSum + vec[end];
			maxNum = max(maxNum , currSum);
		}
	}
			cout<<"Max Sum = "<<maxNum<<endl;
	return 0;
}