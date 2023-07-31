#include<iostream>

using namespace std;

class Meal
{
    friend ostream& operator<<(ostream&, const Meal&); //output or insertion operator
    friend istream& operator>>(istream&, Meal&); //input or extraction operator

   private:
     string entree;
     int calories;

   public:
    Meal(string="Entree",int=0);
    Meal operator+(Meal);

};

Meal::Meal(string e, int c)
{
    entree = e;
    calories = c;
}
ostream& operator<<(ostream& out,const Meal& meal)
{
    out << "Entree is "<<meal.entree <<endl<<
    "Calories is "<<meal.calories <<endl;
    return out;

}

istream& operator>>(istream& in,Meal& meal)
{
    cout << endl; // to clear the buffer
    cout << "Enter entree: ";
    in >>meal.entree;
    cout <<"Enter calories: ";
    in >>meal.calories;
    cout<<endl;
    return in;

}

Meal Meal::operator+(Meal meal)
{
    Meal temp;
    temp.calories = calories + meal.calories;
    temp.entree = "Daily Total";
    return temp;
}

int main()
{
    Meal breakfast("Bacon",14);
    Meal lunch("Fish",12);
    Meal dinner("Spaghetti",10);
    Meal total;
    total = breakfast + lunch + dinner;
    cout << total;

    cout<<"\nExpected results"<<endl;
    cout<<"******************"<<endl;
    cout<<"Total entree is Daily Total"<<endl;
    cout<<"Total calories is 36"<<endl;

}
