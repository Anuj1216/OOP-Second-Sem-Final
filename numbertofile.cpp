#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    ofstream file("Number.txt");
    cout<<"Enter the 10 numbers: ";
    for(int i = 0; i < 10; i++)
    {
        cin>>a[i];
        file<<a[i]<<endl;
    }
    file.close();
    return 0;
}