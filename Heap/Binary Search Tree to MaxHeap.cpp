#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void InOrder(Node* root, vector<int>& ans){
	if(!root){
		return;
	}
	InOrder(root->left,ans);
	ans.push_back(root->data);
	InOrder(root->right,ans);	
}

void PostOrder(Node *root, vector<int>&ans, int &index){
	if(!root){
		return;
	}
	PostOrder(root->left,ans,index);
	PostOrder(root->right,ans,index);
	
	root->data = ans[index]; // value node ma aa jay gi
	index++;  // value ko index mila gi jaisa 1,2,3,4 then ++ krta jay ga
	
}

void BSTtoMaxHeap(Node* root){
	vector<int>ans;
	
	InOrder(root,ans);
	int index=0;
	PostOrder(root,ans,index);
}

void PrintPostOrder(Node* root){
    if(!root) return;
    PrintPostOrder(root->left);
    PrintPostOrder(root->right);
    cout << root->data << " ";
}


int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    BSTtoMaxHeap(root);
    PrintPostOrder(root);
}


