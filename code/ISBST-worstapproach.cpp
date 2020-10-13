//checking Binary tree is BST or not
//bekar approach
//this solution if O(nh) h is the height of tree 
int minimum(BinaryTreeNode<int> * root){
    if(root==NULL)
    return INT_MAX;
    return minimum(root->data, min(minimum(root->left),minimum(root->right)));
}
int maximum(BinaryTreeNode<int>* root){
     if(root==NULL)
    return INT_MIN;
    return maximum(root->data, max(maximum(root->left),maximum(ro
    
}
bool isBST(BinaryTreeNode<int>* root){
    if(root==NULL)
    return true;
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    bool output =(root->data >leftMax) &&(root->data <=rightMin) && isBST(root->left) && isBST(root->right);
    return output;
}