Implement a polynomial class, with following properties and functions.
Properties :
1. An integer (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
2. An integer holding total size of array A.
Functions :
1. Default constructor
2. Copy constructor
3. setCoefficient -
This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value
4. Overload "+" operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial which has result.
5. Overload "-" operator (P3 = p1 - p2) :
Subtracts two polynomials and returns a new polynomial which has result
6. Overload * operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has result
7. Overload "=" operator (Copy assignment operator) -
Assigns all values of one polynomial to other.
8. print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
Print pattern for a single term : <coefficient>"x"<degree>
And multiple terms should be printed separated by space. And after printing one polynomial, print new line. For more clarity, refer sample test cases
Input Format :
Line 1 : N, total number of terms in polynomial P1
Line 2 : N integers representing degree of P1 (separated by space)
Line 3 : N integers representing coefficients of P1 (separated by space)
Line 4 : M, total number of terms in polynomial P2
Line 5 : M integers representing degree of P2 (separated by space)
Line 6 : M integers representing coefficients of P2 (separated by space)
Line 7 : Integer C, choice representing the function to be called (See main for more details)
Sample Input 1 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1
Sample Output 1 :
4x0 3x1 -3x2 3x3 -4x5
Sample Input 2 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
2
Sample Output 2 :
-4x0 -1x1 3x2 1x3 -4x5
Sample Input 3 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
3
Sample Output 3 :
4x1 2x2 5x3 5x4 -22x5 -6x6 12x7 -4x8
    
/************************************************************************/
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


