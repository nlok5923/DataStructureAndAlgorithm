//print a tree
//take input  a tree
//generic trees
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <typename T>
class TreeNode{
    public :
    T data;
    vector<TreeNode<T>*> children ;// ==  vector<TreeNode*> children ;
    //parent ka T type hai to children ka bhi T type ka hi hoga
    TreeNode(T data)
    {
        this->data = data;
    }
};
TreeNode<int> * takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter no of children of root data "<< rootDate<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>*child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

// void printTree(TreeNode<int>* root)
// {
//     cout<<root->data<<endl;
//     for(int i=0;i<root->children.size();i++)
//     {
//         printTree(root->children[i]);
//     }
// }
//printing tree correctly
void printTree(TreeNode<int>* root)
{
    //edge case if root is null because i will never reach here
    if(root == NULL)
    return;
    //base case hamari single node kaam kar rahi hai single node aane par ham aage nahi jata 
    //isliye wahi base case hai
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}

main()
{
    // TreeNode<int>*root = new TreeNode<int>(1);
    // TreeNode<int>*node1 = new TreeNode<int>(2);
    // TreeNode<int>*node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> *root = takeInput();
    printTree(root);
    
}