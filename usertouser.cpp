// #include <iostream>
// using namespace std;
// class Feet
// {
//     int feet, inch;
//     public:
//         Feet()
//         {
//             feet = 0;
//             inch = 0;
//         }
//         Feet(int f, int i)
//         {
//             feet = f;
//             inch = i;
//         }
//         void display()
//         {
//             cout<<feet<<" Feet "<<inch<<" Inch "<<endl;
//         }
// };
// class Meter
// {
//     int m, cm;
//     public:
//         Meter(int m1, int cm1)
//         {
//             m = m1;
//             cm = cm1;
//         }
//         void display()
//         {
//             cout<<m<<" M "<<cm<<" CM "<<endl;
//         }
//         operator Feet()
//         {
//             int ft1, in1;
//             cm = m*100 + cm;
//             in1 = cm / 2.54;
//             if (in1 > 12)
//             {
//                 ft1 = in1/12;
//                 in1 = in1 % 12;
//             }
//             return Feet(ft1, in1);
//         }
// };
// main()
// {
//     Meter m(100, 30);
//     m.display();
//     Feet f;
//     f = m;
//     f.display();
//     return 0;
// }
#include <iostream>
using namespace std;
class Meter
{
    int m, cm;
    public:
        Meter(int m1, int cm1)
        {
            m = m1;
            cm = cm1;
        }
        int getter()
        {
            return m;
        }
        int setter()
        {
            return cm;
        }
        void display()
        {
            cout<<m<<" M "<<cm<<" CM "<<endl;
        }
};
class Feet
{
    int feet, inch;
    public: 
        Feet()
        {
            feet = 0;
            inch = 0;
        }
        Feet(int f, int i)
        {
            feet = f;
            inch = i;
        }
        Feet(Meter m)
        {
            int m1 = m.getter();
            int cm1 = m.setter();
            cm1 = m1 * 100 + cm1;
            inch = cm1 / 2.54;
            if(inch > 12)
            {
                feet = inch /12;
                inch = inch % 12;
            }
        }
        void display()
        {
            cout<<feet<<" Feet "<<inch<<" Inch "<<endl;
        }
};
main()
{
    Meter m(100,30);
    m.display();
    Feet f;
    f = m;
    f.display();
    return 0;
}