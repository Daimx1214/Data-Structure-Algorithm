#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	
    Node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

int TotalNode(Node *root){

//	if(root==NULL){
//		return 0;
//	}
//	return (1+TotalNode(root->left)+ TotalNode(root->right));
}

void Total(Node *root, int &count){
	if(root==NULL){
		return;
	}
    count++;
    Total(root->left, count);
    Total(root->right, count);
}

int main(){
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
	
	int count = 0;
	Total(root,count);
	cout<<count;
}