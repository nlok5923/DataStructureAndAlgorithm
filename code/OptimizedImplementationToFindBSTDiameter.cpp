//optimized implementation of Diameter of BST
//base case
//when tree is null height(null)=Diameter(null)==0
//hypothesis will get leftdiameter,leftheight,rightdiameter,rightheight
//h = 1+max(leftheight,rightheight);
//d = max(leftheight+rightheight,leftdiameter,rightdiameter);

//function which return both Diameter and heightbasically will return a pair

//will use inbuilt pair class
pair<int, int> heightDiamter(BinrayTreeNode<int>* root){
    if(root==NULL)
    {
        pair<int,int> p;
        p.first = 0 ;
        p.second = 0;
        return p;
    }
    pair<int,int> leftAns = heightDiamter(root->left);
    pair<int,int> rightAns = heightDiamter(root->right);
    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = rightAns.first;
    
    int height = 1 + max(lh,rh);
    int Diameter = max(lh+rh,max(ld,rd));
    pair<int,int> p;
    p.first = height;
    p.second = Diameter;
    return p;
    
    
}