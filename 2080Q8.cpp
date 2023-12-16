#include <iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"Constructor of Class A!"<<endl;
        }
        ~A()
        {
            cout<<"Destructor of Class A!"<<endl;
        }
};
class B : public A
{
    public:
        B()
        {
            cout<<"Constructor of Class B!"<<endl;
        }
        ~B()
        {
            cout<<"Destructor of Class B!"<<endl;
        }
};
class C : public B
{
    public:
        C()
        {
            cout<<"Constructor of Class C!"<<endl;
        }
        ~C()
        {
            cout<<"Destructor of Class C!"<<endl;
        }
};
main()
{
    C c;
    return 0;
}