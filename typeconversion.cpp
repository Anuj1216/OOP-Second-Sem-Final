//Implicit
// #include <iostream>
// using namespace std;
// main()
// {
//     float a = 2.33;
//     int b;
//     b = a;
//     cout<<"Converted float to int: "<<b;
//     return 0;
// }
//Explicit
#include <iostream>
using namespace std;
main()
{
    int P,T,R;
    cout<<"Enter the value of P, T and R: ";
    cin>>P>>T>>R;
    float SI = (float)(P * T * R)/100;
    cout<<"SI = "<<SI;
    return 0;
}