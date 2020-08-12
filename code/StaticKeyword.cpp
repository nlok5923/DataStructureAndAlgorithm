class Student{
    public:
    int rollNumber;
    int age;
    static int totalStudents;//its property should be same for all objects
    //ye property puri class ki hai
    //vo property static hoti hai
    //belongs to a class
    //ab iski copy nahi banegi
    //object mai static property ki copy nahi banti
    //to access static property
    //cout<<Student::totalStudents;
    //          scope resolution
    //intialise it class ke bahar
    // to increase value as the students form
    //:: -> scope resolution
    //static function can only access static property
    //static function do not has this
    
    Student(){
        totalStudents = totalStudents+1;
        
    }
    
    // we can also make function static
    //static means property depends on class not on object
    int getRollnumber(){
        return rollNumber;
    }
    static int getTotalStudent(){
        //ye function static property ko use kar raha hai
        // now it belong to a classs
        //access it as cout<<Student::getTotalStudent;
        return totalStudents;
    }
    
    
    
};
int Student::totalStudents =0;//initialise static data members
    
int main()
{
    Student s1;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;
    
    cout<<Student::totalStudents<<endl;
    cout<<s1.totalStudents<<endl;//still no error at this
    s1.totalStudents=20;
    Student s2;
    cout<<Student::totalStudents<<endl;
    Student s3,s4,s5;
    cout<<Student::totalStudents<<endl;
    
}
