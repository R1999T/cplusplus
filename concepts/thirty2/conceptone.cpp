//Dynamic initialization of objects using constructors
#include <iostream>
using namespace std;

class bankDeposit
{
    int principal;
    int interestRate;
    int years;
    int returnValue;

    public:
        bankDeposit(){}
        bankDeposit(int p,int y,float r);
        bankDeposit(int p, int y, int r);
        void showValue();
};
// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

bankDeposit :: bankDeposit(int p,int y, float r)
{
    principal =p;
    interestRate= r;
    years =y;
    returnValue=principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }
bankDeposit :: bankDeposit(int p,int y, int r)
{
    principal =p;
    interestRate= float(r)/100;
    years =y;
    returnValue =principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue *(1+interestRate);
    }
    
}

void bankDeposit :: showValue()
{
    cout<<endl<<"principal amount was "<<principal<<". return value after"<<years<<" years"<<" is "<<returnValue<<endl;
}

// int main()
// {
//     bankDeposit b1, b2, b3;
//     int p,y;
//     float r;
//     int R;

//     cout<<"enter the principal amount "<<endl;
//     cin>>p;
//     cout<<"wnter the rate"<<endl;
//     cin>>r;
//     cout<<"enter the years"<<endl;
//     cin>>y;
//     b1 =bankDeposit(p, y, r);
//     b1.showValue();
    

//     return 0;
// }




// #include<iostream>
// using namespace std;


// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}
//         BankDeposit(int p, int y, float r); // r can be a value like 0.04
//         BankDeposit(int p, int y, int r); // r can be a value like 14
//         void show();
// };





// void BankDeposit :: show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }

int main(){
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankDeposit(p, y, r);
    bd1.showValue();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposit(p, y, R);
    bd2.showValue();
    return 0;
}
