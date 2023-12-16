#include <iostream>
using namespace std;
main()
{
    int a, b;
    cout<<"Enter any two number : ";
    cin>>a>>b;
    try
    {
        if(b < 0)
        {
            throw b;
        }
        else if (b == 0)
        {
            throw "Zeros Not Allowed!";
        }
        else
        {
            cout<<"The result is: "<<a/b;
        }
    }
    catch(int a)
    {
        cout<<"Exception: b = "<<b;
    }
    catch(const char* error)
    {
        cout<<"Exception: "<<error;
    }
    return 0;
}