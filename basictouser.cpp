#include <iostream>
using namespace std;
class Kilogram
{
    int kg, g;
    public:
        Kilogram(int kg1, int g1)
        {
            kg = kg1;
            g = g1;
        }
        void display()
        {
            cout<<kg<<" KG "<<g<<" G "<<endl;
        }
        Kilogram(int a)
        {
            kg = a / 1000;
            g = a % 1000;
        }
};
main()
{
    int a = 1500;
    Kilogram kg = a;
    kg.display();
    return 0;
}