//learning queues
//an abstract data type : i don't care how the elements are 
//saved i just care about working on them
//will create queue using array  and linked list
//creating queue using array 
//queue using array 
template <typename T>
class queue{
    T *data;
    int nextIndex;
    int frontIndex;
    int size;
    int capacity;
    queue(int s)
    {
        data = new T[s];
        frontIndex = -1;
        nextIndex = 0;
        size = 0;
        capacity = s;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    //insert elements
    void enqueue(T ele)
    {
        if(size == capacity)
        {
            cout<<"Queue full"<<endl;
            return;
        }
        data[nextIndex] = ele;
        nextIndex = (nextIndex+1)%capacity;
        if(frontIndex==-1)
        frontIndex = 0 ;
        size++;
    }
    T front()
    {
        if(!isEmpty())
        {
            return data[frontIndex];
        }
        cout<<"Queue empty "<<endl;
        return 0;
    }
    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty"<endl;
            return 0;
        }
        T ans = data[frontIndex];
        frontIndex = (frontIndex+1)%capacity;
        size--;
        if(size == 0)
        {
            frontIndex = -1;//iske bina bhi chal jayega but thik hai
            nextIndex =0 ;
        }
        return ans;
    }
    
    
    
    
};
