//static data members and method
//static vaiables are not written inside the class
//we have to declare it twice first in class and second time in class
//static functions are made to access only static variables
#include <iostream>
using namespace std;

class Employee
{   //id and count are private variables
    int id;
    static int count;

    public:
    void setData()
    {
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData()
    {
        cout<<"the id of employee is "<< id;
    }
    static void getCount(void)
    {
        cout<<"the value of count is "<<count<<endl;
    }
};

int Employee:: count;

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}