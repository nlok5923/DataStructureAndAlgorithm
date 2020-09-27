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
};
//printing tree simple 
// void printTre(BinaryTreeNode<int>* root) {
//     if(root==NUll) {
//         return;
//     }
//     cout<<root->data<<endl;
//     printTre(root->left);
//     printTre(root->right);
// }
//advance print 

//takeinput bekar tarika
void printTree(BinaryTreeNode<int>* root) {
    if(root==NULL)
    return;
    cout<<root->data<<" : ";
    if(root->left != NULL)
    cout<<"L"<<root->left->data;
    if(root->right != NULL)
    cout<<"R"<<root->right->data;
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int>* takeInput() {
    // if user gives -1 it means no takeInput
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1)
    return NULL;
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> * leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right rightChild;
    return root;
}

int main()
{
    // BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> * node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    BinaryTreeNode<int> * root = takeInput();
    printTree(root);
    delete root;
    
}