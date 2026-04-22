#include <bits/stdc++.h>
using namespace std;

void display(queue<int>q){
	while(!q.empty()){
		cout<<q.front()<<" ";   
		q.pop();
	}
	cout<<endl;
}

int main(){
	vector<int>nums = {2,3,1,5,6,7,8};
	int n =7;
	int k =3;
	
	queue<int>q;
	for(int i=0; i<k-1; i++){ // K=3 ha to 2 tk chala gi 0,1 index wali values add kra ga
		q.push(nums[i]);
	}
		for(int i =k-1; i<n; i++){ // now 2 index sa aga move farward
			q.push(nums[i]);
			display(q);
			q.pop();
	}
}