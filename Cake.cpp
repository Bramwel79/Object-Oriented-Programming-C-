#include<iostream>

using namespace std;

struct Cake
{
    double cakePrice;
    double calorieCakeCount;
};

int main()
{
    Cake blackForest;
    cout << "Enter the Price of the Cake ";
    cin >> blackForest.cakePrice;
    cout << "Enter the Calorie Count ";
    cin >> blackForest.calorieCakeCount;

    cout << "The price is " << blackForest.cakePrice;
    cout <<"\nThe Calorie count is " << blackForest.calorieCakeCount;
    return 0;
}
