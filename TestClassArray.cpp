#include<iostream>

using namespace std;
const int SIZE = 10;

class TestClass
{
private:
    int marks;

public:
    TestClass();


};

TestClass::TestClass()
{
    cout << "Constructing"<<endl;
}

int main()
{
    TestClass test[SIZE];

    return 0;
}
