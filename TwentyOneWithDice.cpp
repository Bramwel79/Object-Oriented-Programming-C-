#include<iostream>
#include<ctime>
#include<cstdlib>

const int TIMES = 21;

using namespace std;

class Die
{
   private:
       int sideValue;
       static int maximum_die_value;
   public:
       void setSideValue(int value);
       int getSideValue();

};

int Die::maximum_die_value = 6;

void Die:: setSideValue(int value)
 {
     sideValue = value;
 }

 int Die::getSideValue()
 {
     return sideValue;
 }

int main()
{
    const int DIVISOR = 6;
    int result;
    int result2;
    srand((unsigned)time(NULL));


    Die die;
    int playerTotal = 0;
    int compTotal = 0;
    int x;
    while(playerTotal < TIMES)
    {

        result = 1 + (rand() % DIVISOR);
        playerTotal += result;

        result2 = 1 + (rand() % DIVISOR);
        compTotal += result2;
        if(compTotal >= 19)
        {
            cout <<"Computer total is equal to or greater than 19. Exiting...."<<endl;
            exit(0);
        }
    }
    cout <<"Player total is "<<playerTotal<<endl;
    cout <<"Computer total is "<<compTotal<<endl;

    if(playerTotal == 19 || playerTotal == 20 ||
       playerTotal == 21)
    {
        cout <<"Winner is player"<<endl;
    }


    return 0;
}
