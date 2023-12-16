#include <iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"Constructor of Class A!";
        }
        virtual ~A()
        {
            cout<<"Destructor pf class A!";
        }
};
class B : public A
{
    public:
        B()
        {
            cout<<"Constructor of Class B!";
        }
        ~B()
        {
            cout<<"Destructor of class B!";
        }
};
main()
{
    A *a = new B;
    delete a;
}