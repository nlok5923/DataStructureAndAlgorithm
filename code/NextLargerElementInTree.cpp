Next larger
// Send Feedback
// Given a generic tree and an integer n. Find and return the node with next larger element in the Tree i.e. find a node with value just greater than n.
// Return NULL if no node is present with the value greater than n.
// Input Format :
// Line 1 : Integer n
// Line 2 : Elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output Format :
// Node with value just greater than n.
// Sample Input 1 :
// 18
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 1 :
// 20
// Sample Input 2 :
// 21
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 2:
// 3

TreeNode<int>* putElements(TreeNode<int>* root1 , int n) {
    queue<TreeNode<int>*> q1;
    q1.push(root1);
    vector<TreeNode<int>*> v1;
    vector<int> v2;
    int i=0;
    while(q1.size()!=0)
    {
        TreeNode<int>* temp = q1.front();
        q1.pop();
        v1.push_back(temp);
        v2.push_back(temp->data);
      //  i++;
        for(int i=0;i<temp->children.size();i++)
            q1.push(temp->children[i]);
    }
    int index =0 ;
    int min =0 ;
    int c =0 ;
    for(int j=0;j<v1.size();j++)
    {
        if(c==0)
        {
            if(v2[j]>n)
            {
                min = v2[j]-n;
                index = j;
                c++;
            }
            
        }
        else
        {
            if(v2[j]-n > 0)
            {
            if((v2[j]-n) < min)
            {
                min  = v2[j] - n;
                index = j;
            }
            }
        }
        

    }
    if(index == 0 && c ==0 )
    return NULL;
    else
        return v1[index];
    
}





TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return putElements(root,n);

}

