#include <iostream>
using namespace std;
class Student
{
    int grade, roll, age;
    public:
        Student(int roll, int age, int grade = 7)
        {
            this -> roll = roll;
            this -> age = age;
            this -> grade = grade;
        }
        void display()
        {
            cout<<"Roll = "<<roll<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Grade = "<<grade<<endl;
        }
        ~Student()
        {
            cout<<"Destructor Executed!"<<endl;
        }
};
main()
{
    Student s1(1, 20, 10), s2(2, 19);
    s1.display();
    s2.display();
    return 0;
}