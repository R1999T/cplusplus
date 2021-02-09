//find the distance between two coordinates

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    friend float distanceBtwPoints(Point p1, Point p2);
    Point(int a, int b) //this constructor will take two parameters it is not default
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "the point is (" << x << ", " << y << ")" << endl;
    }
};

//now we will ceate a friend function to find the disance between two points
//this requires value in float
float distanceBtwPoints(Point p1, Point p2)
{
    float value = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return value;
}

int main()
{
    Point a(1, 2);
    a.displayPoint();

    Point b(4, 5);
    b.displayPoint();

    float result = distanceBtwPoints(a, b);
    cout << "distance between two points is" << result;
    return 0;
}

// Prashant Majumdar
// 9 months ago (edited)
// Program:----
// #include<iostream>
// #include<cmath>
// Using namespace std;
// Class point{
// Int x,y;
// Public:
// point(int a,int b){
// x=a;
// y=b; }
// Void display (){
// Cout<<"the point is ("<<x<<" , "<<y<< ")"<<endl; }
// friend double distance(point,point);
// };
// double  distance (point p1, point p2){
// double res=sqrt(pow(p1.x-p2.x,2)+
// pow(p1.y-p2.y, 2));
// return res; }

// int main(){
// point p(1,0);
// p.display();
// point q(70,0);
// q.display();
// double result= distance (p,q);
// cout<<result<<endl;
// return 0;
//}