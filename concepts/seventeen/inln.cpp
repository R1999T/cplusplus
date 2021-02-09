//inlinefunctions , defaul.t arguments and contant arguments in cpp
//when function is doing very less prcesssing go for inline
//neveer use inline in recursion
//never use static variables ,loops,switch as inline
#include <iostream>
using namespace std;

//inline function
// inline int product(int a,int b)
// {
//      return a*b;
// }

//static variable
// int product(int a, int b)
// {
//      static int c =0;//this executes only one .it is saved
//      c =c+1;//next time this value is retained
//      return a*b+c;
// }




// int main()
// {
//      int a, b;
//      cout<<"enter the value of a and b"<<endl;
//      cin>>a>>b;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      cout <<"the product of a and b is "<<product(a, b)<<endl;
//      return 0;
// }



//-------------------------------------------------------------------------------------------

//default values

// float moneyRcvd(int currentMoney, float factor=1.04)
// {
//      return currentMoney* factor;
// }

// int main()
// {
//      // int a, b;
//      // cout<<"enter a and b"<<endl;
//      // cin >>a>>b;
//      int money =10000;
//      cout<<"if you have"<<money<<"you will recieve"<<moneyRcvd(money)<<"afer 1 year";
//      cout<<"if you  r VIP and you have"<<money<<"you will recieve"<<moneyRcvd(money,1.07)<<"afer 1 year";
//      return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------

//constant arguments
//int fsfs(const char *p)  //best for reference variables and pointers