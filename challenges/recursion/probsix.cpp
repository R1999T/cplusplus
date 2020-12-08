//print number till n,
//in 1.)decreasing order  2.) increasing order

#include<iostream>
using namespace std;

void dec(int n)
{
    if (n ==0)
    {
        return;
    }

    cout <<n <<endl;
    dec(n-1);
    
}

int main()
{
    int main()
    int n;
    cin >>n;

    dec(n);

    return 0;
}