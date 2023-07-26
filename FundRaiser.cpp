#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int SUBSCRIPT = 4;
    double contributionAmount[SUBSCRIPT];
    string classes[4] = {"Freshman",
                         "Sophomore",
                         "Junior",
                         "Senior"
                        };
    double amount ;
    double sum = 0;
    double average = 0;
    int x;

    cout << "Audubon High School Fundraiser" << endl;
    cout << "______________________________" << endl;
    cout << "\n";
    //get input form client
    for(x = 0; x < SUBSCRIPT;++x)
    {
        cout << "Enter contribution amount for " << classes[x] <<": ";
        cin >> amount;
        contributionAmount[x] = amount;
        sum += amount;
    }

      average = sum / SUBSCRIPT; //calculate average
    //display values
       cout <<"\nThe contributions are: " <<endl;
       cout <<"***********************" <<endl;
    for(x = 0;x < SUBSCRIPT;++x)
    {
        cout <<fixed<<setprecision(2) <<classes[x] << " : " << contributionAmount[x] << "\n";

    }
     //display sum and average
     cout <<"\n";
     cout <<fixed<<setprecision(2)<<"\nThe sum of contributions is " << sum;
     cout <<fixed<<setprecision(2)<<"\nThe average of contributions is " << average;
    return 0;

}
