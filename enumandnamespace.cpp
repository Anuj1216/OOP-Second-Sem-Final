#include <iostream>
using namespace std;
enum Days {Sunday = 1, Monday, Tuesday, Wednesday};
main()
{
    enum Days today = Monday;
    cout << "Today is Day "<<today<<" of the week.";
    return 0;
}
//namespace