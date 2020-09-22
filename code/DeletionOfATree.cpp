//another way to delete tree
//root par call karne ke baad pura tree delete ho jaye
//forming destructor
//deleting tree using destructor
~TreeNode(){
    //jis node par call hua uske childre
    for(int i=0;i<children.size();i++)
    {
        delete children[i];
        
    }
}
//deleting a tree maually
//as we had dynamically formed a tree
void deleteTree(TreeNode<int>* root){
    for(int i=0;i<root->children.size();i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
    //we are deleting in the same way as we do post order traversal 
    
}
////////////////////////////////////////////////


