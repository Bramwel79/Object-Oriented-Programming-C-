#include<iostream>

using namespace std;

int main()
{
  const int SUBSCRIPT = 7;
  char myName[SUBSCRIPT] = {'b','r','a','m','w','e','l'};
  int x ;
  int asteriskCount = 0;

  for(x = 0;x < SUBSCRIPT;++x)
  {
      cout << myName[x] << " "<< '*';
      ++asteriskCount;
      if(asteriskCount == (SUBSCRIPT - 1))
      {
          cout << myName[SUBSCRIPT - 1];
          break;
      }


  }



    return 0;
}
