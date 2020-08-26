//revresing linked list recursively 
//base case 
//recursive call
//small calculation 
//lenght 1 or 0 will return 

node *reverse_linked_list_rec(node *head)
{
    if(head==NULL ||head->next == NULL)
    return head;
    node *smallAns = reverse_linked_list_rec(head->next);
    node *temp = smallAns;
    while(temp->next!=NULL)
    temp = temp->next;
    temp->next = head;
    head->next = NULL;
    return smallAns;
}