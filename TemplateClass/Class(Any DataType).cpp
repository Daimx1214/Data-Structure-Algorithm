//Q1: Create a class template to store and display any data type.
//Ek class Display banao jo koi bhi data type accept kare (int, float, string, etc.)
//Aur ek function show() ho jo value print kare.

#include<iostream>
using namespace std;

template<class T , class T2 , class T3>
class Student{
	T age;
	T2 name;
	T3 Price;
public:
	Student(T a , T2 n , T3 P){
		age = a;
		name = n;
		Price = P;
	}
	
	void Display(){
		cout<<"\nStudent Info.."<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<Price<<endl;
	}
};


int main(){
	Student <int , string , float>obj(19,"Daim ALi",2000);
	Student <int , string , float>obj2(21,"QWERTY",100);
	obj.Display();
	obj2.Display();
}