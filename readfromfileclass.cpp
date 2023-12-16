#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    char name[20];
    int roll, age;
    public:
        void display_data()
        {
            cout<<"Name = "<<name<<endl;
            cout<<"Roll no. = "<<roll<<endl;
            cout<<"Age = "<<age<<endl;
        }
        void enquiry();
};
void Student::enquiry()
{
    Student s;
    ifstream file("Student.txt", ios::binary);
    while(file.read((char *)&s, sizeof(s)))
    {
        if(s.age>15)
        {
           s.display_data();
        }
    }
    file.close();
}
main()
{
    Student s;
    s.enquiry();
    return 0;
}
// #include <iostream>
// #include <fstream>
// using namespace std;

// class Student
// {
//     char name[20];
//     int roll, age;

// public:
//     void display_data()
//     {
//         cout << "Name = " << name << endl;
//         cout << "Roll no. = " << roll << endl;
//         cout << "Age = " << age << endl;
//     }
// };

// int main()
// {
//     Student s;
//     ifstream file("Student.txt", ios::binary); // Open file in binary mode

//     if (!file.is_open()) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     while (file.read((char *)&s, sizeof(s))) {
//         s.display_data();
//     }

//     file.close();
//     return 0;
// }
