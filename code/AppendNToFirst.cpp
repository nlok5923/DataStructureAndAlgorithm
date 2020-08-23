/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
int getLength(Node *temp)
{
    if(temp==NULL)
        return 0;
    return 1+ getLength(temp->next);
}
Node *getHead(Node *temp , int pos)
{
    
    if(pos == 0 || temp==NULL)
        return temp;
    pos--;
    return getHead(temp->next,pos);
}

Node *appendLastNToFirst(Node *head, int n)
{
    int len = getLength(head);
    int lenAc= len-1;
    int index = lenAc-n;
    
    if(index < 0 || index >n)
    {
        return head;
    }
      Node *temp2 = head;
    
    while(temp2->next!=NULL)
        temp2 = temp2->next;
   //tempp2 - 5
   // cout<<temp2->data<<endl;
    Node *temp = getHead(head , index);
    //cout<<temp->data<<endl;/*
    Node *temp1 = temp->next;
    temp->next = NULL;
    temp2->next = head;
    
    return temp1;
      
    //Write your code here
}