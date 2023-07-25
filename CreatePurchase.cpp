#include<iostream>

using namespace std;

struct Purchase
{
    int invoiceNumber;
    double salesAmount;
    double salesTax;

};
int main()
{
    const double SALES_TAX = 0.05;
    Purchase purchase;
    cout << "Enter Invoice Number: ";
    cin >> purchase.invoiceNumber;
    while(purchase.invoiceNumber < 1000 || purchase.invoiceNumber > 8000)
    {
        cout << "Enter Invoice Number: ";
        cin >> purchase.invoiceNumber;
    }
    cout << "Enter Sales Amount: ";
    cin >> purchase.salesAmount;
    while(purchase.salesAmount < 1)
    {
        cout << "Enter Sales Amount: ";
        cin >> purchase.salesAmount;
    }
    purchase.salesTax = purchase.salesAmount * SALES_TAX;
    cout << "*********************************\n";
    cout << "\nInvoice Number is " << purchase.invoiceNumber;
    cout << "\nSales Amount is " << purchase.salesAmount;
    cout << "\nSales Tax is " << purchase.salesTax;
    cout << "\n*********************************";
    return 0;
}
