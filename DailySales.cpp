#include<iostream>
#include<iomanip>
#include<climits>


using namespace std;

int main()
{
    const int VALUES = 7;
    double storeSales[VALUES];
    string daysOfWeek[VALUES] = {"Monday",
                            "Tuesday",
                            "Wednesday",
                            "Thursday",
                            "Friday",
                            "Saturday",
                            "Sunday"
                            };
    double sales;
    int x;
    int y;
    double minimum = INT_MAX;
    double maximum = INT_MIN ;

    //get values from client
    for(x = 0;x< VALUES;++x)
    {
        cout << "Enter sales for "<<daysOfWeek[x] << ": " ;
        cin >> sales;
        storeSales[x] = sales;
        if(sales < minimum)
        {
            minimum = sales;

        }
        if (sales > maximum)
        {
            maximum = sales;
        }


    }
     cout <<"\n";
     cout << "The sales are:\n";
    //display values
    for(x = 0 ;x < VALUES; ++x)
    {
      cout << daysOfWeek[x] << " : " << storeSales[x]<<endl;
    }
        cout << "\n";
        cout << "\nThe minimum sale is " << minimum <<endl;
        cout << "\nThe maximum sale is " << maximum << endl;



    return 0;
}
