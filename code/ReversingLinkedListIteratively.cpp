//iteratively reversing the linked list 

node *rev_linked_itr(node *head)
{
    node *curr,*next,*prev;
    curr = next = head;
    prev = NULL;
    
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head; 
    
}