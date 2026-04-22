#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int, vector<int>, greater<int>>pq;
	pq.push(10);
	pq.push(12);
	pq.push(6);
	pq.push(18);
	pq.push(3);
	pq.push(20);
	pq.push(17);
	
	while(!pq.empty()){
	cout<<pq.top()<<" ";
	pq.pop();	
	}
}