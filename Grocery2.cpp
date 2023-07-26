#include<iostream>

using namespace std;
const int SIZE = 10;

class Grocery
{
private:
    int itemStockNo;
    int price;
    int stockQuantity;
    int totalValue;
    void setItemStockNo();
    void setPrice();
    void setQuantity();
    void calculateGroceryTotal();
public:
    void dataEntry();
    void displayGroceryItems();


};
void Grocery::dataEntry()
{
   setItemStockNo();
   setPrice();
   setQuantity();
   calculateGroceryTotal();
}
void Grocery:: setItemStockNo()
{
    int itemNo;
    cout <<"Enter item stock number between 1000 and 9999: ";
    cin >> itemNo;
    while(itemNo < 1000 || itemNo > 9999)
    {
       cout <<"Enter item stock number between 1000 and 9999: ";
       cin >> itemNo;
    }
    itemStockNo = itemNo;
}
void Grocery::setPrice()
{
    int p;
    cout << "Enter price of item.Postive value only: ";
    cin >> p;
    while(p <=0)
    {
       cout << "Enter price of item,.Positive value only: ";
       cin >> p;
    }
    price = p;
}
void Grocery::setQuantity()
{
    int quantity;
    cout << "Enter stock quantity of item.Postive value only: ";
    cin >> quantity;
    while(quantity <= 0)
    {
       cout << "Enter stock quantity of item.Postive value only: ";
       cin >> quantity;
    }
    stockQuantity = quantity;

}
void Grocery::calculateGroceryTotal()
{
    int total = price * stockQuantity;
    totalValue = total;
}
void Grocery::displayGroceryItems()
{
    cout <<"\nGrocery item data"<<endl;
    cout <<"********************"<<endl;
    cout <<"Item stock number is "<<itemStockNo<<endl;
    cout <<"Price is "<<price<<endl;
    cout <<"Stock quantity is "<<stockQuantity<<endl;
    cout <<"Total value is "<<totalValue<<endl;
}

int main()
{
    Grocery grocery[SIZE];
    for(int x = 0; x< SIZE;++x)
    {
        cout <<"Grocery Item " <<(x+1)<<endl;
        cout <<"_____________"<<endl;
        grocery[x].dataEntry();
        grocery[x].displayGroceryItems();
        cout <<"\n";
    }


    return 0;
}
