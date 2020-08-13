//operator overloading
//hamko aisa karwana hai
//f3 = f1+f2;
// f1,f2,f3 are objects



class Fraction{
    private:
    int numerator,denominator;
    
    public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void simplify(){
        int gcd =1;
        int j = min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if(this-<numerator%i==0 &&this->denominator%i==0){
                gcd=i;
            }
            
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
    
    Fraction add(Fraction const &f2){
        int lcm = denominator*f2.denominator;
        int x= lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator+(y*f2.numerator);
        Fraction fNew(num,lcm);
        //numerator = num;
        //denominator = lcm;
        fNew.simplify();
        return fNew; 
    }//operator keyword aur fir kisse overload karwana hai    
    Fraction operator+(Fraction const &f2)const{
        int lcm = denominator*f2.denominator;
        int x= lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator+(y*f2.numerator);
        Fraction fNew(num,lcm);
        //numerator = num;
        //denominator = lcm;
        fNew.simplify();
        return fNew; 
    }
    // now on writing f2 = f1+f3 it will call above finction
    // f1 ka address this mai chala jayega aur f3 ka address pass karna hoga
    Fraction operator*(Fraction const &f2)const{
        int n = numerator*f2.denominator;
        int d = denominator* f2.denominator;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }
    //overloading == operator for boolean functionality
    
    bool operator==(Fraction const &f2)const{
        //ek this wala aur ek argument
        return((numerator ==f2.numerator)&&(denominator == f2.denominator));
    }
    void multiply(Fraction const &f2){
        numerator = numerator*f2.numerator;
        denominator = denominator*f2.denominator;
        simplify();
    }
    
    //overloading pre increment operator
    //only one operator which will pass with this
    void &operator++(){
        numerator = numerator+denominator;
        simplify();
        return *this;
        // return value at the block
        
    }
    // we can't use f3 = ++f1; here;
    
    
}
int main(){
    
    //hame aisa functionality chaihiye ki f3 = f1+f2
    
    
    
}