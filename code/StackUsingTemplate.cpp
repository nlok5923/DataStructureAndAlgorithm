//will make any class generic using template
//stack using template
#include<bits/stdc++.h>
template<typename T>
class stackUsingArray
{
    T *data;
    int nextIndex;
    int capacity;
    
    public:
    
    stackUsingArray()
    {
        data = new T[4];
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
    void push(T element)
    {
       if(nextIndex == capacity)
       {
          T *newData = new T[2*capacity];
          for(int i=0;i<capacity;i++)
          newData[i] = data[i];
          capacity = 2*capacity;
           delete [] data;
           data = newData;
      }
        data[nextIndex++] = element;
        
    }
    T pop()
    {
        if(isEmpty())
        {
        cout<<"Stack is empty"<<endl;
        return 0;//can be used for anydata type
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        return data[nextIndex-1];
    }
};