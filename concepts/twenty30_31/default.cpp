//constructors with default arguments in cpp
#include <iostream>
using namespace std;

class simple
{
    int num1;
    int num2;
    int num3;

    public:
        simple(int a,int b=3,int c=4)
        {
            num1=a;
            num2=b;
            num3=c;
        }

        void printdata();
};

void simple :: printdata()
{
    cout<<"the numbers are"<<num1<<", "<<num2<<" and "<<num3<<endl;
}


int main()
{
    simple a(1);
    a.printdata();

    return 0;
}