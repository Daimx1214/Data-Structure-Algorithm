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

int NodeSum(Node *root){

//	if(root==NULL){
//		return 0;
//	}
	return (root->data+ NodeSum(root->left)+ NodeSum(root->right));
}

void Total(Node *root, int &sum){
	if(root==NULL){
		return;
	}
    sum = sum + root->data;
    Total(root->left, sum);
    Total(root->right, sum);
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