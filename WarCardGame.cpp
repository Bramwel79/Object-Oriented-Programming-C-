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

void fillDeck(int c[]);
void selectCard(int cardDeck[],int& cardSuit,int& cardVal);
void flushDeck(int c[]);


int main()
{
   flushDeck(cards);
   fillDeck(cards);
   while(deals < HALF_DECK)
   {
       selectCard(cards,suitValueComputer,cardValueComputer);
       selectCard(cards,suitValuePlayer,cardValuePlayer);
       cout <<"Deal no: " <<(deals + 1)<<endl;
       cout <<"Computer has "<< cardValue[cardValueComputer] << " of  "<< suitValue[suitValueComputer]<<endl;
       cout <<"Player has " << cardValue[cardValuePlayer] << " of  "<<suitValue[suitValuePlayer]<<endl;
       if(cardValueComputer > cardValuePlayer)
       {
           computerScore +=2;
       }
       else if(cardValueComputer < cardValuePlayer)
       {
           playerScore +=2;
       }
       else
       {
           ++computerScore;
           ++playerScore;
       }
        cout <<"Computer score is " << computerScore<<endl;
        cout <<"Player score is " << playerScore<<endl;
       ++deals;
       //system("pause");
       cout <<"\n";
   }
    //final outcome
    cout <<"Final Computer score is " << computerScore<<endl;
    cout <<"Final Player score is " << playerScore<<endl;
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
       c[x] = 0;

   }

}

