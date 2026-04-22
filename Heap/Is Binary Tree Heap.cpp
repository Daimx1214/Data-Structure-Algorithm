#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int count(Node* root){
	if(!root){
		return 0;
	}
	return 1 + count(root->left) + count(root->right); // 1 ha root node baqi left right
}

bool CBT(Node *root, int index, int total){
	if(!root){
		return 1;
	}
	
	if(index>=total){
		return 0;
	}
	// check left is CBT && check right is CBT
	return CBT(root->left, 2*index+1, total) && CBT(root->right, 2*index+2, total);
}
bool maxHeap(Node* root){
	
	if(root->left){
		if(root->data < root->left->data){
			return 0;
		}
		if(!maxHeap(root->left)){  // left check lazmi
			return 0; // if left subtree maxHeap nahi hai, to ye true ha
		}
	}
	
	if(root->right){
		if(root->data < root->right->data){
			return 0;
		}
		return maxHeap(root->right); // directly return either 0,1
	}
	return 1;
}

bool isHeap(struct Node* tree){
	// count node
	int num = count(tree);
	// CBT
	bool ans = CBT(tree,0,num);  // tree , index , number no nodes
	if(ans==0){
		return 0;
	}
	// Parent >= child
	return maxHeap(tree);	
}

int main() {
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    if(n==0){
        cout<<"Empty tree"<<endl;
        return 0;
    }
    Node* node[n];
    cout<<"Enter node values: ";
    for(int i=0 ; i<n; i++){
        int val;
        cin>>val;
        node[i] = new Node{val, nullptr, nullptr};
    }

    // Link children for CBT (level order)
    for(int i=0; i<n; i++) {
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<n) node[i]->left = node[left];
        if(right<n) node[i]->right = node[right];
    }

    if(isHeap(node[0])){
        cout<<"The tree is a maxHeap"<<endl;
    } 
	else{
        cout<<"The tree is NOT a maxHeap"<<endl;
    }
    return 0;
}