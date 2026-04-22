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
	Node *head;
public:
	Stack(){
		head = NULL;
	}
	
	void push(int n){
		Node* temp = new Node(n);
//		temp->data = n;
		temp->next = head;
		head = temp; 
		cout<<"Pushed element: "<< n << endl;
	}
	
	void pop(){
		if(head == NULL){
			cout<<"Stack is Empty..";
			return;
		}
		else{
			cout<<endl;
			cout << "Popped element: " << head->data << endl;
		    Node* temp = head;
			head = head->next;  
            delete temp;  
		}
	}
	
	void Peek(){
		if(head == NULL){
			cout<<"Stack is Empty..";
			return;
		}
		else{
			cout<<"Top most element: "<< head->data<<endl;
		}
		
		
	}
	
	void display(){
		if(head == NULL){
			cout<<"Stack is empty";
			return;
		}
		else{
			cout<<"Stack shown = ";
			Node* temp = head;
			while(temp != NULL){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<endl;
		}
	}
	
};

int main(){
	Stack stk;
    
        int choice;

        
        while (choice != 6){
		
		cout<<endl;
        cout<<"Here are some Stack Operations" << endl;
        cout<< "Select Anyone of them "<<endl;
        cout << " 1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    	
    	switch(choice){
    		case 1: {
    			int val;
    			cout<<"Enter the value you wanna Push: ";
    			cin>>val;
    			stk.push(val);
				break;
			}
			case 2: {
				stk.pop();
				break;
			}
			case 3: {
				stk.Peek();
				break;
			}	
			case 4: {
				stk.display();
				break;
			}
			case 5: {
				return 0;
			}
			default:
				cout<<"Invalid value! ";
		}
    }
	return 0;
}






//|----------
//| 30 | 200|
//|----------
//| 20 | 100|
//|----|----|
//| 10 |  N |
//|----|----|
