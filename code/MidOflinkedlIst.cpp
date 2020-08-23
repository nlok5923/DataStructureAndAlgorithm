//need to find the mid element of linked list 

// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* midpoint_linkedlist(node *head)
{
    // Write your code here
    if(head == NULL  || head->next ==NULL)
        return head;
    node *slow, *fast;
    slow = head;
    fast  = slow;
    
    while(fast!=NULL && fast->next != NULL)
    {
        fast = fast->next;
        
        if(fast->next !=NULL)
        {
            fast = fast->next;
            slow  = slow->next;
            
        }
        
    }
    return slow;

    
}

