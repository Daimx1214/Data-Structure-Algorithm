//Simple LinkList in main methode

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
	
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr;

    // Step 2: create second node
    Node* second = new Node();
    second->data = 20;
    second->next = nullptr;
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 1: Create 5 nodes
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();

    // Step 2: Assign data
    n1->data = 2;
    n2->data = 6;
    n3->data = 8;
    n4->data = 7;
    n5->data = 1;

    // Step 3: Link the nodes (next pointers)
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = nullptr;  // Last node points to NULL

    // Step 4: Head points to first node
    Node* head = n1;

    // Step 5: Print the linked list with addresses
    cout << "Data\tCurrent Address\t\tNext Address" << endl;
    cout << "-----------------------------------------------" << endl;

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << "\t" 
             << current << "\t"       // current node ka address
             << current->next << endl; // next node ka address
        current = current->next;
    }

    return 0;
}

    // Step 3: create third node
    Node* third = new Node();
    third->data = 30;
    third->next = nullptr;

    // Step 4: link the nodes
    head->next = second;
    second->next = third;

    // Step 5: print the linked list
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
