#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>list;
	deque<int>dq;
	int k = 3;
	vector<int>arr = {1,3,4,5,6,3,2,8,2};
	int n = arr.size();
	
	for(int i=0; i<n; i++){
		if(!dq.empty() && dq.front()==i-k){
			dq.pop_front();
		}
		while(!dq.empty() && arr[dq.back()]<=arr[i]){
			dq.pop_back();
		}
		dq.push_back(i);
		if(i>=k-1){
			list.push_back(arr[dq.front()]);
		}
	}
	for(int x:list){
        cout<<x<<" ";
	}
}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	vector<int>list;
//	int k = 3;
//	vector<int>arr = {1,3,4,5,6,3,2,8,2};
//	int n = arr.size();
//	int maxi = 0;
//	for(int i=0; i<=n-k; i++){
//		maxi = arr[i];
//		for(int j=i; j<i+k; j++){
//			maxi = max(maxi, arr[j]);
//		}
//			list.push_back(maxi);
//	}
//	for(int x:list){
//        cout<<x<<" ";
//	}
//}