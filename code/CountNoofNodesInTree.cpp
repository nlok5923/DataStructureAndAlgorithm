//take input usig queue just for simplicity
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <typename T>
class TreeNode{
    public :
    T data;
    vector<TreeNode<T>*> children ;
    TreeNode(T data)
    {
        this->data = data;
    }
};
//no of nodes in a tree 
int CountNodes(TreeNode<int>* root)
{
    int ans =1 ;//corresponding root
    for(int i=0;i<root->children.size();i++)
    {
        ans = ans + CountNodes(root->children[i]);
    }
    return ans;
}

TreeNode<int> * takeInputLevelWise()
{
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int> * root = new TreeNode<int>(rootData);
    Queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter no of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++)
        {
            int childdata;
            cout<<"Enter "<<i<<" child of "<<front->data<<endl;
            cin>>childdata;
            //TreeNode<int> child(childdata);//agar ye kiyato for loop ka baad ye bachega hi nahi space deallocate hogu
            //static nahi banana hai dynamic banana hai 
            TreeNode<int> * child = new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return;
    //queue me int type ke treenode pointer 
}

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
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
}