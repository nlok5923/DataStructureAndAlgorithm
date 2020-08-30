//making class usin generic using template
//making stack using template
template<typename T>

class stackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    public:
    stackUsingArray()
    {
        data = new T[4];
        nextIndex =0;
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
    void push(T element){
        if(nextIndex == capacity){
            T *newData = new T[2*capacity];;
            for(int i=0;i<capacity;i++)
            newData[i] = data[i]'
            capacity = 2*capacity;
            delete [] data;
           data = newData;
        }
    }
    T pop()
    {
        if(isEmpty())
        {
            cout<<"stack is isEmpty"<<endl;
            return 0;
        }
        nextIndex --;
        return data[nextIndex];
        
    }
    T top()
    {
        if(isEmpty())
        {
            cout<<"stack is khali"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
}