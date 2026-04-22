//                               //Max SubArray
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec = {1,2,3,4,5};
//	
//	for(int i =0;i<5; i++){
//		for(int j =i;j<5; j++){
//			for(int k =i;k<=j; k++){
//				cout<<vec[k];
//			}
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


   
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n = ";
	cin>>n;
	
	vector<int>vec(n);
	for(int i =0; i<n; i++){
		cin>>vec[i];
	}
	
	cout<<"All SubArrays: "<<endl;
	for(int i =0;i<n; i++){
		for(int j =i;j<n; j++){
			for(int k =i;k<=j; k++){
				cout<<vec[k];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}


//Agar vec = {1, 2, 3} aur n = 3 hai
//i = 0, j = 0 ? [1]
//i = 0, j = 1 ? [1 2]
//i = 0, j = 2 ? [1 2 3]
//i = 1, j = 1 ? [2]
//i = 1, j = 2 ? [2 3]
//i = 2, j = 2 ? [3]
