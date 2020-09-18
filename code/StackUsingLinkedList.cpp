//stack using linked list
template<typename T>
class node{
    public:
    T data;
    node<T> *next;
    node(T data) //no need towrite node<T> with contructor name 
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>//ye line har class ke liye alag alaga mention karnni hogi
class stack{
    node<T> *head;
    int size;//no of elements inside stack
    public:
    stack()
    {
        head = NULL;
        size  = 0 ;
    }
    int getSize(){
        return size;
    }
    bool isEmpty()
    {
        if(size == 0 || head == NULL)
        {
            return true;
        }
        return false;
    }
    void push(T ele)
    {
        node<T> * temp;
        temp->data = ele;
        temp->next = NULL;
        if(head == NULL)
        {
        head = temp;
        size++;
        }
        else
        {
            temp->next = head;
            head = temp;
            size++;
        }
        
    }
    T pop()
    {
        if(!isEmpty())
        {
        T ans = head->data;
        size--;
        head = head->next;
        return ans;
        }
        else
        {
            cout<<"Empty stack"<<endl;
        }
    }
    T top(){
        if(!isEmpty())
        return head->data;
    };
    
    
    
}
