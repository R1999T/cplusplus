//TOPIC: function overloading


#include <iostream>
using namespace std;

//calculate the sum
float sum(float a, int b)
{
    return(a + b);
}

//sum of  three numbers
float sum(int a, int b ,int c)
{
    return(a+b+c);
}

//calculate volume of cylinder
int volume(double r, int h)
{
    return(3.14 * r * r * h);
}

//calculate th volume of cube
int volume(int a)
{
    return(a * a * a);
}

//volume of cuboid
int volume(int l, int b, int h)
{
    return(l*b*h);
}

//inputs for the above functions are
int main()
{
    cout<<"the sum of two numbers 5 and 6 is "<<sum(3.14, 6)<<endl;
    cout<<"the sum of three numbers 4 , 5 and 6 is "<<sum(4, 5, 6)<<endl;
    cout<<"the volume of cylinder with radius 5 and height  6 is "<<volume(5, 6)<<endl; 
    cout<<"the volume of cube with height 4 is "<<volume(4)<<endl;
    cout<<"the volume of cuboid with length breadth and height 4, 5 and 6 is "<<volume(4, 5 ,6)<<endl;

     return 0;
}