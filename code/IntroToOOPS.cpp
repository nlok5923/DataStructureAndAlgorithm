
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int rollNumber;
    
    private:
    int age;
    
    public:
    void display()
    {
        cout<<age<<" "<<rollNumber<<endl;
        //we can access age as we are using it in the class itself
        
    }
    /* to access the private content of the class we can create a function within the class which will return me 
    the priivate content
    */
    int getAge
    {
        return age;
        
    }
    // we can also set private aga variable by using the function inside the class
    void setAge(int age)
    {
        age = age;
    }
};



int main()
{
    // creating objects statically:
    Student s1,s2,s3;
    s1.rollNumber=23;
    s1.age=24;/*
    this will give us error
    cout<<s1.age<<endl;*/
    //we will use function as:
    
    cout<<s1.getAge()<<endl;
    
    //creating objects dynamically
    Student *s4 = new Student;
    
    (*s4).rollNumber=24;
    s4->rollNumber = 24;
    /*
    (*s4).rollNumber == s4->rollNumber
    */
    //accessing the display function
    //calling function for s1
    
    s1.display();
    //for s4 we will do
    
    (*s4).display();
    s4->display();
    //setting private property
    s1.setAge(20);
    //again for dynamically allocated variable
    d4->setAge(40);
    
    
    
    
    
}