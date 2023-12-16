#include <iostream>
using namespace std;
class Staff
{
    int code;
    char name[20];
    public:
        void get_data()
        {
            cout<<"Enter the Code and Name of Staff: ";
            cin>>code>>name;
        }
        void display_data()
        {
            cout<<"Code = "<<code<<endl;
            cout<<"Name = "<<name<<endl;
        }
};
class Teacher : public Staff
{
    char sub[20];
    int salary;
    public: 
        void get_data()
        {
            cout<<"Enter the Subject and Salary of Teacher: ";
            cin>>sub>>salary;
        }
        void display_data()
        {
            cout<<"Subject = "<<sub<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
};
class Typist : public Staff
{
    int speed;
    public:
        void get_data()
        {
            cout<<"Enter the speed: ";
            cin>>speed;
        }
        void display_data()
        {
            cout<<"Speed = "<<speed<<endl;
        }
};
main()
{
    Teacher th;
    Typist t;
    th.Staff::get_data();
    th.get_data();
    t.get_data();
    cout<<"Staff Information: "<<endl;
    th.Staff::display_data();
    cout<<"Teacher Information: "<<endl;
    th.display_data();
    cout<<"Typist Information: "<<endl;
    t.display_data();
    return 0;
}