// Contains x
// Send Feedback
// Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
// Input format :
// Line 1 : Integer x
// Line 2 : Elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output format :
// true or false
// Sample Input 1 :
// 40
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 1 :
// true
// Sample Input 2 :
// 4
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 2:
// false

bool containsX(TreeNode<int>* root, int x) {
    
    bool ok;
    if(ok==true)
    {
        return true;
    }
    else
    {
    if(root->data ==x )
        ok = true;
    else
        ok - false;
    }
    
    for(int i=0;i<root->children.size();i++)
    {
         ok = containsX(root->children[i], x);
    }
    return ok;
   
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

}

