#include <iostream>
using namespace std;
int main()
{
     for(int i =0; i <40; i++)
     {
         for(int j =0; j<=4; j++)
         {
          if(i ==2*j)
          {
              continue;
          }
          cout <<i <<endl;
         } 
     }

     return 0;
}