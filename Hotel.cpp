#include<iostream>

using namespace std;

int main()
{
    int roomType;
    int floorDesired;
    int numberOfNights;
    double nightlyRate;
    double totalPrice;

    cout << "Carlington Hotel";
    cout << "\n****************";
    cout << "\nChoose room type as follows:\n";
    cout << "1 for single room,2 for double and 3 for suite" <<endl;
    cout << "\nEnter type of room: ";
    cin >> roomType;
    cout << "\nEnter desired floor: ";
    cin >> floorDesired;
    cout << "\nEnter number of nights guest will stay: " ;
    cin >> numberOfNights;

    //single room
    if(roomType == 1)
    {
       if(floorDesired >= 1 && floorDesired <= 5)
       {
          nightlyRate = 45.00;
          if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;
       }
       else
        if(floorDesired >= 6 && floorDesired <= 11)
       {
           nightlyRate = 55.00;
           if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;

       }
       else
        if(floorDesired >= 12)
       {
           cout << "Room not available." << endl;
           nightlyRate = 0.00;
           totalPrice = nightlyRate * numberOfNights;
       }
       else
        cout << "Floor choice is invalid." <<endl;
    }
    else
        //double room
        if(roomType == 2)
    {
         if(floorDesired >= 1 && floorDesired <= 5)
       {
          nightlyRate = 60.00;
          if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;
       }
       else
        if(floorDesired >= 6 && floorDesired <= 11)
       {
           nightlyRate = 72.00;
           if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;

       }
       else
        if(floorDesired >= 12)
       {
            nightlyRate = 120.00;
           if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;
       }
       else
        cout << "Floor choice is invalid." <<endl;
    }
    else
    //suite
    if(roomType == 3)
    {
       if(floorDesired >= 1 && floorDesired <= 5)
       {
          nightlyRate = 130.00;
          if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;
       }
       else
        if(floorDesired >= 6 && floorDesired <= 11)
       {
           nightlyRate = 215.00;
           if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;

       }
       else
        if(floorDesired >= 12)
       {
            nightlyRate = 350.00;
           if(numberOfNights >= 4)
          {
             totalPrice = nightlyRate * numberOfNights * 0.9; //give 10% discount
          }
          else
            totalPrice = nightlyRate * numberOfNights ;
       }
       else
        cout << "Floor choice is invalid." <<endl;
    }
    else
    {
        cout << "Room choice " <<roomType << " is invalid." << endl;
        nightlyRate = 0.00;
        totalPrice = nightlyRate * numberOfNights;
    }


    //display data
    cout << "\nBilling Information:" <<endl;
    cout << "*************************************" << endl;
    cout << "Room type is " << roomType <<endl;
    cout << "Floor desired is " <<floorDesired << endl;
    cout << "Number of nights guest stayed is " << numberOfNights << endl;
    cout << "Nightly Price is " << nightlyRate << endl;
    cout << "***************************************" <<endl;
    cout << "Total Price for stay is " << totalPrice << endl;
    cout << "***************************************" <<endl;
    return 0;
}
