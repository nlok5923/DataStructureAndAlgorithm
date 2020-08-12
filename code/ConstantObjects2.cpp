#include<bits/stdc++.h>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const //marked it as const
    {
        return numerator;
    }
    int getDenominator()const {
        return denominator;
    }
    void setNumerator(int n){
        numerator = n;
    }
    void setDenominator(int n)const{//mark karne par compiler function to call karna dega fir jab use pata chalega constant nahi kiya to vo error dega
    
        denominator = d;
    }
    void print()const{
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
}

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    // we can't do any changes in the object which we define as constant
    
    //int const a= bcosnt intvariable
    Fraction const f3;//constant object
    // we cant call any function witht the constant object which will gonna chaneh it'sprop
    /// we can't use set function with f3
    cout<<f3.getDenominator()<<" "<<f3.getNumerator()<<endl;
    // we can't use any property with constant object bauce compiler darta hai agar andar jakr kuch aur kardiya getDenominator
    //with constant object we can onyl call constant function
    //constant dunction; this are those which do not change any prop of current object
    
}