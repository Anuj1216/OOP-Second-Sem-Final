// #include <iostream>
// using namespace std;
// class Sample
// {
//     int a;
//     public:
//         Sample(int x)
//         {
//             a = x;
//         }
//         void display()
//         {
//             cout<<"A = "<<a<<endl;
//         }
//         Sample operator + (Sample &s)
//         {
//             int a1 = a + s.a;
//             return Sample(a1);
//         }
// };
// main()
// {
//     Sample s1(3), s2(4);
//     s1.display();
//     s2.display();
//     Sample s3 = s1 + s2;
//     s3.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Sample
// {
//     int a;
//     public:
//         void get_data()
//         {
//             cout<<"Enter the value: ";
//             cin>>a;
//         }
//         void display()
//         {
//             cout<<"A = "<<a<<endl;
//         }
//         void operator < (Sample s)
//         {
//             (a < s.a) ? cout<<"Lesser = "<<a:cout<<"Lesser = "<<s.a<<endl;
//         }
//         void operator > (Sample s)
//         {
//             (a > s.a) ? cout<<"Greater = "<<a:cout<<"Greater = "<<s.a<<endl;
//         }
// };
// main()
// {
//     Sample s1,s2;
//     s1.get_data();
//     s2.get_data();
//     s1 < s2;
//     s1 > s2;
//     return 0;
// }
#include <iostream>
using namespace std;
class Sample
{
    int a;
    public:
        Sample(int x)
        {
            a = x;
        }
        void display()
        {
            cout<<"A = "<<a<<endl;
        }
        friend void operator += (Sample&, Sample&);
};
void operator += (Sample& s1, Sample& s2)
{
    s1.a = s1.a + s2.a;
}
main()
{
    Sample s1(4), s2(5);
    s1.display();
    s2.display();
    s1 += s2;
    s1.display();
    return 0;
}