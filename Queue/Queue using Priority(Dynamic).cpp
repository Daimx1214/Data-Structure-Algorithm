#include<iostream>
using namespace std;

struct Node{
	string Data;
	int priority;
	Node *next;
};
class Priority{
	Node *front;
	Node *rear;
public:
	Priority(){
		front = NULL;
		rear = NULL;
	}
	
	void isEmpty(){
		if(front == NULL){
			cout<<"Priority Queue is Empty "<<endl;
		}
		else{
			cout<<"Priority Queue is NOT Empty "<<endl;
		}
	}
	
	void EnQueue(string value , int priority){
		Node *temp = new Node();
		temp->Data = value;
		temp->priority = priority;
		temp->next = NULL;
		
		if(front == NULL){
			front = temp;
			rear = temp;
		}
		
		else if(priority < front->priority){
			temp->next = front; 
			front = temp ;
		}
		 
		else{
			Node *newNode = front;
			while(newNode->next != NULL && newNode->next->priority <= priority){
				newNode = newNode->next;
			}
				temp->next = newNode->next;
				newNode->next = temp;
		}
		
		if(temp->next == NULL){
			rear = temp;
		}
		cout<<"EnQueue Priority queue: "<<value<<"--"<<priority<<endl;
	}
	
	void DeQueue(){
		if(front == NULL){
			cout<<"Priority Queue is Empty "<<endl;
			return;
		}
		
		Node *temp = front;
		
		cout<<"DeQueue Priority queue: "<<temp->Data<<"--"<<temp->priority<<endl;
		front = front->next;
		delete temp;
		
		if(front == NULL){
			rear = NULL;
		}
	}
	
	void ShowPeek(){
		if(front == NULL){
			cout<<"Priority Queue is Empty "<<endl;
			return;
		}
		cout<<"Most Priority queue: "<<front->Data<<"--"<<front->priority<<endl;
	}
	
	void Display(){
	    if(front == NULL){
			cout<<"Priority Queue is Empty "<<endl;
			return;
		}
		Node *temp = front;
		cout<<"Priority Queue shown: ";
		while(temp != NULL){
			cout<< temp->Data <<"--"<< temp->priority << " ";
			temp = temp->next;
		}
		cout<<endl;
	}
};

int main(){
	Priority queue;
     
    int choice;
    
    while(true){
    	cout<<"\nPriority Queue Operations: "<<endl;
    	cout<<"1. IsEmpty: "<<endl;
    	cout<<"2. EnQueue: "<<endl;
    	cout<<"3. DeQueue: "<<endl;
    	cout<<"4. ShowPeek: "<<endl;
    	cout<<"5. Display: "<<endl;
    	cout<<"6. EXIT: "<<endl;
    	cout<<"Enter Your Choice: ";
    	
    	cin>> choice;
    	switch(choice){
    		case 1:{
    			queue.isEmpty();
				break;
			}
    		case 2:{
    			string value;
    			cout<<"Enter the Value: ";
    			cin>>value;
    			int priority;
    			cout<<"Enter the Priority: ";
    			cin>>priority;
    			queue.EnQueue(value,priority);
				break;
			}
			case 3:{
				queue.DeQueue();
				break;
			}
			case 4:{
				queue.ShowPeek();
				break;
			}
			case 5:{
				queue.Display();
				break;
			}
			case 6:{
				return 0;
				break;
			}
			default: {
				cout<<"Invalid Choice(TRY AGAIN)";
				break;
			}
		}	
	}
}

