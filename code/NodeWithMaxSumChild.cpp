// Following is the given Tree node structure
// Node with maximum child sum
// Send Feedback
// Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.
// Input format :
// Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output format :
// Node with maximum sum.
// Sample Input 1 :
// 5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
// Sample Output 1 :
// 1


TreeNode<int>* maxSumNode(TreeNode<int> *root){
    queue<TreeNode<int>*> q1;
    if(root==NULL)
        return root;
    q1.push(root);
    int ans=0;
    TreeNode<int>* ansNode=root;
    while(q1.size()!=0){
        int roots = q1.front()->data;
        int temp=0;
        for(int i = 0;i<q1.front()->children.size();i++){
            temp+= q1.front()->children[i]->data;
            q1.push(q1.front()->children[i]);
        }
        roots = temp+roots;
        if(roots>ans){
            ans=roots;
            ansNode = q1.front();
        }
        q1.pop();
    }
    return ansNode;
}

