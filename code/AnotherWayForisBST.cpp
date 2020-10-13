// //checking Binary tree is BST or not
// //bekar approach
// //this solution if O(nh) h is the height of tree 
// int minimum(BinaryTreeNode<int> * root){
//     if(root==NULL)
//     return INT_MAX;
//     return minimum(root->data, min(minimum(root->left),minimum(root->right)));
// }
// int maximum(BinaryTreeNode<int>* root){
//      if(root==NULL)
//     return INT_MIN;
//     return maximum(root->data, max(maximum(root->left),maximum(ro
    
// }
// bool isBST(BinaryTreeNode<int>* root){
//     if(root==NULL)
//     return true;
//     int leftMax = maximum(root->left);
//     int rightMin = minimum(root->right);
//     bool output =(root->data >leftMax) &&(root->data <=rightMin) && isBST(root->left) && isBST(root->right);
//     return output;
// }
//bst better approach

//we will return three things min, max, and isBST or not 
// class isBSTReturn {
//     public:
//     bool isBST;
//     int mini;
//     int maxi;
// }
// isBSTReturn isBST2(BinaryTreeNode<int>* root ){
//     if(root==NULL)
//     {
//         isBSTReturn output;
//         output.isBST = true;
//         output.mini = INT_MAX;
//         output.maxi = INT_MIN;
//         return output;
//     }
//     isBSTReturn leftOutput = isBST2(root->left);
//     isBSTReturn rightOutput = isBST2(root->right);
//     int minimum = min(root->data,min(leftOutput.mini,rightOutput.mini));
//     int maximum = max(root->data, max(leftOutput.maxi,rightOutput.maxi));
//     bool isBSTFinally = root->data >leftOutput.maxi && root->data <=rightOutput.mini && leftOutput.isBST&&rightOutput.isBST;  
//     isBSTReturn output;
//     output.mini = minimum;
//     output.maxi = maximum;
//     output.isBST = isBSTFinally;
//     return output;
// }

//another way to do the same 
bool isBST3(BinaryTreeNode<int>* root, int min=INT_MIN, int max= INT_MAX){
    if(root==NULL)
    return true;
    if(root->data < min || root->data >max)
    return false;
    bool isLeftOk = isBST3(root->left, min, root->data -1);
    bool isRightOk = isBST3(root->right, root->data, max);
    return isLeftOk && isRightOk;
    
}









