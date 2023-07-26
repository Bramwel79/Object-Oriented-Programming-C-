#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{

  const int SUBSCRIPT = 6;
  char partNumber[SUBSCRIPT];
  char input;
  int x ;
  bool partNumberValid = false;

  //get input and fill array
  for(x = 0;x < sizeof(partNumber)/sizeof(partNumber[0]);++x)
  {
     cout << "Enter part number character "<< (x+1) <<":  ";
     cin  >> input;
     partNumber[x] = input;

/*check array for validity as follows
   first character must be A,B or C
   second character must be numeric between 1 and 4
   third character must be numeric between 0 and 9
   fourth character must be lowecase letter
   fifth character must be numeric between 2 and 6
   sixth character must be numeric between 2 and 6*/

     if((partNumber[0] == 'A' || partNumber[0] == 'B' || partNumber[0] == 'C')&&
         (partNumber[1] >=1 && partNumber[1] <= 4)&&
          (partNumber[2] >=0 && partNumber[2] <= 9)&&
           (islower(partNumber[3])) &&
            (partNumber[4] >=2 && partNumber[4] <= 6)&&
             (partNumber[5] >=2 && partNumber[5] <= 6))
     {
         partNumberValid = true;
     }

  }
  //display results
   if(partNumberValid = true)
   {
       cout << "Part Number is Valid" <<endl;
   }
   else
   {
       cout << "Part Number is Invalid" <<endl;
   }
    return 0;
}
