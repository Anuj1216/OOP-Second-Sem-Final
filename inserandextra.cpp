#include <iostream>
using namespace std;
class Kilogram
{
    int kg, g;
    public:
        Kilogram()
        {
            kg = 0;
            g = 0;
        }
        Kilogram(int kg1, int g1)
        {
            kg = kg1;
            g = g1;
        }
        friend ostream &operator << (ostream &output, const Kilogram &k)
        {
            output<<k.kg<<" KG "<<k.g<<" G "<<endl;
            return output;
        }
        friend istream &operator >> (istream &input, Kilogram &k)
        {
            input>>k.kg>>k.g;
            return input;
        }
};
main()
{
    Kilogram k1(12,250), k2(10, 150), k3;
    cout<<"Enter the values for third object: ";
    cin>>k3;
    cout<<"First Weight: "<<k1;
    cout<<"Second Weight: "<<k2;
    cout<<"Third Weight: "<<k3;
    return 0;
}