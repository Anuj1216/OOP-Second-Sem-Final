#include <iostream>
using namespace std;
main()
{
    int age;
    cout<<"Enter the age of a Person: ";
    cin>>age;
    try{
        if (age < 0)
        {
            throw "Age is never in negetive value!";
        }
        else if(age > 200)
        {
            throw "Value greater than 200 is not allowed!";
        }
        else{
            cout<<"Given age is: "<<age<<endl;
        }
    }
    catch(const char* error)
    {
        cout<<"Exception: "<<error<<endl;
    }
    return 0;
}