#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
class Queue{
	Node *front;
	Node *rear;
public:
    Queue(){
    	front = NULL;
    	rear  = NULL;
	}	
	
	void isEmpty(){
		if(front == NULL){
			cout<<"Queue is Empty "<<endl;
		}
		else{
			cout<<"Queue is Not Empty "<<endl;
		}
	}
	
	void Enqueue(int value){
		
		Node *temp = new Node();
		temp->data = value;
		temp->next = NULL;
		if(rear == NULL){
			front = temp;
			rear = temp;
		}
		else{	
		rear->next = temp;
		rear = temp;  
		}
		cout<<"Value is added: "<<value<<endl;
	}
	
	void Dequeue(){
		if(front == NULL){
			cout<<"Queue is Empty "<<endl;
			return;
		}
		Node *temp = front;
		front = front->next;
		
		cout<<"Queue is removed "<<temp->data<<endl;
		delete temp;
		
		if(front == NULL){
			rear = NULL;
		}	
	}
	
	void Peek(){
        if(front == NULL){
			cout<<"Queue is Empty "<<endl;
			return;
		}
		cout<<"Toppest value of queue = "<<front->data<<endl;
	}

	void display(){
		if(front == NULL){
			cout<<"Queue is Empty "<<endl;
			return;
		}
		Node *temp = front;
       cout<<"Queue shown = ";	
		while(temp != NULL){
			cout<<temp->data << " ";
			temp = temp->next;
		}
		cout<<endl;	
	}
};

int main(){
	Queue queue;
	
	int choice;
	while(true){
		cout<<"\nEnter the choice of queue operation "<<endl;
		cout<<"1. IsEmpty: "<<endl;
		cout<<"2. Enqueue: "<<endl;
		cout<<"3. Dequeue: "<<endl;
		cout<<"4. Show Peek: "<<endl;
		cout<<"5. Display: "<<endl;
		cout<<"6. EXIT "<<endl;
		cout<<"You have choosed = ";
		
		cin>>choice;
	switch(choice){
		case 1:{
			queue.isEmpty();
			break;
		}
		case 2:{
			int value;
			cout<<"Enter the value you wanna insert: ";
			cin>>value;
			queue.Enqueue(value);
			break;
		}
		case 3:{
			queue.Dequeue();
			break;
		}
		case 4:{
			queue.Peek();
			break;
		}	
		case 5:{
			queue.display();
			break;
		}
		case 6:{
			return 0;
		    }		
	    }	
    }	
}






//|----------
//| 30 | N  |
//|----------
//| 20 | 300|
//|----|----|
//| 10 | 200|
//|----|----|

