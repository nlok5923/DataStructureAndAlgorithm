// Given two linked lists sorted in increasing order. Merge them in such a way that the result list is also sorted (in increasing order).
// Try solving with O(1) auxiliary space (in-place). You just need to return the head of new linked list, don't print the elements.
// Input format :
// Line 1 : Linked list 1 elements of length n (separated by space and terminated by -1)
// Line 2 : Linked list 2 elements of length m (separated by space and terminated by -1)
// Output format :
// Merged list elements (separated by space)
// Constraints :
// 1 <= n, m <= 10^4
// Sample Input :
//  2 5 8 12 -1
//  3 6 9 -1
// Sample Output :
//  2 3 5 6 8 9 12 

ode* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *temp1,*temp2;
    temp1 = head1;
    temp2 = head2;
    int count =0 ;
    Node *finalhead ,*past;
    
    while(temp1!=NULL && temp2!= NULL)
    {
        if(temp1->data > temp2->data)
        {
            count++;
            if(count ==1)
            {
                finalhead = temp2;
                past = temp2;
                temp2= temp2->next;
            }
            else
            {
                past->next = temp2;
                past = temp2;
                temp2 = temp2->next;
            }
        }
        else
        {
            count++;
            if(count ==1)
            {
                finalhead = temp1;
                past = temp1;
                temp1= temp1->next;
            }
            else
            {
                past->next = temp1;
                past = temp1;
                temp1= temp1->next;
            }
        
        } 
    }
    
    if(temp2!=NULL)
    {
        past->next = temp2;
    }
    if(temp1!= NULL)
    {
        past->next = temp1;
    }
   // cout<<finalhead->data<<endl;
    return finalhead;
    
}