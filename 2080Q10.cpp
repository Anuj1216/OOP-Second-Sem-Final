#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x,y;
    public:
        Point()
        {
            x = 0;
            y = 0;
        }
        Point(int x1, int y1)
        {
            x = x1;
            y = y1;
        }
        Point operator - (Point &p)
        {
            int ex = pow((p.x - x),2);
            int ey = pow((p.y - y),2);
            cout<<"Euclidean Distance = "<<sqrt(ex+ey)<<endl;
        }
        void display()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
};
main()
{
    Point p1(4,5), p2(3,3);
    p1.display();
    p2.display();
    Point p3 = p1 - p2;
    return 0;
}