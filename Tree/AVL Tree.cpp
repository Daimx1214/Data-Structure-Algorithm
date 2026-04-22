#include<iostream>
using namespace std;

class Node{
public:
	int data;
	int height;
	Node *left;
	Node *right;
	
	Node(int value){
		data = value;
		height = 1;
		left = NULL;
		right = NULL;
	}
};
int getHeight(Node* root){
	if(!root){
		return 0;
	}
	return root->height;
};

int getBalance(Node* root){
	return getHeight(root->left) - getHeight(root->right);
};

		// Right Rotation
Node* rightRotation(Node* root){
    Node* child=root->left;
    Node* childRight=child->right;
    
    child->right=root;
    root->left=childRight;
    // Update the height
    root->height = 1+ max(getHeight(root->left), getHeight(root->right));
    child->height = 1+ max(getHeight(child->left), getHeight(child->right));
    return child;
}
		// Left Rotation
Node* leftRotation(Node* root){
    Node* child=root->right;
    Node* childLeft=child->left;

    child->left=root;
    root->right=childLeft;
    // Update the height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

Node *Insert(Node* root, int key){
	if(!root){
		return new Node(key);
	}
	if(key < root->data){
		root->left = Insert(root->left,key);
	}
	else if(key > root->data){
		root->right = Insert(root->right,key);
	}
	else{
		return root;  // if ==
	}	
	root->height = 1+ max(getHeight(root->left), getHeight(root->right));
	
	// check Balancing
	
	int balance = getBalance(root);
	
	if(balance>1 && key < root->left->data){ // left left
		return rightRotation(root);
	}
	else if(balance<-1 && root->right->data < key){ // right right
		return leftRotation(root);
	}
	else if(balance>1 && key > root->left->data){  // left right
		root->left = leftRotation(root->left); // here root->left == middle
		return rightRotation(root);
	}
	else if(balance< -1 && root->right->data > key){  // right left
		root->right = rightRotation(root->right); // here root->right == middle
		return leftRotation(root);
	}
	else{ // no balancing
		return root;
	}
}
void preOrder(Node *root){
	if(!root){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

int main(){
	Node* root = NULL;
	
	root = Insert(root, 10);
	root = Insert(root, 60);
	root = Insert(root, 18);
	root = Insert(root, 100);
	root = Insert(root, 39);
	root = Insert(root, 45);
	root = Insert(root, 59);
	root = Insert(root, 69);
	root = Insert(root, 82);
	
	cout<<"PreOrder: "<<endl;
	preOrder(root);
}