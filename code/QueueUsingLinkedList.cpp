//Queue using linked list 
//we need to have head and size of linked list 
//head intitialize to null and size = 0 
//Queue using linked list
class Queue{
    node<T> *head;
    node<T> *tail;
    int size;
    Queue()
    {
        head = NULL;
        size =0 ;
        tail = NULL;
    }
    void Enqueue(T ele)
    {
        Node<T> * temp  = new Node(ele);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            size++;
        }
        else
        {
            size++;
            tail->next = temp;
            tail = temp;
        }
    }
    int getSize()
    {
        return size;
    }
    T front()
    {
        return head->data;
    }
    void Dequeue()
    {
        int ans = head->data;
        head = head->next;
        size--;
        return ans;
    }
    bool isEmpty()
    {
        return size==0;
    }
    
    
    
}