#include<iostream>
#include "City.cpp"
#include "Planet.cpp"

using namespace std;

template<class T>
T calcDistance(T input, T input2)
{
    T ans = input + input2;
    return ans;
}


int main()
{
    int one = 34;
    int two = 55;
    cout <<"Distance = " <<calcDistance(one,two)<<endl;

    double three = 34.145;
    double four = 55.55;
    cout <<"Distance = " <<calcDistance(three,four)<<endl;

    City oslo("Oslo",4512);
    City patras("Patras",8956);


    cout <<"Distance from " <<oslo.getCityName() << " to " <<
         patras.getCityName() << " = " <<calcDistance(oslo.getDistance(),
                                        patras.getDistance())<<endl;


    Planet earth("Earth",455512);
    Planet so("So",85956);


    cout <<"Distance from " <<earth.getPlanetName() << " to " <<
         so.getPlanetName() << " = " <<calcDistance(earth.getDistance(),
                                        so.getDistance())<<endl;
    return 0;
}
