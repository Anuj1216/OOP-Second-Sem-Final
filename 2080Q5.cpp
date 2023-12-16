//Friend Function
// #include <iostream>
// using namespace std;
// class Area
// {
//     int l,b;
//     public:
//         void get_data()
//         {
//             cout<<"Enter the length and breadth: ";
//             cin>>l>>b;
//         }
//         void display_data()
//         {
//             cout<<"Length = "<<l<<endl;
//             cout<<"Breadth = "<<b<<endl;
//         }
//         friend int area(Area);
// };
// int area(Area a)
// {
//     int area = a.l * a.b;
//     return area;
// }
// main()
// {
//     Area a;
//     cout<<"For Rectangle: "<<endl;
//     a.get_data();
//     a.display_data();
//     cout<<"Area of Rectangle = "<<area(a)<<endl;
//     return 0;
// }
//Friend Class
#include <iostream>
using namespace std;
class Anuj
{
    int love, trust;
    public:
        void get_data()
        {
            cout<<"Enter the love and trust percent: ";
            cin>>love>>trust;
        }
        friend class Suchana;
};
class Suchana
{
    public:
        void display(Anuj a)
        {
            cout<<"Love = "<<a.love<<endl;
            cout<<"Trust = "<<a.trust<<endl;
        }
        int get_total(Anuj a)
        {
            int total = a.love + a.trust;
            return total;
        }
};
main()
{
    Anuj a;
    a.get_data();
    Suchana s;
    s.display(a);
    cout<<"Total Love and Trust = "<<s.get_total(a);
    return 0;
}