#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

priority_queue<int>LeftMaxHeap;
priority_queue<int, vector<int>, greater<int> >RightMinHeap;

void BalanceHeap(); 

void insertHeap(int x){
	if(LeftMaxHeap.empty()){ // first time insertion
		LeftMaxHeap.push(x);
		return;
	}
	
	if(x>LeftMaxHeap.top()){
		RightMinHeap.push(x);
	}
	else{
		LeftMaxHeap.push(x);
	}
	BalanceHeap();
}

void BalanceHeap(){
	// minHeap(right) should not be greater then maxHeap(left)
	if(RightMinHeap.size()>LeftMaxHeap.size()){
		LeftMaxHeap.push(RightMinHeap.top());
		RightMinHeap.pop();
	}
	else{
		// difference btw left-right should not greater then 1
		if(RightMinHeap.size()<LeftMaxHeap.size()-1){ // right neither greater then left
			RightMinHeap.push(LeftMaxHeap.top());
			LeftMaxHeap.pop();
		}
	}	
}

double getMedian(){
	if(RightMinHeap.size()<LeftMaxHeap.size()){ // ODD
		return LeftMaxHeap.top();
	}
	else{
		double ans = LeftMaxHeap.top() + RightMinHeap.top(); //EVEN
		ans = ans / 2.0;
		return ans;
	}
}


int main(){
    int n;
    cin>>n;    

    vector<int>nums;
    nums.resize(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
 
    for (int i=0; i<nums.size(); i++) {
        insertHeap(nums[i]);
        cout<<"Median in the stream: "<<getMedian()<<endl;
    }
    return 0;
}