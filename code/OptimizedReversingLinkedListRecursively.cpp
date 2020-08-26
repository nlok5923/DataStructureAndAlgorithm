//recursively reversing the linked list in O(n) time

class pair{
    public:
    node *head;
    node *tail;
};
Pair reverse(Node *head)
{
 if(head==NULL || head->next == NULL)
 {
     Pair ans;
     ans.head= ans.tail = head;
     return ans;
 }
 
 Pair smallAns = reverse(head->next);
 smallAns.tail->next =head;
 head->next = NULL;
 Pair ans;
 
 ans.head = smallAns.head;
 ans.tail = head;
 return ans;
}

Node *reverse_better(Node *head)
{
    return reverse(head).head;
}




