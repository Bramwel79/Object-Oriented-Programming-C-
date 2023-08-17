#include<iostream>
#include<string>
#include<stdexcept>
#define ARRAY_SIZE 5


using namespace std;


class Inventory
{
    friend ostream& operator<<(ostream&, const Inventory&); //output or insertion operator
    friend istream& operator>>(istream&, Inventory&);
           //input or extraction operator

private:
  int stockNo;
  int quantity;
  double price;

public:
   void setStockNo(int);
   void setQuantity(int);
   void setPrice(double);


};

void Inventory::setStockNo(int m)
{
    stockNo = m;
}

void Inventory::setPrice(double p)
{
    price = p;
}

void Inventory::setQuantity(int z)
{

    quantity = z;
}
ostream& operator<<(ostream& out, const Inventory& iv)
{
   out << "Stock Number: " <<iv.stockNo << " "
          "Quantity: " << iv.quantity << " "
          "Price: "<< iv.price << endl;
   return out ;
}

istream& operator>>(istream& in, Inventory &iv)

{
    const string MSG = "Number is negative or greater than 999";
    cout << endl; // to clear the buffer
    cout << "Enter stock number ";
    in >> iv.stockNo;
    if(iv.stockNo < 0 || iv.stockNo > 999)
    {
        throw(MSG);

    }
    cout << "Enter quantity ";
    in >> iv.quantity;
    if(iv.quantity < 0)
    {
        throw(iv.quantity);

    }
    cout << "Enter price ";
    in >> iv.price;
    if(iv.price > 100.00)
    {
        throw(iv.price);

    }

    return in;
}

int main()
{
    Inventory iv[ARRAY_SIZE];
    int x;
    for(x = 0; x < ARRAY_SIZE;++x)
    {
       try
            {
                  cin >> iv[x];

            }

            catch(string msg)
            {
                cout << "Error message was thrown"<< endl;
                cout << msg << endl;
                iv[x].setPrice(0);
                iv[x].setQuantity(0);
                iv[x].setStockNo(0);
                cout <<"\n";
                cout << iv[x];
            }
            catch(int s)
            {
                cout << "Error message was thrown"<< endl;
                cout << "Quantity entered " << s << " is less than 0"<<endl;
                iv[x].setPrice(0);
                iv[x].setQuantity(0);
                iv[x].setStockNo(0);
                cout <<"\n";
                cout << iv[x];
            }
            catch(double d)
            {
                cout << "Error message was thrown"<< endl;
                cout << "Price entered " << d << " is over 100.00"<<endl;
                iv[x].setPrice(0);
                iv[x].setQuantity(0);
                iv[x].setStockNo(0);
                cout <<"\n";
                cout << iv[x];
            }
    }

    cout <<"\n"<<endl;

    for(x = 0; x < ARRAY_SIZE;++x)
    {
        cout << (x+1) << " : " << iv[x];
    }

    return 0;
}
