#include <iostream>
using namespace std;
class Theory
{
    protected:
        int ds,oop,mp,math,stat;
    public:
        void get_data()
        {
            cout<<"Enter theory marks of 5 subjects: ";
            cin>>ds>>oop>>mp>>math>>stat;
        }
        void display_marks()
        {
            cout<<"DS = "<<ds<<endl;
            cout<<"OOP = "<<oop<<endl;
            cout<<"MP = "<<mp<<endl;
            cout<<"MATH = "<<math<<endl;
            cout<<"STAT = "<<stat<<endl;
        }
};
class Practical
{
    protected:
        int dsp,oopp,mpp,mathp,statp;
    public:
        void get_data()
        {
            cout<<"Enter practical marks of 5 subjects: ";
            cin>>dsp>>oopp>>mpp>>mathp>>statp;
        }
        void display_marks()
        {
            cout<<"DS-P = "<<dsp<<endl;
            cout<<"OOP-P = "<<oopp<<endl;
            cout<<"MP-P = "<<mpp<<endl;
            cout<<"MATH-P = "<<mathp<<endl;
            cout<<"STAT-P = "<<statp<<endl;
        }
};
class Total : public Theory, public Practical
{
    int total;
    public:
        void get_total()
        {
            total = ds+dsp+oop+oopp+mp+mpp+math+mathp+stat+statp;
        }
        void display_total()
        {
            cout<<"Total Marks = "<<total<<endl;
        }
};
main()
{
    Total t;
    t.Theory::get_data();
    t.Practical::get_data();
    t.get_total();
    t.Theory::display_marks();
    t.Practical::display_marks();
    t.display_total();
    return 0;
}