//Class Template
// #include <iostream>
// using namespace std;
// template <class t>
// class Sum
// {
//     t a,b;
//     public:
//         void get_data()
//         {
//             cout<<"Enter the values of a and b: ";
//             cin>>a>>b;
//         }
//         t sum();
// };
// template<class t>
// t Sum<t>::sum()
// {
//     return a + b;
// }
// main()
// {
//     Sum<int> s1;
//     Sum<float> s2;
//     s1.get_data();
//     s2.get_data();
//     cout<<"Integer Sum = "<<s1.sum();
//     cout<<"Float Sum = "<<s2.sum();
//     return 0;
// }
//Function Template
#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
    return a+b;
}
main()
{
    int a, b;
    float c,d;
    cout<<"For Integer Sum: "<<endl;
    cout<<"Enter any two values: ";
    cin>>a>>b;
    cout<<"For Float Sum: "<<endl;
    cout<<"Enter any two values: ";
    cin>>c>>d;
    cout<<"Integer Sum = "<<sum(a,b)<<endl;
    cout<<"Float Sum = "<<sum(c,d)<<endl;
}