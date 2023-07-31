#include<iostream>

using namespace std;
const int SIZE = 5;
const int SENTINEL = 0;

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

    int x = 0;
    int i,j;
    int day;
    int no;
    double amt;

    Salesperson persons[SIZE]= {Salesperson(100,"David"),
                                Salesperson(101,"Kayla"),
                                Salesperson(102,"Tom"),
                                Salesperson(103,"Susan"),
                                Salesperson(104,"Maureen")};

        cout <<"Enter details for Sales Person or 0 to quit: "<<endl;
        cout <<"Enter id number: ";
        cin >> no;
        while(no != SENTINEL)
        {
            if(no != persons[0].getIdNumber() && no != persons[1].getIdNumber() &&
               no != persons[2].getIdNumber() && no != persons[3].getIdNumber() &&
               no != persons[4].getIdNumber())
            {
                cout <<"Sales person with number " << no << " does not exist."<<endl;
                return(1);
            }

            cout <<"Enter day of month: ";
            cin >> day;
            cout <<"Enter amount of sale: ";
            cin >> amt;

            Sale s(day,amt,no);

            cout <<"\n*****Sales Details***************"<<endl;
            displayData(s,persons[x]);
            cout <<"\n*********************************"<<endl;
            ++x;
            cout <<"Enter details for Sales Person or 0 to quit: "<<endl;
            cout <<"Enter id number: ";
            cin >> no;
        }

    return 0;
}
