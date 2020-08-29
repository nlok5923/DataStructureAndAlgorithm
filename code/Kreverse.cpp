// kReverse
// Send Feedback
// Implement kReverse( int k ) in a linked list i.e. you need to reverse first K elements then reverse next k elements and join the linked list and so on.
// Indexing starts from 0. If less than k elements left in the last, you need to reverse them as well. If k is greater than length of LL, reverse the complete LL.
// You don't need to print the elements, just return the head of updated LL.
// Input format :

// Line 1 : Linked list elements (separated by space and terminated by -1)

// Line 2 : k

// Sample Input 1 :
// 1 2 3 4 5 6 7 8 9 10 -1
// 4
// Sample Output 1 :
// 4 3 2 1 8 7 6 5 10 9
// Sample Input 2 :
// 1 2 3 4 5 -1
// 2
// Sample Output 2 :
// 2 1 4 3 5 
// Sample Input 3 :
// 1 2 3 4 5 6 7 -1
// 3
// Sample Output 3 :
// 3 2 1 6 5 4 7



void reverse(node *head , int n)
{
    int arr[n];
    int i=0;
    node *temp = head;
    for(i=0;i<n;i++)
    {
        arr[i] = head->data;
        head = head->next;
    }
  //  cout<<n<<endl;
   // for(i=0;i<n;i++)
        //cout<<arr[i]<<endl;
    for(i=n-1;i>=0;i--)
    {
        temp->data = arr[i];
        temp = temp->next;
    }
    
}
int getLength(node *head)
{
   if(head==NULL)
       return 0;
    return getLength(head->next)+1;
}

  node *kReverse(node *head, int n)
  {
      int length= getLength(head);
      int left = 0 ;
      int i =0;
      int j=0;
      node* temp = head;
      while(1)
      {
           i = i+n;
          /*for(j=0;j<n;j++)
              temp = temp->next;*/
          if(i>length)
          { 
              
              
              int t = i-n;
              int len = length -t;
              if(len ==0)
                 break;
              reverse(temp,len);
              break;
          }
          reverse(temp ,n);
          
           for(j=0;j<n;j++)
              temp = temp->next;
         // temp = temp->next;
      }
      return head;
     
      
  }







