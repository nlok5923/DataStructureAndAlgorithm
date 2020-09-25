// Following is the given Tree node structure
// Second Largest Element In Tree
// Send Feedback
// Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.
// Input format :
// Line 1 : Elements in level order form separated by space (as per done in class). Order is -
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output Format :
// Second Largest node data
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 1 :
// 40
TreeNode<int>* putElements(TreeNode<int>* root1) {
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
    int index =0,index1 =0  ;
    int min =0 ;
    int c =0 ;
    int max =0 ;
    for(int k=0;k<v2.size();k++)
    {
        if(k==0)
        {
            max = v2[0];
            index1  =0 ;
        }
        else
        {
            if(v2[k]>max){
                max = v2[k];
                index1 = k;
                }
        }
    }
    //cout<<max<<endl;
    int n = max;
    for(int j=0;j<v1.size();j++)
    {
        if(j!=index1)
        {
        if(c==0)
        {
            if(v2[j]<n)
            {
                min = n - v2[j];
                index = j;
                c++;
            }
            
        }
        else
        {
            
            if((n-v2[j]) < min)
            {
                min  = n - v2[j];
                index = j;
            }
            
        }}
        

    }
    if(index == 0 && c ==0 )
    return NULL;
    else
        return v1[index];
    
}





TreeNode <int>* secondLargest(TreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return putElements(root);

}

