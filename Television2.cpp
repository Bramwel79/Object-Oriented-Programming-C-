#include<iostream>
#include<string>
#include<stdexcept>
#include "TelevisionException.cpp"
#define ARRAY_SIZE 5

using namespace std;


class Television2
{
    friend ostream& operator<<(ostream&, const Television2&); //output or insertion operator
    friend istream& operator>>(istream&, Television2&);
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

void Television2::setModelNo(int m)
{
    modelNo = m;
}

void Television2::setPrice(int p)
{
    price = p;
}

void Television2::setScreenSize(int z)
{

    screenSize = z;
}
ostream& operator<<(ostream& out, const Television2& tv)
{
   out << "Model Number: " <<tv.modelNo << " "
          "Screen Size: " << tv.screenSize << " "
          "Price: "<< tv.price << endl;
   return out ;
}

istream& operator>>(istream& in, Television2 &tv)

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
    Television2 te[ARRAY_SIZE];
    int x;
    for(x = 0; x < ARRAY_SIZE;++x)
    {
        try
        {
            cin >> te[x];

        }

        catch(TelevisionException e)
        {
            cout << "Error message: " << e.what() << endl;
            --x;


        }
    }

    cout <<"\n"<<endl;

    for(x = 0; x < ARRAY_SIZE;++x)
    {
        cout << (x+1) << " : " << te[x];
    }

    return 0;
}
