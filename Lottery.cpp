#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    const int DIVISOR = 10;
    const int NUM = 3;
    int compGuess[NUM];
    int clientGuess[NUM];
    srand((unsigned)(time)(NULL));
    int x;
    const int ANY_ONE_MATCHING = 10;
    const int TWO_MATCHING = 100;
    const int THREE_MATCHING_NOT_IN_ORDER = 1000;
    const int THREE_MATCHING_IN_EXACT_ORDER =1000000;
    const int NO_MATCHES = 0;
    int numberOfMatches = 0;
    int amountWon = 0;

    //generate computer guesses
    for( x = 0;x< NUM;++x)
    {
       compGuess[x] = rand() % DIVISOR;

    }
    //get client guesses
    cout << "Choose a number between 0 and 9"<<endl;
    cout << "*******************************"<<endl;
    for(x = 0;x < NUM;++x)
    {
        cout << "Enter Guess No "<< x+1 << ": " ;
        cin >> clientGuess[x];
    }

    //display computer guesses
    cout << endl;
    cout << "The computer chose" << endl;
    cout << "******************" << endl;
    for(x= 0;x< NUM; ++x)
    {
        cout << "\nComputer Guess No "<< x+1  << " : "<< compGuess[x] << " ";
    }

    //display client guesses
    cout << endl;
    cout << "\nThe client chose" << endl;
    cout << "******************" << endl;
    for(x = 0;x < NUM; ++x)
    {
        cout << "\nClient Guess No " << x+1 << " : " << clientGuess[x] << " ";
    }

    // calculate amount won
    for(x= 0 ; x< NUM;++x)
    {
        if(clientGuess[x]== compGuess[x])
            ++numberOfMatches;

               if(numberOfMatches == 3)
               {
                  amountWon = THREE_MATCHING_IN_EXACT_ORDER;
               }
               else
               if(numberOfMatches == 2)
               {
                  amountWon = TWO_MATCHING;;
               }
               else
               if(numberOfMatches == 1)
               {
                   amountWon = ANY_ONE_MATCHING;
               }
               else
               {
                 amountWon = NO_MATCHES;
               }
    }
    cout <<endl;
    cout << "\nYou won " << amountWon <<endl;
    return 0;
}
