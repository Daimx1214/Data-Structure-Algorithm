//#include<iostream>
//using namespace std;
//
//int main(){
//	int n = 5;
//	int marks[] = {12, 14, 15,10, 5};
//	for(int i = 0; i < n; i++){
//		cout<<marks[i]<<endl;   
//	}
//	return 0;
//}


#include<iostream>
using namespace std;

int main(){
	int n = 5;
	int marks[n];
	cout<<"Enter the Marks = "<<endl;
	for(int i = 0; i < n; i++){
	    cin >> marks[i];  
	}
	cout<<"Your Result is.."<<endl;
	for(int i = 0; i < n; i++){
		cout<<marks[i]<<endl;   
	}
	return 0;
}


//
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n = 5;
//	int marks[] = {12, 14, 15,10, 5};
//     
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//	cout<<marks[4]<<endl;
//	return 0;
//}