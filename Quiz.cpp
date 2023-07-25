#include<iostream>

using namespace std;

int main()
{
  int x,y;
  char answer;
  string questions[5]= { "What is the capital city of Greece?",
                         "What is the monetary unit of Greece?",
                         "Is George Michael Greek?",
                         "Is Greece a lovely country?",
                         "Greece is found on which continent?"
                       };
  string multipleChoices[5][4] =  {{"a : Nairobi "," b : Africa"," c : Athens"," d : Ankara"},
                                   {"a : Euro"," b : Shilling"," c : Pound"," d : Dollar"},
                                   {"a : No"," b : Yes"," c : Not sure"," d : Don't know"},
                                   {"a : No"," b : Not sure"," c : Don't know"," d : Yes"},
                                   {"a : Africa"," b : Asia"," c : Europe"," d : South America"},
                                 };

  char answers[5] = {   'c',
                        'a',
                        'b',
                        'd',
                        'c'
                      };
for( x= 0;x < sizeof(questions)/sizeof(questions[0]);++x)
{
    cout << x + 1 << ". " << questions[x];  // ask the questions
    cout << "\n";
   for(y = 0 ; y < sizeof(multipleChoices[0])/sizeof(multipleChoices[0][0]);++y)
   {
       cout << multipleChoices[x][y];  // display the multiple choices
   }
   cout << "\n";
   cout << "\nEnter your answer: " ;   //ask for client response
   cin >> answer;
   while(answer != answers[x])      //kept prompting until input is correct
   {
       cout << "Re-enter your answer: ";
       cin >> answer;
   }
   if(answer == answers[x])  //congratulate for correct response
   {
       cout << " ******Correct.******";
   }


    cout << "\n" <<endl;
}

    return 0;

}
