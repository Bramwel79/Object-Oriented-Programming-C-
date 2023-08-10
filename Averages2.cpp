#include<iostream>
#include "CollegeCourse.cpp"
#include "Sale.cpp"


using namespace std;

template<class T>
T average(T input, T input2)
{
    T ans = (input + input2) / 2;
    return ans;
}

template<class T>
T average(T input, T input2, T input3)
{
    T ans = (input + input2 + input3) / 3;
    return ans;
}


int main()
{
    int one = 12;
    int two = 25;
    int three = 39;
    double done = 55.45;
    double dtwo = 85.55;
    double dthree = 100.95;
    CollegeCourse course1("ENG 101",'A',3);
    CollegeCourse course2("MATH 100",'C',5);
    CollegeCourse course3("KISW 121",'B',9);
    CollegeCourse course4;
    CollegeCourse course5;

    cout << average(one,two)<<endl;
    cout << average(one,three)<<endl;
    cout << average(two,three)<<endl;
    cout << average(one,two,three)<<endl;
    cout << average(done,dtwo)<<endl;
    cout << average(done,dthree)<<endl;
    cout << average(dtwo,dthree)<<endl;
    cout << average(done,dtwo,dthree)<<endl;
    cout << average(course1.getCredits(),course2.getCredits())<<endl;
    cout << average(course1.getCredits(),course2.getCredits(),course3.getCredits())<<endl;
    cout << course1 <<endl;
    cout << course2 <<endl;
    cout << course3 <<endl;
    course4 = course1 + course2;
    cout << "The honour points of course 1 and 2 = " <<course4.getHonourPoints()<<endl;
    course5 = course1 / 2;
    cout << "The honour points of course 1 divided by 2 = " <<course5.getHonourPoints()<<endl;

    cout <<"\nExample is taken from page 410"<<endl;
    Sale aShirt(1567, 39.95);
    Sale aTie(1568, 33.55);
    Sale pants(1569, 49.99);
    Sale total(0,0);
    total = aShirt + aTie + pants;
    aShirt.showSale();
    aTie.showSale();
    pants.showSale();
    cout << endl << "Total:" << endl;
    total.showSale();
    return 0;
}
