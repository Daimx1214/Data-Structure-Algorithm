//Ek class Calculator banao jisme:
//Two data members (a, b)
//Constructor to assign values
//Function add() that returns a + b

#include<iostream>
using namespace std;

template<class T , class T2 >

class Calculator{
	T a;
	T2 b;
public:
	Calculator(T a ,T2 b){
		this->a = a;
		this->b = b;
	}
	void show(){
		cout<<"a + b = "<< a + b<<endl;
		cout<<"a - b = "<< a - b<<endl;
		cout<<"a * b = "<< a * b<<endl;
		cout<<"a / b = "<< a / b<<endl;
	}
};

int main(){
	
	Calculator <int, int>obj(2, 5);
	obj.show();
	cout<<endl;
	
	Calculator<float, float> obj2(2.5, 1.5);
    obj2.show();
    cout<<endl;
    
    Calculator<int, double> obj3(8, 2.0);
    obj3.show();
}