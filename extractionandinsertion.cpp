#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;
    public:
        Distance()
        {
            feet = 0;
            inch = 0;
        }
        Distance(int feet1, int inch1)
        {
            feet = feet1;
            inch =inch1;
        }
        friend ostream &operator << (ostream &output, const Distance &d)
        {
            output <<"F: "<<d.feet<<" I: "<<d.inch<<endl;
            return output;
        }
        friend istream &operator >> (istream &input, Distance &d)
        {
            input >> d.feet>>d.inch;
            return input;
        }
};
main()
{
    Distance d1(11,10),d2(5,11),d3;
    cout<<"Enter the value of third object: "<<endl;
    cin>>d3;
    cout<<"First Distance: "<<d1<<endl;
    cout<<"Second Distance: "<<d2<<endl;
    cout<<"Third Distance: "<<d3<<endl;
    return 0;
}