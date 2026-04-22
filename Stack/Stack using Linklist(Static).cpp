#include<iostream>
using namespace std;

struct Node{

	int data;
	Node* next;
	
    Node(int d){
	data = d;
	next = NULL;
    }
};

class Stack{
private:
	Node* head;
	const int maxValue = 5;
	int count;
public:
	Stack(){
		head = NULL;
		count = 0;
	}
	
	void push(int n){
		if(count == maxValue){
			cout<<"Bro, Stack is full..."<<endl;
			return;
		}
		Node* temp = new Node(n);
		temp-> next = head;
		head = temp;
		count++;
		cout<<"Pushed Element: "<< n <<endl;
	}
	
	void pop(){
		if(head == NULL){
			cout<<"Stack is empty "<<endl;
			return;
		}
		cout<<"Popped Out: "<< head->data<<endl;
		Node* temp = head;
//		temp = head;
        head = head->next;
		delete temp;
		count--;	
	}
	
	void peek(){
		if(head == NULL){
			cout<<"Stack is empty"<<endl;
			return;
		}
		cout<<"Toppest element is "<<head->data << " with Position = "<< count - 1 << endl;	
	}
	
	void display(){
		if(head == NULL){
			cout<<"Stack is Empty "<<endl;
			return;
		}
		cout<<"Showing Element = ";
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp -> next;
		}
		cout<<endl;		
	}
};

int main(){
	Stack stk;
	
	int choice = 0;
	while(true){
		
	cout<<"Stack have following Operations...."<<endl;
	cout<<"1. Push value.."<<endl;
	cout<<"2. Pop value.."<<endl;
	cout<<"3. Peek Stack.."<<endl;
	cout<<"4. Display Stack.."<<endl;
	cout<<"5. Exit programm.."<<endl;
	cout<<"Enter Your Choice ";
	cin>> choice;
	
		switch(choice){
			case 1:{
				int val;
				cout<<"Enter the value: ";
				cin>>val;
				stk.push(val);
				break;
			}
			case 2:{
				stk.pop();
				break;
			}
			case 3:{
				stk.peek();
				break;
			}	
			case 4:{
				stk.display();
				break;
			}
			case 5:{
				return 0;
			}
			default: 
			    cout<<"Invalid Value...";
		}
	}	
}






