#include<iostream>

using namespace std;

class RealtorCommission
{
private:
    double houseSalePrice;
    double salesCommRate;
    double commission;

public:
    RealtorCommission(double salePrice,double rate);
    RealtorCommission(int salePrice,int rate);
    double getHouseSalePrice();
    double getSalesCommRate();
    double getCommission();
    void displayDetails();

};

RealtorCommission::RealtorCommission(double salePrice,double rate)
{
    houseSalePrice = salePrice;
    salesCommRate = rate;
    commission = houseSalePrice * salesCommRate;
}

RealtorCommission::RealtorCommission(int salePrice,int rate)
{
    houseSalePrice = salePrice;
    salesCommRate = rate;
    commission = ((houseSalePrice * salesCommRate) / 100);
}

double RealtorCommission::getCommission()
{
    return commission;
}

double RealtorCommission::getHouseSalePrice()
{
    return houseSalePrice;
}

double RealtorCommission::getSalesCommRate()
{
    return salesCommRate;
}

void RealtorCommission::displayDetails()
{
    cout <<"House Sale Price = " << getHouseSalePrice()<<endl;
    cout <<"Sales Commission Rate = " <<getSalesCommRate()<<endl;
    cout <<"Commission Value = " <<getCommission()<<endl;
}

int main()
{
    RealtorCommission rc1(500.00,0.09);
    RealtorCommission rc2(500, 9);
    rc1.displayDetails();
    cout <<"***********************\n"<<endl;
    rc2.displayDetails();


    return 0;
}
