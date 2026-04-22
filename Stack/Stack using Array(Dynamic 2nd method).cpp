#include<iostream>
using namespace std;

class Stack{
private:
	int* arr;
	int top;
	int size;
public:
	Stack(int s){
		top = -1;
		size = s;
		arr = new int[size];
	}
	
	void Push(int val){
		if(top == size - 1){
			cout<<"Stack is full..."<<endl;
		}
		else{
			top++;
			arr[top] = val;
			cout<<"Push the value: "<<val<<endl;
			return;
		}
	}
	
	int pop(){
		if(top == -1){
			cout<<"Stack is Empty..."<<endl;
		}
		else{
			cout<<"Pop Out the element: "<< arr[top]<<endl;
			top--;
		}
	}
	
	void peek(){
		if(top == -1){
			cout<<"Stack is Empty..."<<endl;
		}
		else{
		cout<<"Toppest value = "<<arr[top]<<" , and itx position = "<<top<<endl;
		}
	}
	
	void Display(){
		if(top == -1){
			cout<<"Stack is Empty..."<<endl;
		}
		cout<<"Stack Elements: ";
		for(int i = top; i >= 0; i--){
			cout<< arr[i]<< " ";
		}
		cout<< endl;
	}
	
	  
	~Stack() {
        delete[] arr;
    }
};


int main(){
	
	int s;
	cout<<"Enter the Size: "<<endl;
	cin>>s;
	Stack stk(s);
    
    int choice;
    do {
        cout<<"Here are some Stack Operations" << endl;
        cout<< "Select Anyone of them "<<endl;
        cout << " 1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "Enter value to push: ";
            cin >> value;
            stk.Push(value);
            break;
        }
        case 2:
            stk.pop();
            break;
        case 3:
            stk.peek();
            break;
        case 4:
            stk.Display();
            break;
        case 5:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}



