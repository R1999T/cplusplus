//what are constructors
//in last classes to set th data we have to call the setdata with seperate functions
//we want this automatic
/*characterstics of the constructors
-it should be declared in the public section of the class
-they are automatically invoked whenever the object is created
-they cannot return values and do not have return types
-it can have default arguments
-we cannotrefer to there address.
*/
#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:

    complex(void);

    void printnumber()
    {
        cout<<"your complex number is "<<a <<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void) //this is a default constructor which does not take any value
{
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
}



int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

