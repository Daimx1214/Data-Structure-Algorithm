#include<iostream>
using namespace std;

//void printNum(int n){
//	if(n==0){
//		return;
//	}
//	cout<<n<<" ";
//	printNum(n-1);
//}
//int CalcFact(int n){
//	if(n==0){
//		return 1;
//	}       
//	return n*CalcFact(n-1);	
//}

void CalcFact(int n,int &fact){
    if(n==0){
        fact=1;
        return;
    }
    CalcFact(n-1,fact);
    fact=fact*n;
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int fact;
//	printNum(n);
//	cout<<CalcFact(n);
	CalcFact(n,fact);
	cout<<fact;
	return 0;
}