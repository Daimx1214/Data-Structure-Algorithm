#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> num{1,2,3,4};
		int sum = 0;
	for(int i= 0; i< num.size(); i++){
		sum = sum + num[i];
		num[i] = sum;
		cout<<num[i]<<" ";
	}
}