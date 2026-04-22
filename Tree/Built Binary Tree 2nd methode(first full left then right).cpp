#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *left;
	Node *right;
public:
	Node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

Node *BinaryTree(){
	int x;
	cin>>x;
	
	if(x==-1){
		return NULL;
	}
	Node *temp = new Node(x);
	cout<<"Enter the Left child of "<<x<<": ";
	temp->left = BinaryTree();
	cout<<"Enter the right child of "<<x<<": ";
	temp->right = BinaryTree();
	return temp;
}

void PreOrder(Node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
		
}

void InOrder(Node *root){
	if(root==NULL){
		return;
	}
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
		
}

void PostOrder(Node *root){
	if(root==NULL){
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
    cout<<root->data<<" ";
		
}

int main(){
	cout<<"Enter the root Node: ";
	Node *root;
	root = BinaryTree(); // tree creation
	
	cout<<"Pre Order: ";
	PreOrder(root);
	
	cout<<"\nIn Order: ";
	InOrder(root);
	
	cout<<"\nPost Order: ";
	PostOrder(root);
}
