// without making class reducing complexity of reversing
// linked list recursively
// to O(n)

node *reverse(node *head)
{
    if(head==NULL || head->next == NULL)
    return head;
    node *smallAns = reverse(head->next);
    node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallAns;
}