//depth of a node
//how far is it from the root
// print node at level k
void printAtLevelK(TreeNode<int> * root , int k)
{
    if(k==0)
    {
    cout<<root->data<<endl;
    return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printAtLevelK(root->children[i],k-1);
    }
}