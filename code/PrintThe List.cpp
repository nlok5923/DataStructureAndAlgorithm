//print the linked list
#include<bits/stdc++.h>
using namespace std;
void print(Node *head)
{
    Node *temp;
     temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        // head pointer hai isliye arrow lagaya
        temp = temp->next;
    }
    
}
class Node{
    public :
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        
    }
};
int main()
{
    //statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    /*
    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    //dynamically
    Node *n3 = new Node(10);
    Node *n4 = new Node(20);
    Node *head;
    //pointer ke member function ko access karne ke liye use arrow->
    n3->next = n4;
    n4->next = NULL;
    head = n3;
    //link list with 5 nodes
    */
    
    
    
    
    
    
}