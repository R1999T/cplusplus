//swapping of two numbers

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void swapping(c1&, c2&);
    public:
        void indata(int a)
        {
            val1 =a;
        }

        void display(void)
        {
            cout <<val1 <<endl;
        }

};


class c2
{
    int val2;
    friend void swapping(c1&, c2&);
    public:
        void indata(int b)
        {
            val2 =b;
        }

        void display(void)
        {
            cout <<val2 <<endl;
        }

};

//lets call the values  by reference
void swapping(c1& x, c2& y)
{
    int tmp= x.val1;
    x.val1= y.val2;
    y.val2 =tmp;
}



int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(5);
    oc2.indata(6);
    swapping(oc1, oc2);

    cout<<"after swap c1 becomes: ";
    oc1.display();
    cout<<"after swap c2 becomes: ";
    oc2.display();
    return 0;
}