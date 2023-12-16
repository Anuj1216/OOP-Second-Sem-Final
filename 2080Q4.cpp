#include <iostream>
using namespace std;
class Count
{
    static int c;
    public:
        Count()
        {
            c++;
        }
        static void count_obj()
        {
            cout<<"Number of Objects created = "<<c<<endl;
        }
};
int Count::c;
main()
{
    Count c1, c2;
    Count::count_obj();
    Count c3;
    Count::count_obj();
    return 0;
}