// #include <iostream>
// #include <fstream>
// using namespace std;
// main()
// {
//     ofstream file ("Intro.txt");
//     file<<"Hello! I am Anuj. I love my Mustu baby.";
//     file.close();
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char str[50];
    ifstream file ("Intro.txt");
    file.getline(str, 50);
    cout << "The content is: " << str << endl;
    file.close();
    return 0;
}