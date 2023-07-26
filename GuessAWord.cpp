#include <iostream>
#include <string>
#include <ctime>
#include<cstdlib>

using namespace std;

int main()
{
   const int DIVISOR = 4;
   const int ROW = 5;
   const int COLUMN = 8;
   string words[ROW][COLUMN]= { {"stranger"},
                                {"literate"},
                                {"lumpsums"},
                                {"hertscom"},
                                {"treetops"}};
   string hiddenWord;
   string wordAsterisks = "********";
   string guess;
   char answer;
   int numberOfGuesses = 0;

  srand((unsigned)time(NULL));
  int result;
do
{
  //generate random word
       result = rand() % DIVISOR;
       hiddenWord = words[result][0];
       cout << result << " : " << hiddenWord <<endl;

   //display random word using asterisks

  for(int i = 0 ;i < COLUMN ;++i)
  {
      cout <<"Guess a letter in the secret word: "<<wordAsterisks;
      cout<<"\n"<<endl;

      //allow client to guess hidden word
      cout <<"Guess a letter > ";
      cin >> guess;

      //process guess to see if there is a match
      if(guess == hiddenWord.substr(i,1))
      {
         wordAsterisks = wordAsterisks.replace(i,1,guess);
         ++numberOfGuesses;
      }
      else
      {
          wordAsterisks = wordAsterisks.replace(i,1,guess);
          cout << "Sorry - "<<guess<< " is not in the word"<<endl;
      }

      if(numberOfGuesses == 8)
      {
         cout << "Good job!"<<endl;
         cout << "You guessed the word "<<hiddenWord<< " in "<<numberOfGuesses << " tries"<<endl;
      }


  }
  //reset number of guesses and wordAsterisks
  numberOfGuesses =0;
  wordAsterisks = "********";

  cout <<"Do you want to play again - y or n ?";
  cin >> answer;

}while(answer == 'y');


    return 0;
}
