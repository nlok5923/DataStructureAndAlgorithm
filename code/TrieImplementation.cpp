#include<bits/stdc++.h>
using namespace std;

class TrieNode {
	public:
	char data;
	TreeNode **children;
	bool isTerminal;
	
	TrieNode(char data){
		this->data = data;
		//hold address of node
		//assuming all alphabets will be lowercase
		children = new TrieNode*[26];
		isTerminal = false;
		// removing garbage address
		for(int i=0;i<26;i++)
		children[i]= null;
	}
};

class Trie{
	TrideNode *root;
	public:
	Trie(){
		//pass data as null for root
		root = new TrieNode('\0');
	}
	 void insertWord(TrieNode *root,string word){
	 	//base case 
		 if(word.size == 0){
		 	root->isTerminal =  true;
		 	return;
		 }
		 // small calculation 
		 // to get the correct index a will be converted to ascii code
		 
		 int index = word[0]-'a';
		 TrieNode *child;
		 if(root->children[index] != NULL){
		 	child = root->children[index];
		 }
		 else{
		 	child = new TrieNode(word[0]);
		 	root->children[index] =  child;
		 }
		 
		 //recursive call 
		 insertWord(child, word.substr(1)); 	
	 }
	 void insertWord(string word){
	 	insertWord(root,word);
	 }
	 
	 bool searchWord(){
	 	
	 }
	 void removeWord(TrieNode * root,string word){
	 	if(word.size()==0){
	 	root->isTerminal = false;
	 	return;
		}
		//small calculations 
		TrieNode *child;
		int index = word[0]-'a';
		if(root->children[index]!=NULL){
			child = root->children[index];
		}
		else
		{
	    // word not found 
			return;
		}
		//calling recursively
		removeWord(child,word.substr(1));
		
		//check if child is usless if yes then remove it 
		//kya child last hai 
		if(child->isTerminal == false){
			//child ka koi further child nahi hai 
			for(int i=0;i,26;i++){
				if(child->children[index]!=NULL){
					return;
				}
			}
			//har jagah null milgaya 
			delete child;
			//parent of child ke index mai null daal diya
			root->children[index] = NULL;
		}
	 }
	 void removeWord(string word){
	 	removeWord(root,word);
	 }
};



int main(){
		
};
