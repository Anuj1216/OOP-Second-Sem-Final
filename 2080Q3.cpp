#include <iostream>
#include <string.h>
using namespace std;
class Car
{
    int model, myear;
    char name[20];
    public: 
        Car()
        {
            model = 123;
            myear = 2022;
            strcpy(name, "Renault");
        }
        Car(int model, int myear, char a[20])
        {
            this->model = model;
            this->myear = myear;
            strcpy(name, a);
        }
        Car(Car &c)
        {
            model = c.model;
            myear = c.myear;
            strcpy(name, c.name);
        }
        void display()
        {
            cout<<"Model = "<<model<<endl;
            cout<<"Manufactured Year = "<<myear<<endl;
            cout<<"Car Name = "<<name<<endl;
        }
};
main()
{
    Car c1, c2(124, 2022, "BMW");
    cout<<"Default Constructor: "<<endl;
    c1.display();
    cout<<"Constructor with parameters: "<<endl;
    c2.display();
    cout<<"Copy Constructor: "<<endl;
    Car c3(c2);
    c3.display();
    return 0;
}