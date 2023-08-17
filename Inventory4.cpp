#include<iostream>
#include<string>
#include<stdexcept>
#define ARRAY_SIZE 5


using namespace std;


class Inventory4
{
    friend ostream& operator<<(ostream&, const Inventory4&); //output or insertion operator
    friend istream& operator>>(istream&, Inventory4&);
           //input or extraction operator

private:
  int stockNo;
  int quantity;
  double price;

public:
   void setStockNo(int);
   void setQuantity(int);
   void setPrice(double);
   int getQuantity();
   double getPrice();

};

double Inventory4::getPrice()
{
    double p;
    cout << "Enter price ";
    cin >> p;
    return p;
}

int Inventory4::getQuantity()
{
    int q;
    cout << "Enter quantity ";
    cin >> q;
    return q;
}


void Inventory4::setStockNo(int m)
{
    stockNo = m;
}

void Inventory4::setPrice(double p)
{
    price = p;
}

void Inventory4::setQuantity(int z)
{

    quantity = z;
}
ostream& operator<<(ostream& out, const Inventory4& iv)
{
   out << "Stock Number: " <<iv.stockNo << " "
          "Quantity: " << iv.quantity << " "
          "Price: "<< iv.price << endl;
   return out ;
}

istream& operator>>(istream& in, Inventory4 &iv)

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
    int correct = 0;
    Inventory4 iv[ARRAY_SIZE];
    int x;
    for(x = 0; x < ARRAY_SIZE;++x)
    {
       try
       {
           cin >> iv[x];
           ++correct;
       }

       catch(string msg)
       {
            cout << "Error message was thrown"<< endl;
            cout << msg << endl;
            /*iv[x].setStockNo(999);
            int quant;
            double cost;
            quant = iv[x].getQuantity();
            cost = iv[x].getPrice();
            iv[x].setPrice(cost);
            iv[x].setQuantity(quant);*/
            x = ARRAY_SIZE;

        }
        catch(int s)
        {
            cout << "Error message was thrown"<< endl;
            cout << "Quantity entered " << s << " is less than 0"<<endl;
            /*iv[x].setPrice(0);
            iv[x].setQuantity(0);
            iv[x].setStockNo(0);
            cout <<"\n";
            cout << iv[x];*/
            x = ARRAY_SIZE;
        }
        catch(double d)
        {
            cout << "Error message was thrown"<< endl;
            cout << "Price entered " << d << " is over 100.00"<<endl;
            /*iv[x].setPrice(99.99);*/
            x = ARRAY_SIZE;
        }
    }

    cout <<"\n"<<endl;

    for(x = 0; x < correct;++x)
    {
        cout << (x+1) << " : " << iv[x];
    }

    return 0;
}
