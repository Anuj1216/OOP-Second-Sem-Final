// #include <iostream>
// using namespace std;
// class Sample
// {
//     int a;
//     public:
//         void get_data()
//         {
//             cout<<"Enter the data: ";
//             cin>>a;
//         }
//         void display()
//         {
//             cout<<"A = "<<a<<endl;
//         }
//         void operator ++ ()
//         {
//             ++a;
//         }
// };
// main()
// {
//     Sample s;
//     s.get_data();
//     s.display();
//     ++s;
//     s.display();
//     return 0;
// }
//Using Friend 
// #include <iostream>
// using namespace std;
// class Sample
// {
//     int a;
//     public:
//         void get_data()
//         {
//             cout<<"Enter the data: ";
//             cin>>a;
//         }
//         void display()
//         {
//             cout<<"A = "<<a<<endl;
//         }
//         friend void operator ++ (Sample&, int);
// };
// void operator ++ (Sample &s, int)
// {
//     s.a++;
// }
// main()
// {
//     Sample s;
//     s.get_data();
//     s.display();
//     s++;
//     s.display();
//     return 0;
// }
#include <iostream>
using namespace std;
class Sample
{
    int a;
    public: 
        void get_data()
        {
            cout<<"Enter the data: ";
            cin>>a;
        }
        void display()
        {
            cout<<"A = "<<a<<endl;
        }
        friend void operator -- (Sample&, int);
};
void operator -- (Sample &s, int)
{
    s.a--;
}
main()
{
    Sample s;
    s.get_data();
    s.display();
    s--;
    s.display();
    return 0;
}
