//classes:
//-->have structure and more
//-->can have methods(functions) and properties(variables)
//-->have both pri/public members both
//TOPIC:nesting of member function
//example to find the ones complement
#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
private:
    void chk_bin(void);
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"enter any binary number "<<endl;
    cin>> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) !='1')
        {
            cout<<"the number you have entered is not in binary format "<<endl;
            exit(0); 
        }
        
    }
    
}

void binary :: ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
             s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }        
    }    
}

void binary ::display(void)
{
    cout<<"displaying your complimented binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s.at(i);
    }
    cout<<endl;
    
}


//lets call the functions 

int main()
{
    binary c;
    c.read();
    c.display();
    c.ones_compliment();
    c.display();

    return 0;
}
