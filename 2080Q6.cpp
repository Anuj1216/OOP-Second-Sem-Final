#include <iostream>
using namespace std;
class Rectangle
{
    protected:
        int l,b;
    public:
        virtual void get_data()
        {
            cout<<"Enter length and breadth: ";
            cin>>l>>b;
        }
        virtual void area()
        {
            int area = l * b;
            cout<<"Area of rectangle = "<<area<<endl;
        }
};
class Square : public Rectangle{
    public:
        void get_data()
        {
            cout<<"Enter the side of square: ";
            cin>>l;
        }
        void area()
        {
            int area = l * l;
            cout<<"Area of rectangle = "<<area<<endl;
        }
};
class Triangle : public Rectangle{
    public:
        virtual void get_data()
        {
            cout<<"Enter length and breadth: ";
            cin>>l>>b;
        }
        virtual void area()
        {
            int area = 0.5 * l * b;
            cout<<"Area of rectangle = "<<area<<endl;
        }
};
main()
{
    Rectangle *r, re;
    Square s;
    Triangle t;
    r = &re;
    r -> get_data();
    r -> area();
    r = &s;
    r->get_data();
    r->area();
    r= &t;
    r->get_data();
    r->area();
    return 0;
}
