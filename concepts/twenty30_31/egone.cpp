//a constructor which runs automatically behindthe sceneis "default " constructor
#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        Complex(int, int);// constructor declaration

        void printNumber()
        {
            cout<< "the complex number is "<< a <<" + "<<b<<"i"<< endl;
        }

};

Complex ::Complex(int x,int y) //this is the default constructor as it takes two parameters
{
    a =x;  //initializing the variables
    b =y;
}


int main()
{
    Complex a(3,4);
    a.printNumber();

    Complex b(5,6);
    b.printNumber();

    


    return 0;
}