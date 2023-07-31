#include<iostream>

using namespace std;
class Salesperson;

class Sale
{
    friend void display(Sale,Salesperson);
private:
    int dayOfMonth;
    double saleAmount;
    int idNumber;
public:
    Sale(int,double,int);
    int getDayOfMonth();
    double getSaleAmount();
    int getIdNumber();

};

Sale::Sale(int month,double sales,int id)
{
    dayOfMonth = month;
    saleAmount = sales;
    idNumber = id;
}

int Sale::getDayOfMonth()
{
    return dayOfMonth;
}

double Sale::getSaleAmount()
{
    return saleAmount;
}

int Sale::getIdNumber()
{
    return idNumber;
}


class Salesperson
{
private:
    int idNumber;
    string lastName;

public:
    Salesperson(int,string);
    int getIdNumber();
    string getLastName();
};

Salesperson::Salesperson(int no, string name)
{
    idNumber = no;
    lastName = name;
}
int Salesperson::getIdNumber()
{
    return idNumber;
}

string Salesperson::getLastName()
{
    return lastName;
}
void displayData(Sale s, Salesperson p)
{
    cout<<"Date of sale: "<<s.getDayOfMonth()<<endl;
    cout<<"Amount of sale: "<<s.getSaleAmount()<<endl;
    cout<<"Sales person Id Number: "<<p.getIdNumber()<<endl;
    cout<<"Sales person Name: "<<p.getLastName()<<endl;

}


int main()
{
    Sale sale(10,12.52,401);
    Salesperson person(401,"Dick");
    displayData(sale,person);


    return 0;
}
