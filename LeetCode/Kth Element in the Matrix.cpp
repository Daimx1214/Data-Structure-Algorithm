//#include<bits/stdc++.h>
//using namespace std;
//
//const int MAX = 100;  // array size
//int KthSamllest(int matrix[MAX][MAX], int n, int k){
//	
//	vector<pair<int,pair<int,int>>>temp; // pair is STL, data, <row,colomn>
//	for(int i=0; i<n; i++){
//		temp.push_back(make_pair(matrix[i][0], make_pair(i,0)));  
//	}
//	
//	priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq(temp.begin(), temp.end());
//	// same ha pair wali line copy kro minHeap ma int k gaja likh do bss 
//	
//	int ans;
//	pair<int,pair<int,int>>Element;
//	int i,j;
//	
//	while(k--){ // aik aik element remove kro left to right
//		Element = pq.top();
//		pq.pop();
//		ans = Element.first; // value aa gai
//		i = Element.second.first; // row number   {10, 20}  10==first, 20==second
//		j = Element.second.second; // colomn number
//		
//		if(j+1<n){
//			pq.push(make_pair(matrix[i][j+1], make_pair(i,j+1))); // row same colomn++
//		}
//	}
//	return ans;
//}
//
//int main(){
//
//int n, k;
//    cout<<"Enter size of matrix (n x n): ";
//    cin>>n;
//
//    int matrix[MAX][MAX];
//    cout << "Enter matrix elements row-wise (sorted rows):\n";
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cin>>matrix[i][j];
//        }
//    }
//    cout<<"Enter k: ";
//    cin>>k;
//
//    int result = KthSamllest(matrix, n, k);
//    cout<<"Kth smallest element is: "<<result<<endl;
//
//    return 0;
//}




                                  ///BINARY SEARCH MOST OPTIMIZE
#include <bits/stdc++.h>
using namespace std;

// count how many elements <= mid
int countLessEqual(vector<vector<int>>& matrix, int mid){
    int n = matrix.size();
    int i=0, j=n-1;
    int count = 0;

    while(i<n && j>=0){
        if(matrix[i][j]<=mid){
            count += (j+1);   // poori column count
            i++;
        } else {
            j--;
        }
    }
    return count;
}

int kthSmallest(vector<vector<int>>& matrix, int k){
    int n = matrix.size();

    int start = matrix[0][0];
    int end = matrix[n-1][n-1];

    while(start<end){
        int mid = start+(end-start)/2;

        int count=countLessEqual(matrix, mid);

        if(count<k)
            start = mid+1;
        else
            end = mid;
    }
    return start;
}

int main(){
    int n, k;
    cin>>n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    cin>>k;
    cout<<kthSmallest(matrix, k);
}
