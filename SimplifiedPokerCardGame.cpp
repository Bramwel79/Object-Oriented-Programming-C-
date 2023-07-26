#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int CARDS_IN_DECK = 52;
const int SUITS = 4;
const int CARDS_PER_SUIT = CARDS_IN_DECK /SUITS;
const int HALF_DECK = CARDS_IN_DECK / 2;
const int DIVISOR = 10;
int cards[CARDS_IN_DECK];
string cardValue[] = {"","Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
string suitValue[] = {"","Spades","Hearts","Diamonds","Clubs"};
int deals = 0;
int suitValueComputer = 0;
int suitValuePlayer = 0;
int cardValueComputer = 0;
int cardValuePlayer = 0;
int computerScore = 0;
int playerScore = 0;
int player1Card[4];
int player1Suit[4];
int player2Card[4];
int player2Suit[4];

void fillDeck(int c[]);
void selectCard(int cardDeck[],int& cardSuit,int& cardVal);
void determineWinner(int a[],int a1[],int b[],int b1[]);
void flushDeck(int c[]);


int main()
{
   flushDeck(cards);
   fillDeck(cards);
   while(deals < 1)
   {
       for(int i = 0; i < 5;++i)
       {
           selectCard(cards,suitValueComputer,cardValueComputer);
           player2Card[i] = cardValueComputer;
           player2Suit[i] = suitValueComputer;
           selectCard(cards,suitValuePlayer,cardValuePlayer);
           player1Card[i] = cardValuePlayer;
           player1Suit[i] = suitValuePlayer;
       }

       ++deals;
       //system("pause");
       cout <<"\n";
   }
   determineWinner(player1Card,player1Suit,player2Card,player2Suit);
   flushDeck(cards);

  return 0;
}
void fillDeck(int c[])
{
   int suit = 100;
   int val = 1;
   for(int x = 0; x < CARDS_IN_DECK;++x)
   {
       cards[x] = suit + val;
       ++val;
       if(val > CARDS_PER_SUIT)
       {
           val = 1;
           suit += 100;
       }
   }

}

void selectCard(int cardDeck[],int& cardSuit,int& cardVal)
{
   int result;
   srand((unsigned)time(NULL));
   result = CARDS_IN_DECK + (rand() % DIVISOR);
   bool cardFound = false;
   cardSuit = 1;
   cardVal = 100;
   while(!cardFound)
   {
       if(cardDeck[result] != 0)
       {
           cardSuit = cardDeck[result] / 100;
           cardVal = cardDeck[result] % 100;
           cardDeck[result] = 0;
           cardFound = true;

       }
       else
       {
           if(result < CARDS_IN_DECK - 1)
           {
               ++result;
           }
           else
           {
               result = 0;
           }
       }
   }

}

void flushDeck(int c[])
{
   for(int x = 0; x < CARDS_IN_DECK;++x)
   {
       cards[x] = 0;

   }

}

void determineWinner(int a[],int a1[],int b[],int b1[])
{
    //a and a1 are for player while b and b1 are for computer
    for(int x = 0; x < 5;++x)
    {
        for(int y = 0; y < 5;++y)
        {

            if((cardValue[a[x]] == cardValue[a[(y+1)]]) &&
                (suitValue[a1[x]] == suitValue[a1[(y+1)]]))
            {
                ++playerScore;
            }
            if((cardValue[b[x]] == cardValue[b[(y+1)]]) &&
                (suitValue[b1[x]] == suitValue[b1[(y+1)]]))
            {
                ++computerScore;
            }

        }
    }
    if(playerScore == computerScore)
    {
        cout <<"It's a tie."<<endl;
    }
    if(playerScore < computerScore)
    {
        cout <<"Computer has won."<<endl;
    }
    if(playerScore > computerScore)
    {
        cout <<"Player has won."<<endl;
    }

}


