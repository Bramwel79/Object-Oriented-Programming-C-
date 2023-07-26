#include<iostream>

using namespace std;

void getIntegers();
int quadruple(int n);

const int SIZE = 5;
int numbers[SIZE];

int main()
{

    getIntegers();
    for(int x = 0; x < SIZE;++x)
    {
        int answer = quadruple(numbers[x]);
        cout <<"The quadrupled result of " <<numbers[x]<<" is "<<answer<<endl;
    }

    return 0;
}

void getIntegers()
{
    int no;
    for(int i = 0; i < SIZE; ++i)
    {
       cout <<"Enter integer " <<(i +1) << " : ";
       cin >>no;
       numbers[i]= no;
    }

}

int quadruple(int n)
{
    int result;
    result = n * 4;

    return result;
}
