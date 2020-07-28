

#include<bits/stdc++.h>
using namespace std;
class fraction
{
    private:
    int numerator;
    int denominator;
    public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        //mention of this is not necessary now it's optional
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void simplify()
    {
        int gcd = 1;
        int i=0;
        int j= min(this->numerator,this->denominator);
        
        for(i=1;i<=j;i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0)
            {
                gcd=i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
    void add(fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/(f2.denominator);
        int num = x*numerator+(y*f2.numerator);
        numerator = num;
        denominator = lcm;
        //iska matlab this ke upar simplify call kardo
        simplify();
        
    }
    
};
int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();

    return 0;
}
