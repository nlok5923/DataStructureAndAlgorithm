//implementing BST class with three basic function search insert and delete

class BST {
    BinaryTreeNode<int> *  root ;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    void deleteData(int data){
        
    }
    void insert(int data){
        
    }
    private:
    bool hasData(int data, BinaryTreeNode<int>* root){
        if(root==NULL)
        return false;
        
        if(root->data == data){
            return true;
        }
        else if(data < root->data){
            return hasData(data,root->left);
        }
        else
        {
            return hasData(data,root->right);
        }
    }
    public:
    bool hasData(int data) {
        return hasData(data, root);
    }
}