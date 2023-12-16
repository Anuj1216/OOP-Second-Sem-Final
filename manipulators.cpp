#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    char a[20];
    float b;
    cout<<"Enter your name: ";
    cin>>a;
    cout<<"Enter any float value(with more than 2 deciaml value): ";
    cin>>b;
    cout<<"Setting Output Width: "<<endl;
    cout<<setw(10)<<a<<endl;;
    cout<<"Floating Manipulator: "<<endl;
    cout<<setprecision(3)<<b;
    return 0;
}