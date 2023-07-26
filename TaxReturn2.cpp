#include<iostream>

using namespace std;
const int SIZE = 2;
class TaxReturn
{
private:
    int taxIdNumber;
    string lastName;
    string firstName;
    double annualIncome;
    double dependants;
    double taxOwed;
    double calculateTax();

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
    void setAll(int id,string lName,string fName,double income,double dep);
    void display();



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

void TaxReturn::display()
{
    cout<<"Tax Id No: "<<taxIdNumber<<endl;
    cout <<"First Name: "<<firstName<<endl;
    cout <<"Last Name: "<<lastName<<endl;
    cout <<"Annual Income: "<<annualIncome<<endl;
    cout <<"Dependants: " <<dependants<<endl;
    cout <<"Tax Owed: " <<taxOwed<<endl;
}

void TaxReturn::setAll(int id,string lName,string fName,double income,double dep)
{
   taxIdNumber = id;
   lastName = lName;
   firstName = fName;
   annualIncome = income;
   dependants = dep;
   calculateTax();
}

double TaxReturn::calculateTax()
{

    if(annualIncome >= 0 && annualIncome <= 10000)
    {
       if(dependants == 0)
       {
           taxOwed= annualIncome * RATE1;
       }
       else if(dependants == 1)
       {
           taxOwed = annualIncome * RATE2;
       }
       else
       {
           taxOwed = annualIncome * RATE3;
       }

    }
    if(annualIncome >=10001 && annualIncome <= 30000)
    {
        if(dependants == 0)
       {
           taxOwed = annualIncome * RATE4;
       }
       else if(dependants == 1)
       {
           taxOwed = annualIncome * RATE5;
       }
       else
       {
           taxOwed = annualIncome * RATE6;
       }
    }
    if(annualIncome >= 30001 && annualIncome <= 60000)
    {
        if(dependants == 0)
       {
           taxOwed = annualIncome * RATE7;
       }
       else if(dependants == 1)
       {
           taxOwed = annualIncome * RATE8;
       }
       else
       {
           taxOwed = annualIncome * RATE9;
       }
    }
    if(annualIncome > 60000)
    {
        if(dependants == 0)
       {
           taxOwed = annualIncome * RATE10;
       }
       else if(dependants == 1)
       {
           taxOwed = annualIncome * RATE11;
       }
       else
       {
           taxOwed = annualIncome * RATE12;
       }

    }
}

int main()
{

   //TaxReturn::taxTable();
   int x;
   int no;
   string nameLast;
   string nameFirst;
   double inc;
   double dep;
   TaxReturn taxReturn[SIZE];
   //get data
   for(x = 0; x< SIZE;++x)
   {
       cout <<"Enter details for TaxReturn Object no: " <<(x+1)<<endl;
       cout <<"_______________________________________"<<endl;
       cout <<"Enter tax Id NO: ";
       cin >> no;
       cout <<"Enter First Name: ";
       cin >>nameFirst;
       cout <<"Enter Last Name: ";
       cin >>nameLast;
       cout <<"Enter annual income: ";
       cin >>inc;
       cout <<"Enter number of dependants: ";
       cin >>dep;
       cout<<"\n"<<endl;
       taxReturn[x].setAll(no,nameLast,nameFirst,inc,dep);

   }

   //display data
   cout<<"\n"<<endl;
   cout<<"The data is as follows:"<<endl;
   cout<<"***********************"<<endl;
   for(x = 0; x < SIZE;++x)
   {
      cout <<"Details for TaxReturn Object no: " <<(x+1)<<endl;
      taxReturn[x].display();
      cout <<"________________________"<<endl;
   }

    return 0;
}
