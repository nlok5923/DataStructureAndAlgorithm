//root to node path in BST
//we has a binary tree now
//we want to return the path 
// root to destined node path 

vector<int>* getRootToNode(BinrayTreeNode<int>* root , int data){
    if(root==NULL)
    return NULL;
    
    if(root->data = data){
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    vector<int> * leftOutput = getRootToNode(root->left, data);
    if(leftOutput!=NULL)
    {
        leftOutput->push_back(root->data);
        return leftOutput;
    }
    vector<int> * rightOutput = getRootToNode(root->right,data);
    if(rightOutput!=NULL)
    {
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else
    {
        return NULL;
    }
    
}