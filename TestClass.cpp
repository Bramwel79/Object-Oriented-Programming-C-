#include<iostream>

using namespace std;

class TestClass
{
private:
    int marks;

public:
    TestClass();


};

TestClass::TestClass()
{
    cout << "Constructing";
}

int main()
{
    TestClass test;

    return 0;
}
