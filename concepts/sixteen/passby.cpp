//call by value and call by reference
#include <iostream>
using namespace std;

// void swap(int a, int b)
// {
//     int temp =a;
//     a =b;
//     b =temp;
// }


//this will not work as our actual values copied in the function variables 
// int main()
// {
//     int x =4, y =5;
//     cout <<"x is"<<x <<"y is "<<y<<endl;
//     swap(x, y);
//     cout <<"x is"<<x <<"y is "<<y<<endl;
//     return 0;
// }
//---------------------------------------------------------------------------------
//using pointers:method-1
// void swapPointer(int*a, int* b)//as we have passed address so it will changed "call by pointer" using pointers
// {
//     int temp =*a;
//     *a = *b;
//     *b = temp;
// }



// int main()
// {
//      int x =4, y =5;
//      cout <<"x is "<<x <<" y is "<<y<<endl;
//      swapPointer(&x, &y);
//      cout <<"x is "<<x <<" y is "<<y<<endl;
//      return 0;
// }

//---------------------------------------------------------------------------------------
//method two: "call by value"

void swapReferenceVar(int &a, int &b)//as we have passed address so it will changed "call by reference" using pointers
 {
    int temp =a;
     a = b;
     b = temp;
 }

int main()
{
     int x =4, y =5;
     cout <<"x is "<<x <<" y is "<<y<<endl;
     swapReferenceVar(x, y);
     cout <<"x is "<<x <<" y is "<<y<<endl;
     return 0;
}
