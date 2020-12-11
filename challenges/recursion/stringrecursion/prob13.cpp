//Friends paring problem
//find the no. of ways in which n friends can remain single or can be paired up?

#include <iostream>
using namespace std;

int friendParing(int n)
{
    if (n ==0 || n ==1 || n ==2)
    {
        return n;
    }

    return friendParing(n -1) + friendParing(n -2)*(n -1);
}

int main()
{
    cout <<friendParing(4) <<endl;
    return 0;
} 