//objects memory allocation and using arrays in classes
#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void) {counter =0;}
        void setPrice(void);
        void displayPrice(void);
};


void Shop :: setPrice(void)
{
    cout <<"enter Id of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}





int main()
{
    int j;
    Shop kirana;
    kirana.initcounter();
    for (int i = 0; i < 3; i++)
    {
        kirana.setPrice();
    }
    
    kirana.displayPrice();
    return 0;
}