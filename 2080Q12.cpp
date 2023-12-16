#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("Number.txt");
    cout<<"Enter any ten numbers: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        int a[10];
        cin>>a[i];
        file<<a[i]<<endl;
    }
    ofstream odd("Odd.txt");
    ofstream even("Even.txt");
    for(int i = 0; i <  10; i++)
    {
        int a[10];
        file>>a[i];
        if(a[i] % 2 == 0)
        {
            even<<a[i]<<endl;
        }
        else{
            odd<<a[i]<<endl;
        }
    }
    file.close();
    odd.close();
    even.close();
    return 0;
}