//Create a template class Compare that checks which of two values is greater
//Template class Compare banao:
//Constructor me 2 values lo
//Function getMax() jo dono me se max value return kare.

#include<iostream>
using namespace std;

template<class T , class T2>
class Student{
	T num1;
	T2 num2;
public:
	Student(T na , T2 n){
		num1 = na;
		num2 = n;
	}
	
//	void getMax(){
//		if(num1>num2){
//			cout<<"Number 1 is greater "<<endl;
//		}
//		else if(num1<num2){
//			cout<<"Number 2 is greater "<<endl;
//		}
//		else{
//			cout<<"Both are equal "<<endl;
//		}
    T getMax(){
    	if(num1>num2){
    		cout << "Num1 is greater: " << num1 << endl;
    	    return num1;
		}
		else if(num1<num2){
			cout << "Num2 is greater: " << num2 << endl;
			return num2;
		}
		else{
			cout << "Both values are equal: " << num1 << endl;
			return num1; // koi b kr do jab same ho
		}
	}
};

int main(){
	int a;
	cout<<"Enter the number num1: ";
	cin>>a;
	int b;
	cout<<"Enter the number num2: ";
	cin>>b;
	Student <int , int>obj(a,b);
	obj.getMax();
	
}








