//operator overloading 3
// overloading post increment operator
//no need to pass arguments
//post increment use then increment
//for pre increment operator
Fraction& operator++(){
    numerator =  numerator + denominator;
    simplify();
    return *this;
    
}
//for post increment
Fraction operator++(int){
    Fraction fnew(numerator,denominator);
    this->numerator = numerator + this->denominator;
    simplfy();
    fnew.simplfy();
    return fnew;
}
//(i++)++ // error nesting donot allowed here
//overloading += operator
//(i+=j)+=j // this nesting is allowed

Fraction& operator+=(Fraction const &f2){
    int lcm = denominator*f2.denominator;
    int x = lcm/denominator;
    int y= lcm/f2.denominator;
    int num = x*numerator+(y*f2.numerator);
//    Fraction fnew(num,lcm);
    numerator = num;
    denominator = lcm;
    simplfy();
    return *this;
    
    
}






