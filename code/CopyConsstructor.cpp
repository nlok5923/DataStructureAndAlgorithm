
#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;

    public:
        char *name;
        // inbuilt constructor do shallow copy
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
    //copy constructor for deep copy
    //when using copy constructor inbult copy constructor destroyed
    Student(Student const &s)
    //student s create a new object so we will use pass by reference
    { this->age = s.age;
        //shallow copy
       
        this->name =s.name;
        //deep copy
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
        //Student s3 = s1;//copy constructor call hua
        
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
    // copy constructor ne address bhej diya
    Student s2(s1);
    s2.name[0] ='x'; 
    s1.display();
    s2.display();
    /*
    name[3] = 'e';
    //array ek hi hai but sab ek hi array ko point kar rahe hai 
    Student s2(24,name);
    s2.display();
    s1.display();*/
    
}