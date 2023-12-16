#include <iostream>
using namespace std;
template <class t>
class Sum
{
    t a, b;

public:
    void get_data()
    {
        cout << "Enter any two number: ";
        cin >> a >> b;
    }
    t sum();
};
template <class t>
t Sum<t>::sum()
{
    return a + b;
}
main()
{
    Sum<int> s1;
    Sum<float> s2;
    cout << "For Integer Values: " << endl;
    s1.get_data();
    cout << "For Float Values: " << endl;
    s2.get_data();
    cout << "Integer Sum: " << s1.sum() << endl;
    cout << "Float Sum: " << s2.sum();
    return 0;
}