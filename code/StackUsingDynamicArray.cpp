//modified it to get a dynamic stack 

class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    
    public:
    
    stackUsingArray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex==0;
    }
    void push(int element)
    {
       if(nextIndex == capacity)
       {
          int *newData = new int[2*capacity];
          for(int i=0;i<capacity;i++)
          newData[i] = data[i];
          capacity = 2*capacity;
           delete [] data;
           data = newData;
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