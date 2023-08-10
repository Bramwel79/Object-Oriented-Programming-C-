#include<iostream>
#include<ctime>
#include<cstdlib>
#include "RaceCar.cpp"

using namespace std;

int main()
{
    Car aCar;
    RaceCar aRaceCar;
    const int RACE_LENGTH = 500;
    const int DIVISOR = 200;
    int result;
    int result2;
    srand((unsigned)time(NULL));

    aCar.setCarNumber("Schumacher");
    aRaceCar.setCarNumber("Dillon");
    aCar.turnIgnitionOn();
    aRaceCar.turnIgnitionOn();

    while(aCar.getMilesTravelled() < RACE_LENGTH &&
          aRaceCar.getMilesTravelled() < RACE_LENGTH)
    {
        result =  1 + rand() % DIVISOR;
        aCar.setSpeed(result);
        aCar.addMilesTravelledInLastHour();
        result2 =  1 + rand() % DIVISOR;
        aRaceCar.setSpeed(result);
        aRaceCar.addMilesTravelledInLastHour();
    }

    //display miles travelled
    cout <<"Car object has travelled " <<aCar.getMilesTravelled()<< " miles" <<endl;
    cout <<"RaceCar object has travelled " <<aRaceCar.getMilesTravelled()<< " miles" <<endl;

    if(aCar.getMilesTravelled() > aRaceCar.getMilesTravelled())
    {
        cout <<"Winner is Car."<<endl;
    }
    else
    {
        cout <<"Winner is RaceCar."<<endl;
    }

  return 0;
}
