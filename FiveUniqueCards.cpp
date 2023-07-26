#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;
const int SUIT_MAX = 4;
const int VALUES = 14;

class PlayingCard
{
private:
    int value;
    string sValue;
    int suit;
    string sSuit;

public:
    PlayingCard(int,string,int ,string);
};

PlayingCard::PlayingCard(int value,string sValue,int suit, string sSuit)
{
    this->value = value;
    this->sValue = sValue;
    this->suit = suit;
    this->sSuit = sSuit;
}

class Hand
{
private:
   // PlayingCard pc1[5];

public:
   // Hand(PlayingCard c[]);
   Hand();


};

Hand::Hand()
{

   string suits[] = {"spades","hearts","diamonds","clubs"};
   string valArray[] = {"", "Ace", "2", "3", "4", "5", "6", "7", "8",
	   "9", "10", "Jack", "Queen", "King"};
   srand((unsigned)time(NULL));
   for(int x = 0; x < 2;++x)
   {

       int result = rand() % SUIT_MAX;
       int suitNo = result +1;
       string suitName = suits[result];
       cout<<suitNo<<" : " <<suitName<<endl;

       int result2 = rand() % VALUES;
       int valNo = result2;
       string valName = valArray[result2];
       cout <<valNo <<" : " <<valName<<endl;
       PlayingCard pc(valNo,valName,suitNo,suitName);
       valNo = 0;
       valName = "";
       suitNo = 0;
       suitName = "";
   }
}
int main()
{
  Hand hand;

    return 0;
}
