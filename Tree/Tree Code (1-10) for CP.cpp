//Q1.  Inorder Traversal
//Q2.  Preorder Traversal
//Q3.  Postorder Traversal
//Q4.  Level Order Traversal
//Q5.  Height of Tree
//Q6.  Size of Tree
//Q7.  Count Leaf Nodes
//Q8.  Find Maximum
//Q9.  Mirror / Invert Tree
//Q10. Check Identical Trees
#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

int height(Node* root){
    if(root==NULL) return 0;
    int leftH=height(root->left);
    int rightH=height(root->right);
    return max(leftH,rightH)+1;
}

int size(Node* root){
    if(root==NULL) return 0;
    return size(root->left)+size(root->right)+1;
}

int countLeaves(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return countLeaves(root->left)+countLeaves(root->right);
}

int findMax(Node* root){
    if(root==NULL) return -1;
    int leftMax=findMax(root->left);
    int rightMax=findMax(root->right);
    return max(root->data,max(leftMax,rightMax));
}

void mirror(Node* root){
    if(root==NULL) return;
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}

bool isIdentical(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL) return true;
    if(root1==NULL || root2==NULL) return false;
    return (root1->data==root2->data) &&
           isIdentical(root1->left,root2->left) &&
           isIdentical(root1->right,root2->right);
}

int main(){
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(8);

    cout<<"\nInorder Traversal: ";
    inorder(root);

    cout<<"\nPreorder Traversal: ";
    preorder(root);

    cout<<"\nPostorder Traversal: ";
    postorder(root);

    cout<<"\nLevel Order: ";
    levelOrder(root);

    cout<<"\nHeight of Tree: "<<height(root);
    cout<<"\nSize of Tree: "<<size(root);
    cout<<"\nCount Leaf Nodes: "<<countLeaves(root);
    cout<<"\nMaximum in Tree: "<<findMax(root);
    cout<<"\nMirror Tree: ";
    mirror(root);
    inorder(root);

    Node* root2=new Node(5);
    root2->left=new Node(3);
    root2->right=new Node(7);
    root2->left->left=new Node(1);
    root2->left->right=new Node(4);
    root2->right->left=new Node(6);
    root2->right->right=new Node(8);

    Node* root3=new Node(5);
    root3->left=new Node(3);
    root3->right=new Node(7);
    root3->left->left=new Node(1);
    root3->left->right=new Node(4);
    root3->right->left=new Node(6);
    root3->right->right=new Node(8);

    cout<<"\nIdentical Trees: ";
    if(isIdentical(root2,root3))
        cout<<"Yes, Trees are Identical";
    else
        cout<<"No, Trees are NOT Identical";

    return 0;
}