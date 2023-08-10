#include<iostream>
#include<ctime>
#include<cstdlib>
#include "RaceCar.cpp"

using namespace std;

int main()
{
    RaceCar aCar;
    RaceCar aRaceCar;
    const int RACE_LENGTH = 500;
    const int DIVISOR = 50; //for car
    const int DIVISOR2 = 100;  //for race car
    int result;
    int result2;
    srand((unsigned)time(NULL));
    int cash = 100;
    int bet;
    string choice;
    string winner;

    cout <<"Enter bet amount ";
    cin >> bet;
    while (bet <= 0 )
    {
        cout <<"Enter a positive bet amount ";
        cin >> bet;
    }

    aCar.setCarNumber("Schumacher");
    aRaceCar.setCarNumber("Dillon");

    while(bet > 0)
    {
        cout <<"Who will win between Schumacher and Dillon?"<<endl;
        cin >> choice;

        aCar.turnIgnitionOn();
        aRaceCar.turnIgnitionOn();

        while(aCar.getMilesTravelled() < RACE_LENGTH &&
              aRaceCar.getMilesTravelled() < RACE_LENGTH)
        {
            result =  1 + rand() % DIVISOR;
            aCar.setSpeed(result);
            aCar.addMilesTravelledInLastHour();
            result2 =  1 + rand() % DIVISOR2;
            aRaceCar.setSpeed(result);
            aRaceCar.addMilesTravelledInLastHour();
        }

        if(aCar.getMilesTravelled() > aRaceCar.getMilesTravelled())
        {
            winner = "Schumacher";
        }
        else if(aCar.getMilesTravelled() < aRaceCar.getMilesTravelled())
        {
            winner = "Dillon";
        }
        else
        {
           winner = "Tie";
        }

        if(choice == winner)
        {
            cash += bet;

        }
        else
        {
            cash -= bet;
        }
        cout <<"Enter bet amount ";
        cin >> bet;
   }
   cout <<"**********************************"<<endl;
   cout <<"Your final cash value is " << cash<<endl;
   cout <<"**********************************"<<endl;

  return 0;
}
