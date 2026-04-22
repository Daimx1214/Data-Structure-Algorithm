#include <iostream>
using namespace std;

class Node {
public:
    string url;
    Node* next;
    Node(string u) {
        url = u;
        next = NULL;
    }
};

class Browser{
private:
    Node* head; 

public:
    Browser() {
        head = NULL;
    }

    void push(string website) {
        Node* newNode = new Node(website);
        newNode->next = head;
        head = newNode;
        cout << "Visited: " << website << endl;
    }

    void pop() {
        if (head == NULL) {
            cout << "No Previous page: "<<endl;
            return;
        }
        cout << "Removing First: " << head->url << endl;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void Peek() {
        if (head == NULL){
            cout << "No Previous page: "<<endl;
        	return;
		}
        else
            cout << "Toppest page: " << head->url << endl;
    }
    
    void Display(){
    	if (head == NULL){
            cout << "No Previous page: "<<endl;
            return;
		}
		cout<<"Display All: ";
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->url << " ";
            temp = temp->next;  
        }
	}
};

int main() {
    Browser history;
    int choice;
    string site;

    do {
        
        cout << "\n1. Push" << endl;
        cout << "2. POP" << endl;
        cout << "3. Top Page" << endl;
        cout << "4. Display Data" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter website name: ";
            cin >> site;
            history.push(site);
            break;

        case 2:
            history.pop();
            break;

        case 3:
            history.Peek();
            break;

        case 4:
            history.Display();
            break;
        
		case 5:
		    return 0;
        default:
            cout << "Invalid value"<<endl;
        }
    } while (choice != 5);

    return 0;
}