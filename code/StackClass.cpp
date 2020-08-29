class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    
    public:
    stackUsingArray(int size)
    {
        data = new int[size];
        nextIndex = 0;
        capacity = size;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {/*
        if(nextIndex ==0 )
        {
            return true;
        }
        else
        return FALSE;*/
        return nextIndex==0;
    }
    void push(int element)
    {
       if(nextIndex == capacity)
       {
       cout<<"Stack full"<<endl;
           return;
       }
        data[nextIndex++] = element;
        
    }
    int pop()
    {
        if(isEmpty())
        {
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        return data[nextIndex-1];
    }
};