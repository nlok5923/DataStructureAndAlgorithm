//diameter of a binary tree
//maximum distance between two node 
//distance in terms of edges 
//1 edge = 1 distance unit
//not an optimized implementation takes almost O(n*h) time
int height(BinrayTreeNode<int>* root){
    if(root==NULL)
    return 0;
    return 1+ max(height(root->left),height(root->right));
}

int diameter(BinrayTreeNode<int>* root){
    if(root==NULL)
    return 0;
    int option1 = height(root->left)+height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1,max(option2,option3));
}