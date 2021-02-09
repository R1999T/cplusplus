//FRIEND FUNCTIONS
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //by typing friend function means  it has given some permissions from the class

    friend complex sumOfComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "your complex number is " << a << " + " << b << "i";
    }
};

complex sumOfComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b, o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(2, 5);
    c1.printNumber();

    c2.setNumber(6, 7);
    c2.printNumber();

    sum = sumOfComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
PROPERTIES of friend function:
=not in the scope of the class
=since it is not in the scope of the class, it cannot be called from the object of that class.  c1.sumOfCompexx() ==INVALIID
=CAN be invoked without the help of object
=usually containes  objects as arguments
=can be declared in publicand private section of class
=it cannot access the  member directly by there names
*/