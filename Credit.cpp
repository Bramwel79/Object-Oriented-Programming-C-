#include<iostream>
#include<iomanip>

using namespace std;

void customerCreditLimit(double = 500.00);


int main()
{
    customerCreditLimit();
    customerCreditLimit(15.55);

    return 0;
}

/*
* method demonstrates use of default parameters
*/
void customerCreditLimit(double value)
{

    cout <<"The double values is " << value<<endl;
}
