#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
	char data;
	vector<TrieNode*>children;
	bool isEnd;
		
	TrieNode(char ch){
		data = ch;
		children.resize(26, NULL);
		isEnd = false;
	}	
};

class Trie{
public:
	Trie(){
		root = new TrieNode('\0');
	}
	TrieNode* root;
	
	void insertTrie(TrieNode* root, string word){
		if(word.length() == 0){
			root->isEnd = true;
			return;
		}
		int index = word[0]-'A';
		TrieNode* child;
		
		if(root->children[index] != NULL){
			child = root->children[index]; // continue
		}
		else{
			child = new TrieNode(word[0]);
			root->children[index] = child;
		}
		insertTrie(child, word.substr(1));
	}
	void Insert(string word){
		insertTrie(root, word);
	}
	
	bool searchTrie(TrieNode* root, string word){
		if(word.length() == 0){
			return root->isEnd;
		}
		int index = word[0]-'A';
		TrieNode* child;
		
		if(root->children[index] != NULL){
			child = root->children[index];
		}
		else{
			return false;
		}
		return searchTrie(child, word.substr(1));
	}
	bool Search(string word){
		return searchTrie(root, word);
	}
	
	void removeTrie(TrieNode* root, string word){
	if(word.length()==0){
		root->isEnd=false; 
		return;
	}
	int index = word[0]-'A';

	if(root->children[index]==NULL){
		return; 
	}
	removeTrie(root->children[index], word.substr(1));
	}
	void remove(string word){
		removeTrie(root, word);
	}
};

int main(){
	Trie *t = new Trie();
	
	t->Insert("ARMY");
	t->Insert("DO");
	t->Insert("TIME");
	
	cout<<t->Search("TIME")<<endl;
	t->remove("TIME");
	cout<<t->Search("TIME")<<endl;
	
}


