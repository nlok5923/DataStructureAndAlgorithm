/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
class polynomial{
    int* degCoeff;
    int capacity;
    public:
    
    polynomial()
    {
        degCoeff = new int[5];
        capacity = 5;
        int i=0;
        for(i=0;i<5;i++)
        degCoeff[i] = 0;
    } 
    polynomial(int length)
    {
        degCoeff = new int[length];
        capacity =length;
        int i=0;
        for(i=0;i<length;i++)
        degCoeff[i] =0;
    }
  //  p1 originala and p2 copy karna hai this p2 ka hai 
    polynomial( polynomial const &p1)
    {
         int i=0;
         this->degCoeff = new int[p1.capacity];
         for(i=0;i<p1.capacity;i++)
         {
             degCoeff[i] = p1.degCoeff[i];
         }
         this->capacity = p1.capacity;
        
    }
   
    //print
    void display()
    {
        int i=0;
        for(i=0;i<capacity;i++)
        {
            if(i!=0)
            {
                //cout<<degCoeff[i]<<"x"<<i;
                if(degCoeff[i]>0)
                cout<<"+"<<degCoeff[i]<<"x";
                else
                 cout<<"-"<<degCoeff[i]<<"x";
            }
            
        }
        cout<<endl;
    }
    //overloading three operator +,,-,*
    //+ will all two polynomial;
    //add p1 and p2 and saove in p3
    //p1 = p2+p3 p2 ke liye call hua and p3 send kiya
    polynomial operator+(polynomial const &p3)
    {
        int i=0,j=0,temp=0;
        //int *newArray;
        polynomial temp(this->capacity);
        if(this->capacity > p3.capacity)
        {
            //temp.newArray = new int[this->capacity];
            for(i=0;i<p3.capacity;i++)
            {
                temp.degCoeff[i] = this->degCoeff[i] + p3.degCoeff[i];
            }
            for(j=p3.capacity;j<this->capacity;j++)
            temp.degCoeff[j] = this->degCoeff[i];
            
        }
        else
        {
           
            for(i=0;i<this->capacity;i++)
           temp.degCoeff[i]= this->degCoeff[i]+p3.degCoeff[i];
            for(j=this->capacity;j<p3.capacity;j++)
            temp.degCoeff[i] = p3.degCoeff[i];
        }
        
        return temp;
        
        
    }
    polynomial operator-(polynomial const &p3)
    {
        int i=0,j=0,temp=0;
      //  int *newArray;
      polynomial temp(this->capacity);
        if(this->capacity > p3.capacity)
        {
            //newArray = new int[this->capacity];
            for(i=0;i<p3.capacity;i++)
            {
                temp.degCoeff[i] = this->degCoeff[i] - p3.degCoeff[i];
            }
            for(j=p3.capacity;j<this->capacity;j++)
            temp.degCoeff[j] = this->degCoeff[i];
            
        }
        else
        {
            //newArray = new int[p3.capacity];
            for(i=0;i<this->capacity;i++)
        temp.degCoeff[i]= this->degCoeff[i] - p3.degCoeff[i];
            for(j=this->capacity;j<p3.capacity;j++)
        temp.degCoeff[j] = p3.degCoeff[i];
        }
        
        return newArray;
        
    }
    
    polynomial operator*(polynomial const &p3)
    {
        //p2 this wala
        //p3 explicit wala
        int i=0,j=0;
        //int **newArray = new int[this.capacity];
        
        polynomial p1[this->capacity](this->capacity +p3.capacity);
        
        while(i!=this->capacity)
        {
            if(i==0)
            {
            for(j=0;j<p3.capacity;j++)
            p1.degCoeff[j]  = this->degCoeff[i]*p3.degCoeff[j];
            }
            else
            {
                for(j=0;j<p3.capacity;j++)
                {
                   p1.degCoeff[j] = p3.degCoeff[j];
                }
                for(j=0;j<p3.capacity;j++)
                {
                    p1.degCoeff[j] = this->degCoeff[i]*newArray[j];
                }
                
            }
            
            i++;
        }
        
        polynomial p4;
        for(i=0;i<this->capacity;i++)
        {
            p4 = p4 + p1[i];
        
        }
        return p4;
    }
    
    
};

