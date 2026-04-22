#include<iostream>
#include<vector>
using namespace std;

void Heapify(vector<int> &ans, int index, int n){
	int largest = index;
	int left = 2*index+1;
	int right = 2*index+2;
	
	if(left<n&& ans[left]>ans[largest]){
		largest = left;
	}
	if(right<n&& ans[right]>ans[largest]){
		largest = right;
	}
	
	if(largest!=index){
		swap(ans[largest],ans[index]);
		Heapify(ans,largest,n);
	}
}

vector<int>mergeHeap(int arr[], int n, int arr2[], int m){
	vector<int>ans;
	for(int i=0; i<n; i++){
		ans.push_back(arr[i]);
	}	
	for(int i=0; i<m; i++){
		ans.push_back(arr2[i]);
	}
	//convert ans to maxHeap
	n=ans.size();
	for(int i=n/2-1; i>=0; i--){ // n/2-1 fromula from child to parent node
		Heapify(ans,i,n);
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<endl;
	int m;
	cout<<"Enter m: ";
	cin>>m;
	
	int arr2[m];
	for(int i=0; i<m; i++){
		cin>>arr2[i];
	}
	
	vector<int>result = mergeHeap(arr, n, arr2, m);
    cout<<"Merge Binary MaxHeap: ";
    for(int x:result){
        cout<<x<<" ";
    }
    cout<<endl;
}
	