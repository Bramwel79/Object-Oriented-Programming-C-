#include<ctime>
#include<stdlib.h>  //for srand() and rand() functions
#include<iostream>
using namespace std;
int main()
{
  const int DIVISOR = 100;
  int clientGuess;
  int randomNumber;
  int guessCount = 0;
  srand((unsigned)time(NULL));
  randomNumber = (rand() % DIVISOR);


  do
  {

       cout << "\nEnter your random number choice: ";
       cin >> clientGuess;

       if(clientGuess == randomNumber)
       {
           cout << "\Guess was correct.";
       }
       else
       if(clientGuess < randomNumber)
       {
           cout << " \nGuess was too low. ";
       }
       else
       {
          cout << "\nGuess was too high.";
       }
  }while(clientGuess != randomNumber);

return 0;
}
