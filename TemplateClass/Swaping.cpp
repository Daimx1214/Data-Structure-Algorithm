#include<iostream>
using namespace std;

template<class T, class T2>
    class Swapper{
    private:
    	T  a;
    	T2 b;
    public:
        Swapper(T a ,T2 b){
		    this->a = a;
		    this->b = b;
	    }
	
    void Swap(){
    	
	    T temp;  
	    temp = a;
	    a = b;
	    b = temp;
	}
	void display(){
		cout<<"Value of a is: "<<a<<endl;
		cout<<"Value of b is: "<<b<<endl;
	}
};

int main(){
	
	int a;
	cout<<"Enter the number num1: ";
	cin>>a;
	int b;
	cout<<"Enter the number num2: ";
	cin>>b;
	
	Swapper<int, int>obj(a, b);
	cout<<"Before Swapping: "<<endl;
	obj.display();
	obj.Swap();
	cout<<"After Swapping: "<<endl;
	obj.display();
	
	return 0;
	
}
