#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& target){
    priority_queue<long long>pq;
    long long sum=0;
        
    for(int i=0; i<target.size(); i++){
       	pq.push(target[i]);
        sum = sum + target[i]; // 9+3+5=17
	}
	long long MaxEle, RemSum, Element; 
		
    while(pq.top()!=1){
		MaxEle = pq.top();
		pq.pop();
		RemSum = sum - MaxEle;
	if(RemSum<=0 || RemSum>=MaxEle){ // Base-case
		return 0;
	}
	Element = MaxEle % RemSum;
	if(Element==0){
		if(RemSum!=1){
			return 0;
		}
	return 1;
}
	sum = RemSum + Element;
	pq.push(Element);
	}
	return 1;
}
int main() {
    int n;
    cin>>n;

    vector<int>target(n);
    for(int i=0; i<n; i++) {
    cin>>target[i];
    }
    
    if(isPossible(target))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}