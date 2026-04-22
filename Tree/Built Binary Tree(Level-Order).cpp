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

int main(){
	int x , first , second;
	cout<<"Enter the root value: ";
	cin>>x;
	
	Node *root = new Node(x);
	queue<Node*>q;
	q.push(root);
	
	while(!q.empty()){
		Node *temp = q.front();
		q.pop();
		
		cout<<"Enter left: "<< temp->data << endl;
		cin>>first;
		if(first != -1){
			temp->left = new Node(first);
			q.push(temp->left);
		}
		
	    cout<<"Enter right: "<< temp->data <<endl;
	    cin>>second;
    	if(second != -1){
		temp->right = new Node(second);
		q.push(temp->right);
	    }	
	}	
}
