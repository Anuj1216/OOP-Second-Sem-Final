#include <iostream>
using namespace std;
main()
{
    char c, name[20];
    // cout<<"Enter the first letter of your name: ";
    // cin.get(c);
    cout<<"Enter your name: ";
    cin.getline(name, 20);
    // cout<<endl<<"First Letter is: ";
    // cout.put(c);
    cout<<endl<<"Name is: "<<name<<endl;
    return 0;
}