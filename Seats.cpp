#include<iostream>

using namespace std;
const int SENTINEL  = 999;
const double SEAT_PRICE = 7.50;
const int SEAT_CAPACITY = 800;

int main()
{
  int seatOrder[20][40];
  bool seatsStatus[20][40] = {false};
  int row ;
  int seat;
  double total = 0;
  int seatsTaken = 0;
  int seatsAvailable = SEAT_CAPACITY;

  //get correct input
          cout <<"Enter row or 999 to quit application: ";
          cin >> row;
  while(row != SENTINEL)
  {
          while(row < 0 || row > 19 && (row != SENTINEL))
          {
              cout << "Enter a number between 1 and 20"<<endl;
              cout <<"Enter row: ";
              cin >> row;
          }
          cout << "Enter seat: ";
          cin >> seat;
          while(seat < 0 || seat > 39 && (seat != SENTINEL))
          {
             cout << "Enter a number between 1 and 40"<<endl;
             cout << "Enter seat: ";
             cin >> seat;
          }

          //process input
          if(seatsStatus[row-1][seat-1] == false)
          {
              total += SEAT_PRICE;
              ++seatsTaken;
              --seatsAvailable;
              seatsStatus[row-1][seat-1]= true;
          }
          cout <<"Enter row or 999 to quit application: ";
          cin >> row;
  }
  //display status of seats
  cout <<endl;
  cout <<"Total of seat purchase is $ " <<total<<endl;
  cout <<"Seats taken = " <<seatsTaken <<endl;
  cout <<"Seats available = " <<seatsAvailable<<endl;
    return 0;
}

