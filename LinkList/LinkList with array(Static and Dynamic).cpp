                                   // For Dynamic
                      
#include <iostream>
using namespace std;

//  Node structure (class)
class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;   // head pointer 

public:
    LinkedList() {
        head = NULL;
    }

    //  Add at End
    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;   // data add ko new pointer ma
        newNode->next = NULL;    // null in next of first pointer

        if (head == NULL) {
            head = newNode;  // starting ma newnode ko head assign kra ga
        } else { 
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;   // temp shift kro
            temp->next = newNode;    // new node add k k us k address pichli ko do
        }
        cout << "Node Added at End: " << value << endl<<"\n";
    }

    // ? Add at Beginning
    void addAtStart(int value) {
        Node* newNode = new Node();
        newNode->data = value; 
        newNode->next = head;   // newnode k next ma head k address
        head = newNode; // shifting head
        cout << "Node Added at Start: " << value << endl<<"\n";
    }

    // ? Add at Position (Middle)
    void addAtPosition(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;

        if (pos == 1) { // newnode list k start ma daloo
            newNode->next = head; // beginning wala kam
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) // position sa aik kam and not null 
            temp = temp->next;
			      
        newNode->next = temp->next;   // 10 = 20 ya aisa hona for address
        temp->next = newNode;  // ab new node  k address temp k next ma hoga
        cout << "Node Added at Position " << pos << ": " << value << endl<<"\n";
        
        
        if (temp == NULL) {
            cout << "Invalid Position!" << endl<<"\n";
            delete newNode;
            return;
        }
    }

    // ? Update Node Value
    void updateNode(int oldValue, int newValue) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == oldValue) { // agar current data old sa match ho jay tab
                temp->data = newValue; 
                cout << "Updated " << oldValue << " ? " << newValue << endl<<"\n";
                return;
            }
            temp = temp->next;  // Data MAtch na hoa 
        }
        cout << "Value " << oldValue << " Not Found!" << endl<<"\n";
    }

    // ? Delete at Beginning
    void deleteAtStart() {
        if (head == NULL) {
            cout << "List is Empty!" << endl<<"\n";
            return;
        }
        Node* temp = head;  // temp = head  temp is head
        head = head->next;    // yani head jo tha us k address ab head(temp) ko mil gaya
        cout << "Deleted Node: " << temp->data << endl<<"\n";
        delete temp;
    }

    // ? Delete at End
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is Empty!" << endl<<"\n";
            return;
        }
        if (head->next == NULL) { // head sa aga jab address ma null mila
            cout << "Deleted Node: " << head->data << endl<<"\n";
            delete head; // yani null wala delete
            head = NULL; // ab jo last bana us k address null
            return;
        }

        Node* temp = head;
        Node* prev = NULL; // head sa aik phala
        while (temp->next != NULL) { 
            prev = temp;    // 10 = 20 wala kam
            temp = temp->next;   // node k data match nhi hota to move on
        }
        cout << "Deleted Node: " << temp->data << endl<<"\n";
        prev->next = NULL;  // temp k delete hona per 2nd last become last with address 0
        delete temp;
    }

    // ? Delete by Position (Middle)
    void deleteAtPosition(int pos) {
        if (head == NULL) {
            cout << "List is Empty!" << endl<<"\n";
            return;
        }

        if (pos == 1) {
            deleteAtStart();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        for (int i = 1; i < pos && temp != NULL; i++) {
            prev = temp;
            temp = temp->next;  // carry on
        }
        
        prev->next = temp->next; // temp value shifting with aik kam 20 = 30 , 30 = null;
        cout << "Deleted Node at Position " << pos << ": " << temp->data << endl<<"\n";
        delete temp;

        if (temp == NULL) {
            cout << "Invalid Position!" << endl<<"\n";
            return;
        }	
    }

    // ? Display List
    void display() {
        if (head == NULL) {
            cout << "List is Empty!" << endl<<"\n";
            return;
        }
        Node* temp = head;
        cout << "Current Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";  
            temp = temp->next;    // untill null
        }
        cout << "NULL" << endl<<"\n";
    }
};

int main() {
       LinkedList list;
    int choice, value, pos, oldValue, newValue;

    do {
        cout << "Enter Your Choice \n";
        cout << "1. Add Node at End\n";
        cout << "2. Add Node at Start\n";
        cout << "3. Add Node at Position\n";
        cout << "4. Update Node Value\n";
        cout << "5. Delete at Start\n";
        cout << "6. Delete at End\n";
        cout << "7. Delete at Position\n";
        cout << "8. Display List\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to add at end: ";
            cin >> value;
            list.addNode(value);
            break;
        case 2:
            cout << "Enter value to add at start: ";
            cin >> value;
            list.addAtStart(value);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> value >> pos;
            list.addAtPosition(value, pos);
            break;
        case 4:
            cout << "Enter old and new value: ";
            cin >> oldValue >> newValue;
            list.updateNode(oldValue, newValue);
            break;
        case 5:
            list.deleteAtStart();
            break;
        case 6:
            list.deleteAtEnd();
            break;
        case 7:
            cout << "Enter position to delete: ";
            cin >> pos;
            list.deleteAtPosition(pos);
            break;
        case 8:
            list.display();
            break;
        case 9:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 9);

    return 0;
}




                     //FOR STATIC

//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    int next; // index of next node (-1 means NULL)
//};
//
//class LinkedList {
//private:
//    Node arr[100]; // Fixed array (static)
//    int head;
//    int size;
//
//public:
//    LinkedList() {
//        head = -1;  // list empty
//        size = 0;   // 0 nodes initially
//    }
//
//    //  Add at End
//    void addNode(int value) {
//        if (size >= 100) {
//            cout << "List is full!" << endl;
//            return;
//        }
//
//        arr[size].data = value;
//        arr[size].next = -1;
//
//        if (head == -1) {
//            head = 0;
//        } else {
//            int temp = head;
//            while (arr[temp].next != -1)
//                temp = arr[temp].next;
//            arr[temp].next = size;
//        }
//        cout << "Node Added at End: " << value << endl;
//        size++;
//    }
//
//    // ? Add at Start
//    void addAtStart(int value) {
//        if (size >= 100) {
//            cout << "List is full!" << endl;
//            return;
//        }
//
//        arr[size].data = value;
//        arr[size].next = head;
//        head = size;
//        size++;
//        cout << "Node Added at Start: " << value << endl;
//    }
//
//    // ? Add at Position (Middle)
//    void addAtPosition(int value, int pos) {
//        if (size >= 100) {
//            cout << "List is full!" << endl;
//            return;
//        }
//
//        if (pos == 1 || head == -1) {
//            addAtStart(value);
//            return;
//        }
//
//        int temp = head;
//        for (int i = 1; i < pos - 1 && temp != -1; i++)
//            temp = arr[temp].next;
//
//        if (temp == -1) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//
//        arr[size].data = value;
//        arr[size].next = arr[temp].next;
//        arr[temp].next = size;
//        size++;
//        cout << "Node Added at Position " << pos << ": " << value << endl;
//    }
//
//    // ? Update Node
//    void updateNode(int oldValue, int newValue) {
//        int temp = head;
//        while (temp != -1) {
//            if (arr[temp].data == oldValue) {
//                arr[temp].data = newValue;
//                cout << "Updated " << oldValue << " ? " << newValue << endl;
//                return;
//            }
//            temp = arr[temp].next;
//        }
//        cout << "Value " << oldValue << " not found!" << endl;
//    }
//
//    // ? Delete at Start
//    void deleteAtStart() {
//        if (head == -1) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        cout << "Deleted Node: " << arr[head].data << endl;
//        head = arr[head].next;
//    }
//
//    // ? Delete at End
//    void deleteAtEnd() {
//        if (head == -1) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//
//        if (arr[head].next == -1) {
//            cout << "Deleted Node: " << arr[head].data << endl;
//            head = -1;
//            return;
//        }
//
//        int temp = head;
//        int prev = -1;
//        while (arr[temp].next != -1) {
//            prev = temp;
//            temp = arr[temp].next;
//        }
//
//        cout << "Deleted Node: " << arr[temp].data << endl;
//        arr[prev].next = -1;
//    }
//
//    // ? Delete at Position
//    void deleteAtPosition(int pos) {
//        if (head == -1) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//
//        if (pos == 1) {
//            deleteAtStart();
//            return;
//        }
//
//        int temp = head;
//        int prev = -1;
//        for (int i = 1; i < pos && temp != -1; i++) {
//            prev = temp;
//            temp = arr[temp].next;
//        }
//
//        if (temp == -1) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//
//        cout << "Deleted Node at Position " << pos << ": " << arr[temp].data << endl;
//        arr[prev].next = arr[temp].next;
//    }
//
//    // ? Display
//    void display() {
//        if (head == -1) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//
//        int temp = head;
//        cout << "Linked List: ";
//        while (temp != -1) {
//            cout << arr[temp].data << " -> ";
//            temp = arr[temp].next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//
//// ?? Main
//int main() {
//    LinkedList list;
//
//    list.addNode(10);
//    list.addNode(20);
//    list.addNode(30);
//    list.display();
//
//    list.addAtStart(5);
//    list.display();
//
//    list.addAtPosition(15, 3);
//    list.display();
//
//    list.updateNode(20, 25);
//    list.display();
//
//    list.deleteAtStart();
//    list.display();
//
//    list.deleteAtPosition(3);
//    list.display();
//
//    list.deleteAtEnd();
//    list.display();
//
//    return 0;
//}

