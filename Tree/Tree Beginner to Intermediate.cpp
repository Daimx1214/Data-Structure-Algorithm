//1. inorder()
//2. preorder()
//3. postorder()
//4. levelOrder()
//5. insert()
//6. search()
//7. findMin()
//8. findMax()
//9. height()
//A. size()
//B. countLeaves()
//C. mirror()
//D. diameter()

#include<bits/stdc++.h>
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
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        
        cout<<curr->data<<" ";
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

bool search(Node* root,int val){
    if(root==NULL){
        return false;
    }
    if(root->data==val){
        return true;
    }
    if(val<root->data){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }
}

int findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}

int findMax(Node* root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftH=height(root->left);
    int rightH=height(root->right);
    return max(leftH,rightH)+1;
}

int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return size(root->left)+size(root->right)+1;
}

int countLeaves(Node* root){
	int count =0;
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        count = 1;
    }
    return count + countLeaves(root->left)+countLeaves(root->right);
}

void mirror(Node* root){
    if(root==NULL){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}

int diameter(Node* root){ // two nodes k btw longest path
    if(root==NULL){
        return 0;
    }
    int leftH=height(root->left);
    int rightH=height(root->right);
    
    int totalHeight=leftH+rightH+1;

    int leftDia=diameter(root->left);
    int rightDia=diameter(root->right);
    return max(totalHeight,max(leftDia,rightDia));
}

int main(){
    Node* root=NULL;

    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,1);
    root=insert(root,4);

    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"Level Order: ";
    levelOrder(root);
    cout<<endl;
    cout<<"Height: "<<height(root)<<endl;
    cout<<"Size: "<<size(root)<<endl;
    cout<<"Leaf Count: "<<countLeaves(root)<<endl;
    cout<<"Min: "<<findMin(root)<<endl;
    cout<<"Max: "<<findMax(root)<<endl;
    cout<<"Diameter: "<<diameter(root)<<endl;
    cout<<"Search 4: "<<(search(root,4)?"Found":"Not Found")<<endl;
    cout<<"Mirror Inorder: ";
    mirror(root);
    inorder(root);
	cout<<endl;
    
	return 0;
}