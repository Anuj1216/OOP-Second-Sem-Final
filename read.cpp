#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    char text[50];
    ifstream file ("Intro.txt");
    while(!file.eof())
    {
        file.getline(text, 50);
        cout<<text;
    }
    file.close();
    return 0;
}