#include<iostream>

using namespace std;

void getIntegers();
void quadruple(int n[],int s);

const int SIZE = 5;
int numbers[SIZE];

int main()
{

    getIntegers();
    quadruple(numbers,SIZE);

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

void quadruple(int n[],int s)
{
    int result;
    for(int x = 0; x < s;++x)
    {
        result = n[x] * 4;
        cout <<"The quadrupled result of " <<n[x]<<" is "<<result<<endl;
    }


}
