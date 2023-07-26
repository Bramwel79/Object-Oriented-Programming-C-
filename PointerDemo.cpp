#include<iostream>

using namespace std;

const int MAX = 10;

int main()
{
   int numbers[MAX]= {0};
   int* numberPtr = numbers; //int* numberPtr = &numbers[0]
   int number;

   cout <<"Filling array with pointers = *(numbers + x) = number"<<endl;
   for(int x = 0; x< MAX;++x)
   {
       cout <<"Enter a number: ";
       cin >> number;
       *(numbers + x) = number;
   }
   cout <<"Various ways of outputing the array"<<endl;
   cout << "numbers[y]" <<endl;
   for(int y = 0; y < MAX; ++y)
   {
       cout <<"The numbers are: " << numbers[y]<<endl;
   }

   cout <<"numberPtr[y]"<<endl;
   for(int y = 0; y < MAX; ++y)
   {
       cout <<"The numbers are: " << numberPtr[y]<<endl;
   }

   cout <<"*(numbers + y)"<<endl;
   for(int y = 0; y < MAX; ++y)
   {
       cout <<"The numbers are: " << *(numbers + y)<<endl;
   }

   cout<<"*(numberPtr + y)"<<endl;
   for(int y = 0; y < MAX; ++y)
   {
       cout <<"The numbers are: " << *(numberPtr + y)<<endl;
   }

    return 0;
}
