
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 


class ComplexNumbers {
    private:
    int real;
    int imaginary;
    
    public:
    ComplexNumbers(int real,int imaginary)
    {
        this->real = real;
        this->imaginary=imaginary;
        
    }
    void print()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }
    void plus(ComplexNumbers const &c2)
    {
        this->real = this->real+c2.real;
        this->imaginary = this->imaginary +c2.imaginary;
    }
    void multiply(ComplexNumbers const &c2)
    {
        int a = real;
        int b = imaginary;
        int a1 = c2.real;
        int b1 = c2.imaginary;
        real = real*c2.real;
        int y = real*c2.imaginary;
        int x= imaginary * c2.imaginary;
        x = -1*x;
        real = real + x;
        imaginary = a1*b + b1*a;
        
    }
    // Complete this class
};    