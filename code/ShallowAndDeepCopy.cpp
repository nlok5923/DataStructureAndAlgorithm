

#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    char *name;
    public:
    Student(int age, char *name)
    {
        this->age = age;
        //shallow copy
        //this->name = name;
        //deep copy/dhang se
        this->name = new char[strlen(name)+1];
        //copy char array
        strcpy(this->name, name);
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};


int main()
{
    char name[] ="abcd";
    //name array name point to address
    Student s1(20,name);
    //add goes with name
    //when we pass array rather than copy element we copy add this is call shallow copy
    s1.display();
    name[3] = 'e';
    //array ek hi hai but sab ek hi array ko point kar rahe hai 
    Student s2(24,name);
    s2.display();
    s1.display();
    
}