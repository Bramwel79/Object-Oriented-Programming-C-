#include<iostream>
#include<algorithm>

using namespace std;

const int SIZE = 10;
int numbers[SIZE];

void getNumbers();
void getSmallestAndLargestNumber(int a[SIZE]);

int main()
{
    getNumbers();
    cout <<"\n"<<endl;
    getSmallestAndLargestNumber(numbers);

    return 0;
}

void getNumbers()
{
   int no;
   for(int x = 0; x < SIZE;++x)
   {
       cout <<"Enter number: ";
       cin >> no;
       numbers[x] = no;

   }

}

void getSmallestAndLargestNumber(int a[SIZE])
{
   //sort array first
   sort(a,a+SIZE);
   int smallest;
   int largest;
   for(int i = 0; i < SIZE; ++i)
   {
       for(int j = 0; j < SIZE;++j)
       {
           if (i < j)
           {
               smallest = a[i];
               break;
           }
           if(i > j)
           {
               largest = a[i];
               break;
           }
       }


   }
   cout <<"Smallest is : "<<smallest<<endl;
   cout <<"Largest is : "<<largest<<endl;

}
