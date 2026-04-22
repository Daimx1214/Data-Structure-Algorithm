
                                   //For Dynamic
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
	
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();
    Node* n6 = new Node();

    n1->data = 2;
    n2->data = 6;
    n3->data = 8;
    n4->data = 7;
    n5->data = 1;
    n6->data = 10;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;  
    n6->next = NULL;

//    Node* head = n1;

    cout << "LinkList shown = ";

    Node* temp = n1;
    while (temp != NULL) {
        cout << temp->data<<" "<< endl;
        temp = temp->next;
    }
    return 0;
}



//                                    // For Static
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//int main() {
//
//    Node n1, n2, n3, n4, n5, n6;
//
//    n1.data = 2;
//    n2.data = 6;
//    n3.data = 8;
//    n4.data = 7;
//    n5.data = 1;
//    n6.data = 10;
//
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
//    n5.next = &n6;
//    n6.next = nullptr;
//
//    Node* head = &n1;
//
//    cout << "Data\tCurrent Address\t\tNext Address" << endl;
//    cout << "-----------------------------------------------" << endl;
//
//    Node* current = head;
//    while (current != nullptr) {
//        cout << current->data << "\t" 
//             << current << "\t\t"       // current node ka address
//             << current->next << endl; // next node ka address
//        current = current->next;
//    }
//
//    return 0;
//}
//
//
