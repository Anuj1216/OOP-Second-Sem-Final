#include <iostream>
using namespace std;
class Sample
{
    int a;
    public:
        void get_data()
        {
            cout<<"Enter value: ";
            cin>>a;
        }
        void display()
        {
            cout<<"A = "<<a<<endl;
        }
        Sample operator - ()
        {
            Sample s;
            s.a = -a;
            return s;
        }
};
main()
{
    Sample s1, s2;
    s1.get_data();
    s1.display();
    s2 = -s1;
    s2.display();
}