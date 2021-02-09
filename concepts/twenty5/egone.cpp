#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 12;
        cout << "Enter the id of employee";
        cin >> id;
    }


    void getId(void)
    {
        cout << "the id of the employee is " << id << endl;
    }
};

//lets call the function
int main()
{
    //what if we have 1000s of emplloyeewe can put the name if every guy so we will store the data of employee in the array
    employee rt[4];
    for (int i = 0; i < 4; i++)
    {
        rt[i].setId();
        rt[i].getId();
    }

    return 0;
}