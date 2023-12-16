#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    ifstream file ("Number.txt");
    ofstream odd("odd1.txt");
    ofstream even("even1.txt");
    for(int i = 0; i < 10; i++)
    {
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