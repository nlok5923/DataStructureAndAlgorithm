//binary tree started
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode* right;
    BinaryTreeNode * left;
    BinaryTreeNode(T data) {
        this->data = data;
        left = NUll;
        right = NUll;
    }
    ~BinaryTreeNode() {
        delete left;
        delete right;
        //delete NUll se kuch nahi hoga 
    }
}

int main()
{
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> * node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;
    
}