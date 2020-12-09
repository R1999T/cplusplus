//Generate all substrings of a string
//let string is : "abc"

#include <iostream>
using namespace std;

void subseq(string s, string ans)
{
    if (s.length() ==0)   //base case
    {
        cout <<ans <<endl;
        return;
    }

    char ch =s[0];
    string ros=s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans+ch);
    
}

int main()
    {
        subseq("ABC", "");
        cout <<endl;

        return 0;
    }