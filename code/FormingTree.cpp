//Trees implementation
#include<vector>
using namespace std;
template <typename T>
class TreeNode{
    public :
    T data;
    vector<TreeNode<T>*> children ;// ==  vector<TreeNode*> children ;
    //parent ka T type hai to children ka bhi T type ka hi hoga
    TrreNode(T data)
    {
        this->data = data;
    }
}
int main()
{
    //we are forming    1
    //  a tree         / \ 
    //                2  3
    TrreNode<int> * root  = new TrreNode<int>(1);
    TrreNode<int> * node1 = new TrreNode<int>(2);
    TrreNode <int>* node2 = new TrreNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    
}