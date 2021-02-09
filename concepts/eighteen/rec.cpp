//recursion and recursive function
//example one -factorial of n,


factorial(int n)
{
    if (n<=1)  //base condition 
    {
        return 1;
    }
    
    return n *factorial(n-1);//it dependes on base condition
}


//----------------fibonacci sequence------------------
fibonacci(int n)
{   

    if (n<2)
    {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
    
}


///calling the function
#include <iostream>
using namespace std;
int main()
{
     int a;
     cout<<"enter  a number"<<endl;
     cin>>a;
     cout<<"the fibonacci no at this place is "<<fibonacci(a);


     return 0;
}