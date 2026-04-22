#include<iostream>
using namespace std;

struct Queue{
	int front;
	int rear;
	int maxSize;
	int *arr;
	
	Queue(int maxSize){
		front = -1;
		rear = -1;
		this->maxSize = maxSize;
		arr = new int[maxSize];
	}
	
	void isEmpty(){
		if(front == -1){
			cout<<"Queue is Empty "<<endl;
			return;
		}
		else{
			cout<<"Queue is not Full "<<endl;
		}
	}
	
	void isFull(){
		if(rear == maxSize - 1){
			cout<<"Queue is Full "<<endl;
			return;
		}
		else{
			cout<<"Queue is not Full "<<endl;
		}
	}
	
	void enQueue(int value){
		if(rear == maxSize - 1){
			cout<<"Queue is Full..."<< endl;
			return;
		}
		if(front == -1)
		    front = 0;
		rear++;
		arr[rear] = value;
		cout<<"The value "<< value << " is added"<<endl;
	}
	
	void deQueue(){
		if(front == -1 || front > rear){
			cout<<"Queue is Empty..."<< endl;
			return;
		}
		else{
			int value = arr[front];
			cout<< "The value " << value << " is removed"<< endl;
			front++;
		}
		if(front > rear){
			front = -1;
			rear = -1;
		}	
	}
	
	void Peek(){
		if(front == -1 || front > rear){
			cout<<"Queue is Empty..."<< endl;
			return;
		}
		else{
			cout<< "The Top most element = " << arr[front] << endl;
		}
	}
	
	void display(){
		if(front == -1 || front > rear){
			cout<<"Queue is Empty..."<< endl;
			return;
		}
		else{
			cout<<"Queue is Displayed: ";
			for(int i = front; i <= rear; i++){
				cout<<arr[i]<< " ";
			}
		}
	}	
};

int main(){
	int size;
	cout<<"Enter the size of Queue = ";
	cin>>size;
	Queue queue(size);
	
	int num;
	
    while(true){
    	
    	cout<<"\n ";
    	cout<<"1. Enqueue\n ";
    	cout<<"2. DeQueue\n ";
    	cout<<"3. ShowPeek\n ";
    	cout<<"4. Show If Empty\n ";
    	cout<<"5. Show If Full\n ";
    	cout<<"6. Display Queue\n ";
    	cout<<"7. EXIT:\n";
    	
    	cout<<"Enter the Number = ";
    	cin>>num;
    	
    	switch(num){
    		case 1:
    			int val;
    			cout<<"Enter the value You wanna add in Queue: ";
    			cin >> val;
    			queue.enQueue(val);
				break;
			case 2:
				queue.deQueue();
				break;
			case 3:
			    queue.Peek();	
				break;
			case 4:
				queue.isEmpty();
				break;
			case 5:
				queue.isFull();
				break;
			case 6:
				queue.display();
				break;
			case 7:
    			return 0;
			default:
				cout<<"Invalid Number: "<<endl;
		}	
	}	
}



