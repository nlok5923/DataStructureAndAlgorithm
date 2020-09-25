
// Structurally identical
// Send Feedback
// Given two Generic trees, return true if they are structurally identical i.e. they are made of nodes with the same values arranged in the same way.
// Input format :
// Line 1 : Tree 1 elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Line 2 : Tree 2 elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output format :
// true or false
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// 10 3 20 30 40 2 40 50 0 0 0 0
// Sample Output 1 :
// true
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// 10 3 2 30 40 2 40 50 0 0 0 0
// Sample Output 2:
// false

bool putElements(TreeNode<int>* root1 , TreeNode<int>* root2) {
    queue<TreeNode<int>*> q1;
    queue<TreeNode<int>*> q2;
    q1.push(root1);
    q2.push(root2);
    vector<int> v1,v2;
    int i=0;
    while(q1.size()!=0)
    {
        TreeNode<int>* temp = q1.front();
        q1.pop();
        //dummy[i] = temp->data;
        v1.push_back(temp->data);
       // i++; 
        int no = temp->children.size();
        for(int j=0;j<no;j++)
        {
            q1.push(temp->children[j]);
        }
        
    }
    while(q2.size()!=0)
    {
        TreeNode<int>* temp1 = q2.front();
        q2.pop();
       // dummy[i] = temp->data;
        v2.push_back(temp1->data);
        //i++; 
        int no = temp1->children.size();
        for(int j=0;j<no;j++)
        {
            q2.push(temp1->children[j]);
        }
        
    }
    if(v1.size()!=v2.size())
        return false;
    else
    {
        for(int j=0;j<v1.size();j++)
        {
            if(v1[j]!=v2[j])
                return false;
        }
        return true;
    }
    
}


// }
// void printLevelWise(TreeNode<int>* root) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Print output as specified in the question.
//      */
//     queue<TreeNode<int>*> q1;
//     q1.push(root);
//     while(q1.size()!=0)
//     {
//         TreeNode<int> * node   = q1.front();
        
//         int no = node->children.size();
//         cout<<node->data<<":";
//         q1.pop();
//         for(int i=0;i<no;i++)
//         {
//             if(i==no-1)
//                 cout<<node->children[i]->data;
//             else
//                 cout<<node->children[i]->data<<",";
//             q1.push(node->children[i]);
//         }
//         cout<<endl;
//     }
    
// }



bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    
//     if(size1!=size2)
//         return false;
//     int * arr1 = new int[size1];
//     int * arr2 = new int[size2];
    
     return putElements(root1, root2);
    

}
