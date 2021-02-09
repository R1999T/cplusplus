//Classes, Public and Private access modifiers in C++
//tuit:21

//why classes?
//structre members are directly accessed from anywhere,it is not safe
//for morebetter performance and security class is used
//we have to use ';' to define clss after curl brackets
//:: -->scope resolution 
#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1,int b1,int c1);   //declaration
        void getData()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee::setData(int a1,int b1, int c1)
{
    a =a1;
    b =b1;
    c =c1;
}

int main()
{
    Employee raghav;
    //don't give valuse to private variable directly they will throw error
    raghav.d =21;
    raghav.e =43;
    raghav.setData(1,2,5);
    raghav.getData();
    return 0;
}





