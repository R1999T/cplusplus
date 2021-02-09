//
#include <iostream>
using namespace std;

class y;  //this  will help in detecting the class y  variable

class x
{
    int data;
    public:
        void setValue(int value)
        {
            data =value;
        }

        friend void add(x,y);
};


class y
{
    int num;
    public:
        void setValue(int value)
        {
            num =value;
        }

    friend void add(x,y);    
};

void add(x a, y b)
{
    cout<<"addition of the data of objects from x and y "<<a.data + b.num;
}


//lets take the input and run the classes
int main()
{
    x a1;
    a1.setValue(7);

    y b1;
    b1.setValue(10);
   

    add(a1, b1);
    
    

     return 0;
}