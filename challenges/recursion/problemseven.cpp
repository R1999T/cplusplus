//Find the first and last occurence of a number in an array
//(*strictly increasing)


//use of pointer
#include<iostream>
using namespace std;

//function to check first occurence
int firstocc(int arr[], int n, int i, int key)
{
    if (i ==n)
    {
        return -1;
    }

    if (arr[i] ==key)
    {
        return i;
    }

     
    return firstocc(arr, n, i+1, key);
}

//function to check last occurence

int lastocc(int arr[], int n, int i, int key)
{
    if(i<=n){
    int restArray = lastocc(arr, n, i+1, key);
    if (restArray !=-1)
    {
        return restArray;
    }
    if (arr[i] ==key)
    {
        return i;
    }
    return -1;    
    }
      return -1;  
}

//code to take input

int main()
{
    int arr[] ={4, 2, 1, 2, 5, 2, 7};
    cout <<firstocc(arr, 7, 0, 2) <<endl;
    cout <<lastocc(arr, 7, 0, 2) <<endl;
    return 0;
}