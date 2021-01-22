#include <iostream>
using namespace std;

 //structure(it containes variables with different diferent datatypes)
typedef struct employee
 {
         /* data */
         int email;
         char favChar;
         float salary;
 } ep;
     
union money  //if you wanna use only one variable out of some and also  to save memory then use this option of union if you use one after the other then prev is overwrite
{
    int rice;
    char favChar;
    float salary;
}


int main()
{
    //  ep rag  hav;
    //  raghav.email =1;
    //  raghav.favChar ='a';
    //  raghav.salary =1213314;
    //  cout <<raghav.email<<endl;
    //  cout <<raghav.favChar<<endl;
    //  cout <<raghav.salary <<endl;
    enum meal(breakfast, lunch, dinner)
    //enum willl assign numbers to the variables

     return 0;    
    
     
}