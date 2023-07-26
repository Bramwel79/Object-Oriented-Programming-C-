#include<iostream>

using namespace std;

class TaxReturn
{
private:
    int taxIdNumber;
    string lastName;
    string firstName;
    double annualIncome;
    double dependants;
    double taxOwed;

public:
    static double RATE1;
    static  double RATE2;
    static  double RATE3;
    static  double RATE4;
    static  double RATE5;
    static  double RATE6;
    static  double RATE7;
    static  double RATE8;
    static  double RATE9;
    static  double RATE10;
    static  double RATE11;
    static  double RATE12;
    static  string taxTable();

};

double TaxReturn::RATE1 = 0.10;
double TaxReturn::RATE2 = 0.08;
double TaxReturn::RATE3 = 0.07;
double TaxReturn::RATE4 = 0.12;
double TaxReturn::RATE5 = 0.11;
double TaxReturn::RATE6 = 0.09;
double TaxReturn::RATE7 = 0.18;
double TaxReturn::RATE8 = 0.15;
double TaxReturn::RATE9 = 0.13;
double TaxReturn::RATE10 = 0.25;
double TaxReturn::RATE11 = 0.22;
double TaxReturn::RATE12 = 0.19;

string TaxReturn::taxTable()
{
  cout<<"                     dependants                                "<<endl;
  cout<<"Income($)      0           1          2 or more             "<<endl;
  cout<<"_______________________________________________________________"<<endl;
  cout<<"0-10,000      "<<RATE1<<"          "<<RATE2<<"      "<<RATE3               <<endl;
  cout<<"10,001-30,000 "<<RATE4<<"         "<<RATE5<<"      "<<RATE6               <<endl;
  cout<<"30,001-60,000 "<<RATE7<<"         "<<RATE8<<"      "<<RATE9               <<endl;
  cout<<"60,001 and up "<<RATE10<<"         "<<RATE11<<"      "<<RATE12              <<endl;


}


int main()
{

   TaxReturn::taxTable();

    return 0;
}
