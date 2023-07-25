#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  const int DIVISOR = 10;
  int x;
  int computerGuess;
  int clientGuess;
  int result;
  srand((unsigned)time(NULL));

  computerGuess = rand() % DIVISOR;
  cout << "Guess a number between 0 through 9: ";
  cin >> clientGuess;
  cout << "Computer guessed " << computerGuess;
  cout << "\nYou guessed "<< clientGuess;
  if(computerGuess == clientGuess || clientGuess == computerGuess) //guesses are the same
  {
     cout << "\nGuess was exactly correct";
  }
  else
  if(computerGuess < clientGuess || clientGuess > computerGuess)   // computer's guess is lower than client's
  {
      result = clientGuess - computerGuess;
      if(result <=2)
        cout << "\nGuess was within two of random number";
      else
        cout << "\nGuess was off by more than two";
  }
   else
   if(computerGuess > clientGuess || clientGuess < computerGuess) //computer's guess is higher than client's
   {
       result = computerGuess - clientGuess;
       if(result <= 2)
        cout << "\nGuess was within two of random number";
      else
        cout << "\nGuess was off by more than two";
   }


  return 0;
}
