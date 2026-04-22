#include<bits/stdc++.h>
using namespace std;

class Node{
	int data;
	Node *next;
public:	
	Node(int d){
		data = d;
		next = NULL;
	}
};

class Compare{
    public:
    	bool operator()(Node *a , Node *b){
    		return a->data > b->data; // heap ma reverse work krta ha baqi sab ma <= hoga
		}
};

Node* mergeKList(Node *arr[], int k){
	// (arr, arr+k) her linklist k first element array ma 
	priority_queue<Node*, vector<Node*>, Compare>pq(arr, arr+k); 
	
	Node *root = new Node(0);
	Node *tail = root
	
	Node *temp;
	
	while(!pq.empty()){
		temp = pq.top(); // jitna top k element ha unha temp ma store krta ja sorted way ma
		pq.pop();
		tail->next = temp; // usi row k nicha wala element aa jay g
		tail = tail->next;
		
		if(temp->next){ // agar temp k next exist krta ha to push kro
			pq.push(temp->next);
		}
	}
	return root->next;
}