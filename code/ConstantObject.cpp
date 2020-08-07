
#include<bits/stdc++.h>
using namespace std;

class fraction{
    private:
    int numerator;
    int denominator;
    
    public:
    fraction(){
        
    }
    fraction(int numerator,int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const {
        return numerator;
    }
    // to make it access constant object 
    int getDenominator() const {
        return denominator;
    }
    void setNumerator(int n)
    {//agar is function ko const mark karoge to call hone dega but value change karne se rokega
    //kaun compiler bhai 
        numerator = n;
    }
    void setDenominator(int d){
        denominator = d;
    }
    void print() const {
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    
};

int main()
{
    //creating constant objects
    //const fraction f3 ===fraction const f3
    //no change in any prop of f3 after making it constant
    fraction const f3;
    // we can only call constant function with constant objects 
    //constant function : which do not chnage nay prop of current oobject
    cout<<f3.getDenominator()<<" /"<<f3.getNumerator()<<endl;
     
     
     
     
}