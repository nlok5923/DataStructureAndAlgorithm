
#include<bits/stdc++.h>
using namespace std;
class Polynomial{
    public:
    int* degCoeff;
    int capacity;
  
    public:
    
    Polynomial()
    {
        degCoeff = new int[100];
        capacity = 100;
        int i=0;
        for(i=0;i<100;i++)
        degCoeff[i] = 0;
       
    } 
    Polynomial(int length)
    {
        degCoeff = new int[length];
        capacity =length;
        int i=0;
        for(i=0;i<length;i++)
        degCoeff[i] = 0;
    
    }
    Polynomial( Polynomial const &p1)
    {
         int i=0;
         this->degCoeff = new int[p1.capacity];
         for(i=0;i<p1.capacity;i++)
         {
             degCoeff[i] = p1.degCoeff[i];
         }
         this->capacity = p1.capacity;
        
    }
    void print()
    {
        int i=0;
        int j=0;
        int t=0;
        for(j=capacity-1;j>=0;j--)
        {
            if(degCoeff[j]!=0)
            {
                t = j+1;
            break;
            }
            
        }
        for(i=0;i<t;i++)
        {
                if(degCoeff[i]!=0)
                cout<<degCoeff[i]<<"x"<<i<<" ";
            
            
        }
        cout<<endl;
    }
  
    void operator=(Polynomial const &d){

        this->degCoeff = new int[d.capacity];
        for(int i=0;i<d.capacity;i++){
            this->degCoeff[i] = d.degCoeff[i];
        }
        this->capacity = d.capacity;
        
        
    }
    Polynomial operator+(Polynomial p3)
    {
        int i=0,j=0;
       
            
        if(this->capacity > p3.capacity)
        {
            Polynomial temp(this->capacity);
            
            for(i=0;i<p3.capacity;i++)
            {
                temp.degCoeff[i] = this->degCoeff[i] + p3.degCoeff[i];
            }
            for(j=p3.capacity;j<this->capacity;j++)
            temp.degCoeff[j] = this->degCoeff[i];
            return temp;
            
        }
        else
        {
            Polynomial temp(p3.capacity);
            for(i=0;i<this->capacity;i++)
           temp.degCoeff[i]= this->degCoeff[i]+p3.degCoeff[i];
            for(j=this->capacity;j<p3.capacity;j++)
            temp.degCoeff[i] = p3.degCoeff[i];
           
             return temp;
        }
        
       
        
        
    }
    Polynomial operator-(Polynomial const &p3)
    {
        int i=0,j=0,temp=0;  
        if(this->capacity > p3.capacity)
        {
            //newArray = new int[this->capacity];
               Polynomial temp(this->capacity);
            for(i=0;i<p3.capacity;i++)
            {
                temp.degCoeff[i] = this->degCoeff[i] - p3.degCoeff[i];
            }
            for(j=p3.capacity;j<this->capacity;j++)
            temp.degCoeff[j] = this->degCoeff[i];
             return temp;
            
        }
        else
        {
             Polynomial temp(p3.capacity);
            //newArray = new int[p3.capacity];
            for(i=0;i<this->capacity;i++)
           temp.degCoeff[i]= this->degCoeff[i] - p3.degCoeff[i];
            for(j=this->capacity;j<p3.capacity;j++)
            temp.degCoeff[j] = p3.degCoeff[i];
             return temp;
        }
        
       
        
    }
    
    Polynomial operator*(Polynomial const &p3)
    {
        //p2 this wala
        //p3 explicit wala
        int i=0,j=0;
        //int **newArray = new int[this.capacity];
        
        //Polynomial p1[this->capacity](this->capacity + p3.capacity);
        Polynomial p1(this->capacity+ p3.capacity);
        Polynomial empty(this->capacity + p3.capacity);


        while(i!=this->capacity)
        {
            Polynomial p2(this->capacity+p3.capacity);
            if(i==0)
            {
            for(j=0;j<p3.capacity;j++)
            p2.degCoeff[j]  = this->degCoeff[i]*p3.degCoeff[j];
            }
            else
            {
                for(j=0;j<p3.capacity;j++)
                {
                   p2.degCoeff[j+i] = p3.degCoeff[j];
                }
                for(j=0;j<p3.capacity+i;j++)
                {
                    p2.degCoeff[j] = this->degCoeff[i]*p2.degCoeff[j];
                }
                
            }
            p1 = p1 +p2;
            p2 = empty;
            i++;
        }
        
        
        return p1;
    }
    
    void setCoefficient(int indexDegree , int coefficient)
    {
        if(indexDegree >= capacity)
        {
            
            int *temp;
            temp = new int[indexDegree+1];
            int i=0;
            for(i=0;i<capacity;i++)
                temp[i] = degCoeff[i];
            int j=0;
            for(j=i;j<indexDegree+1;j++)
                temp[j] = 0;
            degCoeff = temp;
            degCoeff[indexDegree] = coefficient;
        }
        else
        {
           
            degCoeff[indexDegree] = coefficient;
        }
        
        
        
    }
    void arrayele()
    {
        int i=0;
       
        for(i=0;i<capacity;i++)
        cout<<degCoeff[i]<<" ";
        cout<<endl;
    }
    
    
};


