#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
	
	Node(int d){
		data = d;
		next = NULL;
		prev = NULL;
	}
};

class LinkList{
private:
	Node* head;
//	Node* tail;
public:
	LinkList(){
		head = NULL;
	}
	
	void AddAtFirst(int value){
		Node *newNode = new Node(value);
		newNode->next = head;
		newNode->prev = NULL;	
		    if(head != NULL){
		    	head->prev = newNode;
		}
		    head = newNode;
		    cout << "Node Added at Start: " << value << endl;
	}
	
	void AddAtLast(int value){
		Node* newNode = new Node(value);
//        newNode->data = value;  
        newNode->next = NULL;    
       
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;  
            return;
        }
        
	        Node *temp = head;
	        while(temp->next != NULL){
	            temp = temp->next;
	        }
                temp->next = newNode;
	            newNode->prev = temp;
	            cout << "Node Added at End: " << value << endl;
     	}
     	
        void AddAtMiddle(int value, int pos) {
            if (pos < 1) {
                cout << "Invalid Position ";
                return;
            }
            
            Node *newNode = new Node(value);

            if (pos == 1) {
                newNode->next = head;
            if (head != NULL){
                head->prev = newNode;
                head = newNode;
			}
            cout << "Node Added at first Position :\n " << value << endl;
            return;
        }

        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid Position " << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        
        if (temp->next != NULL){
            temp->next = newNode;
            temp->prev = newNode;
		}
        temp->next = newNode;
        newNode->prev = temp;
        cout << "Node Added at Position " << pos << ": " << value << endl;
    }
    
    void DeleteAtFirst(){
    	if(head == NULL){
    		cout<<"LinkList is empty "<<endl;
    		return;
		}
    	Node* temp = head;
    	head = head->next;
    	if(head != NULL){
		    head->prev = NULL;
		}
		cout<<"Deleted first value: "<< temp->data<<endl;
    	delete temp;
	}
	
	void DeleteAtLast(){
		if(head == NULL){
    		cout<<"LinkList is empty "<<endl;
    		return;
		}	
		
		Node *temp = head;
		
		if(head->next == NULL){
			delete head;
			head = NULL;
			return;
		}
		
		while(temp->next != NULL){ // last node
			temp = temp->next; 
		}
		Node *last=temp->prev;
		last->next = NULL;
		cout<<"Deleted first value: "<< temp->data<<endl;
		delete temp;
//		                                     or

//		while(temp->next->next != NULL){ // last sa aik phala wala
//			temp = temp->next; 
//		}
//		Node *tail = temp->next;
//		temp->next = NULL;
//		delete tail;
	}
	
void deleteAtMiddle(int pos) {
    if (pos < 1) {
        cout << "Invalid Position!" << endl;
        return;
    }

    if (head == NULL) {
        cout << "Head is Empty" << endl;
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        cout << "Deleted Node at Position " << pos << ": " << temp->data << endl;
        delete temp;
        return;
    }
    
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    Node* tail = temp->next;    
    temp->next = tail->next;    
    cout << "Deleted Node at Position " << pos << ": " << tail->data << endl;
    delete tail;
}

    void peek(){
	    if (head == NULL) {
            cout << "Head is Empty" << endl;
            return;
        }
        
        cout<<"The Top Node Data  is = "<<head->data<<endl;
    }
		
	void Display(){
		if(head == NULL){
			cout<<"LinkList is Empty: "<<endl;
			return;
		}
		Node *temp = head;
		cout<<"LinkList is shown: ";
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
};

int main() {
	LinkList obj;
    int choice;
    
    while(true){
    	cout<<"\nDouble LinkList All Operation: "<<endl;
    	cout<<"1. Add at first Node: "<<endl;
    	cout<<"2. Add at Last Node: "<<endl;
    	cout<<"3. Add at Middle Node: "<<endl;
    	cout<<"4. Delete at first Node: "<<endl;
    	cout<<"5. Delete at Last Node: "<<endl;
    	cout<<"6. Delete at Middle Node: "<<endl;
    	cout<<"7. Show Top Node: "<<endl;
    	cout<<"8. Display Node: "<<endl;
    	cout<<"9. Exit: "<<endl;
    	cout<<"Enter the choice: ";
    
    cin>>choice;
    switch(choice){
    	case 1:{
    		int val;
    		cout<<"Enter the value added at first node: ";
    		cin>>val;
    		obj.AddAtFirst(val);
			break;
		}
		case 2:{
		    int val;
    		cout<<"Enter the value added at last node: ";
    		cin>>val;
    		obj.AddAtLast(val);
			break;
		}
		case 3:{
		    int val;
    		int pos;
    		cout<<"Enter the value added at Middle Node: ";
    		cin>>val;
    		cout<<"Enter the position added at Middle Node: ";
    		cin>>pos;
    		obj.AddAtMiddle(val , pos);
			break;
		}
		case 4:{
			obj.DeleteAtFirst();
			break;
		}
		case 5:{
			obj.DeleteAtLast();
			break;
		}
		case 6:{
			int pos;
			cout<<"Enter the position added at Middle Node: ";
    		cin>>pos;
			obj.deleteAtMiddle(pos);
			break;
		}
		case 7:{
			obj.peek();
			break;
		}
		case 8:{
			obj.Display();
			break;
		}
		case 9:{
			return 0;
		    }
        }
    }
}