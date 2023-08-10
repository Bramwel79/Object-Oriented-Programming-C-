#include<iostream>

#include "LabCourse.cpp"

using namespace std;

int main()
{

    CollegeCourse cs61B("Computer science","61b",30,155.55);
    cs61B.displayData();
    cout <<"\n";
    LabCourse unix("Computer science","micro2",30,451.55,50.55);
    unix.displayData();

    return 0;



}
