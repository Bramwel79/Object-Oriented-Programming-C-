#include<iostream>
#include<string>
#include<stdexcept>
#include "TelevisionException.cpp"


using namespace std;


class Television
{
    friend ostream& operator<<(ostream&, const Television&); //output or insertion operator
    friend istream& operator>>(istream&, Television&);
           //input or extraction operator
private:
  int modelNo;
  int screenSize;
  int price;

public:
   void setModelNo(int);
   void setScreenSize(int);
   void setPrice(int);

};

void Television::setModelNo(int m)
{
    modelNo = m;
}

void Television::setPrice(int p)
{
    price = p;
}

void Television::setScreenSize(int z)
{

    screenSize = z;
}
ostream& operator<<(ostream& out, const Television& tv)
{
   out << "Model Number: " <<tv.modelNo << " "
          "Screen Size: " << tv.screenSize << " "
          "Price: "<< tv.price << endl;
   return out ;
}

istream& operator>>(istream& in, Television &tv)

{
    cout << endl; // to clear the buffer
    cout << "Enter model number of television ";
    in >> tv.modelNo;
    if(tv.modelNo > 9999)
    {
        TelevisionException t("Number is 5 digits");
        throw t;
    }
    cout << "Enter screen size ";
    in >> tv.screenSize;
    if(tv.screenSize < 12 || tv.screenSize > 70)
    {
        TelevisionException t("screen size not within range");
        throw t;
    }
    cout << "Enter price of television ";
    in >> tv.price;
    if(tv.price < 0 || tv.price > 5000)
    {
        TelevisionException t("price not within range");
        throw t;
    }

    return in;
}

int main()
{
    Television te;
    try
    {
          cin >> te;

    }

    catch(TelevisionException e)
    {
        cout << "Error message: " << e.what() << endl;
        te.setModelNo(0);
        te.setPrice(0);
        te.setScreenSize(0);

    }
    cout << te;
    return 0;
}
