#include<iostream>
#include<string>
#include<stdexcept>
//#include "NonIntegerException.cpp"
#include "OutOfRangeException.cpp"
#define FEE 250
#define ARRAY_SIZE 8

using namespace std;


class RealEstate
{
    friend ostream& operator<<(ostream&, const RealEstate&); //output or insertion operator
    friend istream& operator>>(istream&, RealEstate&);
           //input or extraction operator
private:
  int housePrice;
  int bedrooms;
  int baths;

public:


};

ostream& operator<<(ostream& out, const RealEstate& re)
{
   out << "House price: " <<re.housePrice << " "
          "Bedrooms: " << re.bedrooms << " "
          "Baths: "<< re.baths << endl;
   return out ;
}

istream& operator>>(istream& in, RealEstate &re)

{
    cout << endl; // to clear the buffer
    cout << "Enter price of house ";
    in >> re.housePrice;
    if(re.housePrice < 0)
    {
        OutOfRangeException a(1);
        throw a;
    }
    cout << "Enter number of bedrooms ";
    in >> re.bedrooms;
    if(re.bedrooms < 0)
    {
        OutOfRangeException b(2);
        throw b;
    }
    cout << "Enter number of bathroms ";
    in >> re.baths;
    if(re.baths < 0)
    {
        OutOfRangeException c(3);
        throw c;
    }

    return in;
}

int main()
{
    RealEstate re;
    try
    {
          cin >> re;

    }

   // catch(NonIntegerException e)
   // {
        //cout << "Error message is " << e.what() << endl;
    //}

    catch(OutOfRangeException e)
    {
        cout << "Error message is " << e.what() << endl;
        cout << "Error Value is " << e.getValue()<< endl;

    }
    cout <<"\n";
    cout << re;

    return 0;
}
