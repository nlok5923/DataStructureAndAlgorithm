//dynamic array class
//extending size of the array at any time
class DynamicArray{
    int *data;
    int nextIndex;
    int capacity; // total size
    public:
    DynamicArray(){
        data = new int[5];
        nextIndex=0;
        capacity=5;
        
    }
    // deep copy constructor for DynamicArray
    DynamicArray(DynamicArray const &d){
        this->data = new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = nextIndex;
        this->capacity = d.capacity;
        
    }
    void operator=(DynamicArray const &d){
        this->data = new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = nextIndex;
        this->capacity = d.capacity;
        
    }
    void add(int element){
        if(nextIndex==capacity){
            int *newData = new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i] = data[i];
            }
            delete[] data;
            date = newData;
            capacity= 2*capacity;
            
        }else{
            data[nextIndex] = element;
            nextIndex++;
            
        }
       
    }
     int get(int i){
            if(i<nextIndex){
            return data[i];
            }
            else
            return -1;
           
        }
        void add(int i , int element){
            if(i<nextIndex){
                data[i] = element;
            }
            else if(i==nextIndex){
                add(element);
            }
            else
            return;
            
        }
        void print(){
            for(int i=0;i<nextIndex;i++){
                cout<<data[i]<<endl;
            }
        }
}
main(){
    DynamicArray d2(d1); //copy constructor
    // it does shallow copy naya array nahi banaya
    DynamicArray d3;
    d3 = d1;// copy assignment operator
    // it also does shallow copy sab bade wale hai
    // deep copy khud se karwani hogi
    d3 = d1 :// ab hamara wala copy assignment operator use hoga
    
    
}