#include <iostream>
using namespace std;
class A
{
    public:
        void display_A()
        {
            cout<<"This is class A!";
        }
};
class B : virtual public A
{
    public:
        void display_B()
        {
            cout<<"This is class B!";
        }
};
class C : virtual public A
{
    public:
        void display_C()
        {
            cout<<"This is class C!";
        }
};
class D : public B, public C
{
    public:
        void display_D()
        {
            cout<<"This is class D!";
        }
};
main()
{
    D d;
    d.display_A();
    d.display_B();
    d.display_C();
    d.display_D();
    return 0;
}
