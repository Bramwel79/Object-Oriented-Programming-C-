#include<iostream>
#include<string>
#include<stdexcept>
//#include "OutOfRangeException2.cpp"
//#include "Meal.cpp"
#include "EntertainmentAct.cpp"

#define MIN3 2
#define MAX3 1000

#define MIN 5.00
#define MAX 29.99

#define ARRAY_SIZE 5

using namespace std;

class Meal
{
    friend ostream& operator<<(ostream&, const Meal&); //output or insertion operator
    friend istream& operator>>(istream&, Meal&);
           //input or extraction operator

private:
  string entreeName;
  double price;

public:
   double getMealPrice();

};

double Meal::getMealPrice()
{
    return price;
}

ostream& operator<<(ostream& out, const Meal& m)
{
   out << "Entree Name: " << m.entreeName << " "
          "Price: "<< m.price << endl;
   return out ;
}

istream& operator>>(istream& in, Meal &m)
{
    cout << endl; // to clear the buffer
    cout << "Enter entree name ";
    in >> m.entreeName;
    cout << "Enter price ";
    in >> m.price;
    double p = m.price;
    if(m.price < MIN || m.price > MAX)
    {
        OutOfRangeException2 m(MIN,MAX,p);
        throw m;
    }

    return in;
}


class Party
{
    friend ostream& operator<<(ostream&, const Party&); //output or insertion operator
    friend istream& operator>>(istream&, Party&);
           //input or extraction operator

private:
  Meal meal;
  EntertainmentAct ec;
  int numberOfGuests;
  double cost;


public:


};

ostream& operator<<(ostream& out, const Party& p)
{
   Meal meal;
   EntertainmentAct ec;
   out << meal <<endl;
   out << ec << endl;
   out << "Number of guests: " << p.numberOfGuests << " "
          "Cost of party: "<< p.cost << endl;
   return out ;
}

istream& operator>>(istream& in, Party &p)
{
    Meal meal;
    EntertainmentAct ec;
    cout << endl; // to clear the buffer
    in >> meal;
    in >> ec;
    cout << "Enter number of guests ";
    in >> p.numberOfGuests;
    if(p.numberOfGuests < MIN3 || p.numberOfGuests > MAX3)
    {
        OutOfRangeException2 pa(MIN3,MAX3,p.numberOfGuests);
        throw pa;
    }
    p.cost = (meal.getMealPrice() * p.numberOfGuests) + ec.getFee();

    return in;
}

int main()
{
    Party one[ARRAY_SIZE];
    int x;
    for(x = 0; x < ARRAY_SIZE;++x)
    {
        try
        {
           cin >> one[x];
        }

        catch(OutOfRangeException2 o)
        {
            cout << "Error ocurred " << o.what()<<endl;
            cout << "Lower limit = " << o.getLow()<<endl;
            cout << "Upper limit = " << o.getHigh()<<endl;
            cout << "Figure entered = " << o.getValue()<<endl;
            cin >> one[x];
        }
    }


    return 0;
}

