
//level wise print in BST
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

void printLevelWise(BinaryTreeNode<int> *root) {
    
    queue<BinaryTreeNode<int>*> q1;
    q1.push(root);
    while(q1.size()!=0)
    {
        BinaryTreeNode<int> * temp= q1.front();
        cout<<temp->data<<":";
        q1.pop();
        if(temp->left != NULL)
        {
            cout<<"L:"<<temp->left->data<<",";
            q1.push(temp->left);
        }
        else
        {
            cout<<"L:"<<temp->left->data<<",";
        }
        if(temp->right != NULL)
        {
            cout<<"R:"<<temp->right->data;
            q1.push(temp->right);
        }
        else
        {
            cout<<"R:"<<temp->right->data;
        }
        cout<<endl;
    }

}
