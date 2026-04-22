//├── 11. Insert in BST
//├── 12. Search in BST
//├── 13. Delete in BST
//├── 14. Check Valid BST
//├── 15. Kth Smallest in BST
//├── 16. Left View
//├── 17. Right View
//├── 18. Top View
//├── 19. Bottom View
//├── 20. Zigzag Traversal
//├── 21. Path Sum Check
//└── 22. Print all Paths

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

Node* search(Node* root,int val){
    if(root==NULL||root->data==val){
        return root;
    }
    if(val<root->data){
        return search(root->left,val);
    }
    return search(root->right,val);
}

Node* findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(val<root->data){
        root->left=deleteNode(root->left,val);
    }
    else if(val>root->data){
        root->right=deleteNode(root->right,val);
    }
    else{
        if(root->left==NULL){
            return root->right;
        }
        if(root->right==NULL){
            return root->left;
        }
        Node* minNode=findMin(root->right);
        root->data=minNode->data;
        root->right=deleteNode(root->right,minNode->data);
    }
    return root;
}

bool isValidBST(Node* root,int minVal=INT_MIN,int maxVal=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data<=minVal||root->data>=maxVal){
        return false;
    }

    return isValidBST(root->left,minVal,root->data)&&isValidBST(root->right,root->data,maxVal);
}

int kthSmallest(Node* root,int& k){
    if(root==NULL){
        return -1;
    }
    int left=kthSmallest(root->left,k);

    if(k==0){
        return left;
    }
    
    k--;
    if(k==0){
        return root->data;
    }
    return kthSmallest(root->right,k);
}

void leftView(Node* root,int level,int& maxLevel){
    if(root==NULL){
        return;
    }
    if(level>maxLevel){
        cout<<root->data<<" ";
        maxLevel=level;
    }
    leftView(root->left,level+1,maxLevel);
    leftView(root->right,level+1,maxLevel);
}

void rightView(Node* root,int level,int &maxLevel){
    if(root==NULL){
        return;
    }
    if(level>maxLevel){
        cout<<root->data<<" ";
        maxLevel=level;
    }
    rightView(root->right,level+1,maxLevel);
    rightView(root->left,level+1,maxLevel);
}

void find(Node* root, int pos, int &L, int &R){
    if(root==NULL){
    	return;
	}
    L = min(L, pos);
    R = max(R, pos);
    find(root->left, pos-1, L, R);
    find(root->right, pos+1, L, R);
}

vector<int>topView(Node* root){
        if(root==NULL){
    		return {};
		}
        int L=0, R=0;
        find(root, 0, L, R);
        
        int size = R-L+1;
        vector<int> ans(size, 0); 
        queue<Node*>q;
        queue<int> posQ;
        
        q.push(root);
        posQ.push(0-L);   
        while (!q.empty()){
            Node* temp = q.front(); 
			q.pop();
            int pos = posQ.front(); 
			posQ.pop();
        
        if (ans[pos] == 0){           // pehli baar hi set karo (top node)
            ans[pos] = temp->data;	
        }   
        if(temp->left){
            q.push(temp->left);
            posQ.push(pos - 1);
        }
        if (temp->right) {
            q.push(temp->right);
            posQ.push(pos + 1);
        }
    }
    return ans;
}

vector<int> bottomView(Node* root){
        if(root == nullptr){
        	return {};
		}
       
        int L=0, R=0;
        find(root, 0, L, R);
       
        int size = R-L+1;
        vector<int> ans(size, 0);  
        queue<Node*> q;
        queue<int> posQ;
       
        q.push(root);
        posQ.push(0-L);       
        while (!q.empty()){
            Node* temp = q.front(); 
			q.pop();
            int pos = posQ.front(); 
			posQ.pop();
           
        ans[pos] =temp->data;
        
        if(temp->left){
            q.push(temp->left);
            posQ.push(pos - 1);
        }
        if (temp->right) {
            q.push(temp->right);
            posQ.push(pos + 1);
        }
    }
    return ans;
}

void zigzag(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        int sz=q.size();
        vector<int> row(sz);

        for(int i=0;i<sz;i++){
            Node* curr=q.front();
            q.pop();

            int idx=leftToRight? i : sz-1-i;
            row[idx]=curr->data;

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        for(int val:row){
            cout<<val<<" ";
        }
        leftToRight=!leftToRight;
    }
}

bool pathSum(Node* root,int target){
    if(root==NULL){
        return false;
    }
    if(root->left==NULL&&root->right==NULL){
        return root->data==target;
    }
    return pathSum(root->left,target-root->data) || pathSum(root->right,target-root->data);
}

void printAllPaths(Node* root,vector<int>& path){ // root to leaf all path print
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    
    if(root->left==NULL&&root->right==NULL){
        for(int val:path){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    printAllPaths(root->left,path);
    printAllPaths(root->right,path);
    path.pop_back(); 
}

void inorder(Node* node){
    if(node==NULL){
    	return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main(){
    Node* root=NULL;
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,1);
    root=insert(root,4);
    root=insert(root,6);
    root=insert(root,8);
    
    cout<<"\nInsert BST (Inorder print): ";
    inorder(root);
    cout<<"\nSearch 4 in BST: ";
    cout<<(search(root,4)?"Found":"Not Found");
    cout<<"\nDelete 3 (Inorder after delete): ";
    root=deleteNode(root,3);
    inorder(root);
    cout<<"\nIs Valid BST: ";
    cout<<(isValidBST(root)?"Yes":"No");
    cout<<"\n2nd Smallest: ";
    int k=2;
    cout<<kthSmallest(root,k);
    cout<<"\nLeft View: ";
    int maxLevel=0;
    leftView(root,1,maxLevel);
    cout<<"\nRight View: ";
    maxLevel=0;
    rightView(root,1,maxLevel);
    cout<<"\nTop View: ";
	vector<int> tv = topView(root);
	for(int val : tv){
		cout<<val<<" ";
	}
	cout<<"\nBottom View: ";
	vector<int>bv = bottomView(root);
	for(int val : bv){
		cout<<val<<" ";
	}
    cout<<"\nZigzag Traversal: ";
    zigzag(root);
    cout<<"\nPath Sum 13 exists: ";
    cout<<(pathSum(root,13)?"Yes":"No");
    cout<<"\nAll Root to Leaf Paths:\n";
    vector<int> path;
    printAllPaths(root,path);

    return 0;
}