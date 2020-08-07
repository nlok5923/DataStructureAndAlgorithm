#include<bits/stdc++.h>
using namespace std;

/*not allowed
int const b;
//error on first line
b = a;

int i=5;
int &j=i;
i and j are aliases
error
int &j;
j=i;*/
class Student{
    public:
    int age;
    // we must has to initialize it else we will get error
    const int rollNumber;
    int &x;//age ka refernce variable
    //ek baar value dene ke baad change nahi hoga
    //intilization list                    this(argument)
    Student(int r,int age) : rollNumber(r),age(age),x(this->age{
        //rollNumber = r;
        // it means const int rollNumber = r;
        //now it will allocate r to roll number
    }
    //for this we will use intilization list
};


int main()
{
    Student s1;//initializes with garbage
    s1.age = 20;
    //error we have a const rollNumber
    s1.rollNumber = 101;
    
}