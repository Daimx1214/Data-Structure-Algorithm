#include<bits/stdc++.h>
using namespace std;

vector<int> MergeKarray(vector<vector<int>>arr , int K){
	
	// Data ,  row , colomn
	vector<pair<int, pair<int,int>>>temp;
	
	for(int i=0; i<K; i++){
		temp.push_back(make_pair(arr[i][0], make_pair(i,0)));
	}
	priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>>pq(temp.begin(), temp.end());
	// pair wali line int k gaja likh di
	
	vector<int>ans; // vector which store sorted data
	pair<int, pair<int,int>>Element;
	int i;
	int j;
	
	while(!pq.empty()){
		Element = pq.top();
		pq.pop();
		ans.push_back(Element.first);
		i = Element.second.first;
		j = Element.second.second;
		
		if(j+1<K){
			pq.push(make_pair(arr[i][j+1], make_pair(i, j+1))); 
		}
	}
	return ans;
}