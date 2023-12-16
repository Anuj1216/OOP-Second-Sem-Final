#include <iostream>
using namespace std;
class A
{
    public:
        virtual void display() = 0;
};
class B : public A{
    public:
        void display()
        {
            cout<<"This is class B!";
        }
};
class C : public B{
    public:
        void display()
        {
            cout<<"This is class C!";
        }
};
main()
{
    A *a;
    B b;
    C c;
    a = &b;
    a -> display();
    a = &c;
    a -> display();
    return 0;
}