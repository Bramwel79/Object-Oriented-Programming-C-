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
        result2 =  1 + rand() % DIVISOR2;
        aRaceCar.setSpeed(result);
        aRaceCar.addMilesTravelledInLastHour();
    }

    //display miles travelled
    cout <<"RaceCar object has travelled " <<aCar.getMilesTravelled()<< " miles" <<endl;
    cout <<"RaceCar object has travelled " <<aRaceCar.getMilesTravelled()<< " miles" <<endl;

    if(aCar.getMilesTravelled() > aRaceCar.getMilesTravelled())
    {
        cout <<"Winner is Car."<<endl;
    }
    else if(aCar.getMilesTravelled() < aRaceCar.getMilesTravelled())
    {
        cout <<"Winner is RaceCar."<<endl;
    }
    else
    {
        cout <<"It is a tie."<<endl;
    }
  return 0;
}
