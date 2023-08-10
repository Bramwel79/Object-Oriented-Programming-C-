#include<iostream>

using namespace std;

template<class T>
T circleArea(T radius)
{
   T area = 3.14 * radius * radius;
   return area;
}

int main()
{
    int anInt = 12;
    double aDouble  = 52.45;
    int area;
    double area2;

    area = circleArea(anInt);
    cout<<"Area of circle(integer) = " <<area<<endl;

    area2 = circleArea(aDouble);
    cout<<"Area of circle(double) = " <<area2<<endl;

    return 0;
}
