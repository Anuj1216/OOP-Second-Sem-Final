#include <iostream>
using namespace std;
main()
{
    int a = 0, b = 1, c, n;
    cout << "Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    return 0;
}