#include <iostream>
using namespace std;
int main()
{   //first method
     int marks[4] = {1,2,3,4};
   //  cout <<*p<<endl;

     //another method
    int mathmrks[4];
    mathmrks[0] =313;
    mathmrks[1] =435;
    mathmrks[2] =444;
    mathmrks[3] =424;

    cout<<"these are maths marks"<<endl;
    cout<< mathmrks[0] <<endl;

    marks[2] =343;

    for (int i = 0; i <=4; i++)
    {
        cout <<"these are the marks "<<i <<" is " <<marks[i]<<"maths marks are " <<mathmrks[i]<< endl;
    }
    
    //with other types of loop(while and do while)
     
     //pointers and array
     int *p =marks;
     cout<<*(p++);
     cout<<*(++p);
     cout <<"the value of *p  is " <<*p<<endl;
     cout <<"the value of *p+1  is " <<*(p+1)<<endl;
     cout <<"the value of *p+2  is " <<*(p+2)<<endl;
    cout <<"the value of *p+3  is " <<*(p+3)<<endl;


     return 0;
}