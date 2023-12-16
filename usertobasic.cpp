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
        operator int()
        {
            int total_g;
            total_g = kg*1000 + g;
            return total_g;
        }
};
main()
{
    Kilogram kg(1,500);
    int x = (int)kg;
    cout<<"Total = "<<x<<endl;
    return 0;
}