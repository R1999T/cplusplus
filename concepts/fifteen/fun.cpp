//how to create function prototype

#include <iostream>
using namespace std;

//function pototype
//type function -name(arguments);
void a(void);
int cal(int , int );


int main()
{
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;

    cout<<"the operations results are"<<cal(num1,num2);
    return 0;
}



int cal(int a, int b)
{
    int c=a+b;
  return c;

    
}