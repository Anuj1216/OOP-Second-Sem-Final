#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    char name[20];
    int roll, age;
    public:
        void get_data()
        {
            cout<<"Enter the name, roll and age of Student: ";
            cin>>name>>roll>>age;
        }
};
main()
{
    Student s;
    char ch;
    ofstream file("Student.txt");
    while(ch != 'n' && ch != 'N')
    {
        s.get_data();
        file.write((char*)&s, sizeof(s));
        cout<<"Do you want more data? ";
        cin>>ch;
    }
    file.close();
    return 0;
}