                                          //FOR STATIC

//#include <iostream>
//using namespace std;
//#define SIZE 5  // constant size rkha ha 5
//
//class Stack {
//private:
//    int arr[SIZE];
//    int top;
//
//public:
//    Stack() {
//        top = -1;  // initially empty
//    }
//
//    // PUSH operation
//    void push(int val) {
//        if (top == SIZE - 1) { // jab stack full ho jay gi tab ya chala ga 4==4
//            cout << "Stack Overflow! Cannot push " << val << endl;
//        } else {
//            top++;
//            arr[top] = val; // top -1 sa 0 ho gaya or max 4 tk ja sakti
//            cout << val << " pushed into stack." << endl;
//        }
//    }
//
//    // POP operation
//    void pop() {
//        if (top == -1) {
//            cout << "Stack is empty! Nothing to pop." << endl;
//        } else {
//            cout << arr[top] << " popped from stack." << endl;
//            top--;
//        //   Dono ma sa koi bhi aik use kr loo ya nicha wala return kr rah ha uper wala sirf remove kr rha ha
////            int val = arr[top];
////            top--;
////            return val;  // return bhi karega 
//        }
//    }
//
//    void peek() {
//        if (top == -1)
//            cout << "Stack is empty." << endl;
//        else
//            cout << "Top element: " << arr[top] << endl;
//    }
//
//    void display() {
//        if (top == -1) {
//            cout << "Stack is empty." << endl;
//        } else {
//            cout << "Stack elements: ";
//            for (int i = top; i >= 0; i--) {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Stack s;
//
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    s.display();
//
//    s.peek();
//    s.pop();
//    s.display();
//
//    return 0;
//}


                              // FOR DYNAMIC
                              
#include<iostream>
using namespace std;

class Stack{
	private:
		int top; 
		int size; 
		int *arr;
	public:
		Stack(int s){
			top = -1;
			size = s;
			arr = new int[size]; 
		}
		void push(int n){
//			if(top==-1){
//				cout<<"The stack is Empty...";
//			}
			if(top==(size-1)){
				cout<<"Stack is full no more values added..."<<endl;
			}
			else{
				top++;
				arr[top] = n;
				cout<<"The value is added in the stack......"<<endl;
			}
		}
		
		void pop(){
			if(top==-1){
				cout<<"The stack is Empty..."<<endl;
			}
			else{
				cout<<"The top is now = "<<arr[top];
				top--;
			}
		}
		void Show(){
			cout<<"Top value = "<<arr[top]<<", Position = "<<top<<endl;
		}
		
		void Display(){
			for(int i=top; i>=0; i--){
				cout<<arr[i]<<endl;
			}
		}
		~Stack(){
			delete []arr;
		}
};

int main(){
	int s;
	cout<<"Write the size of an array = ";
	cin>>s;
	Stack obj(s);
	cout<<endl;
	int n;
	cout<<"Stack have following functionalities...."<<endl;
	cout<<"1. Push value.."<<endl;
	cout<<"2. Pop value.."<<endl;
	cout<<"3. Show Top.."<<endl;
	cout<<"4. Display Stack.."<<endl;
	cout<<"5. Exit programm.."<<endl;
	code:
	cout<<endl;
	cout<<"Write = ";
	cin>>n;
	cout<<endl;
	
	if(n==1){
		int value;
		cout<<"Enter the value to put in stack = ";
		cin>>value;
		obj.push(value);
	}
	else if(n==2){
		obj.pop();
	}
	else if(n==3){
		obj.Show();
	}
	else if(n==4){
		obj.Display();
	}
	else if(n==5){
		return 0;
	}
	else
		cout<<"Invalid Input...."<<endl;
	
	goto code;	
	return 0;
}























