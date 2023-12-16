#include <iostream>
using namespace std;
void Repeat(char a = '*', int n = 10)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a;
    }
}
main()
{
    cout<<"With Default Arguments:"<<endl;
    Repeat();
    cout<<endl;
    cout<<"With Arguments Passed:"<<endl;
    Repeat('A', 5);
    return 0;
}