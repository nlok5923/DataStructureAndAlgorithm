// Code : Find height
// Send Feedback
// Given a generic tree, find and return the height of given tree.
// Input format :
// Elements in level order form separated by space (as per done in class). Order is - 
// Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
// Output Format :
// Height
// Sample Input :
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output :
// 3



#include<bits/stdc++.h>
using namespace std;

// Following is the given Tree node structure.
/**************
 template <typename T>
 class TreeNode {
    public:
        T data;
        vector<TreeNode<T>*> children;
 
        TreeNode(T data) {
            this->data = data;
        }
 
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
 };
***************/

int height(TreeNode<int>* root) 
{
    
    
    //int heigh = 1 ;
    //int heigh =0;
    int max = 0 ;
        int i=0;
    for( i=0; i< root->children.size(); i++)
    {
        if(i==0)
        max = height(root->children[i]);
        else
        {
            int temp = height(root->children[i]);
            if(temp>max)
                max = temp;
        }
        
    }
    max = max+1;
    
    return max;
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

}

