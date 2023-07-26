#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
    const int VALUES = 12;
    double storeSales[VALUES];
    string monthsOfYear[VALUES] = {"January",
                                  "February",
                                  "March",
                                  "April",
                                  "May",
                                  "June",
                                  "July",
                                  "August",
                                  "September",
                                  "October",
                                  "November",
                                  "December"
                            };
    double sales;
    int x;
    double average = 0;
    double total = 0;


    //get values from client
    for(x = 0;x< VALUES;++x)
    {
        cout << "Enter sales for "<<monthsOfYear[x] << ": " ;
        cin >> sales;
        storeSales[x] = sales;
        total +=storeSales[x];


    }
      //display total and average values
       cout <<fixed<<setprecision(2)<<"\nTotal sales are " << total;
       average = total / VALUES;
       cout <<fixed<<setprecision(2)<<"\nThe average sale is " << average;
       cout <<"\n*********************" <<endl;

    //display values
    for(x = 0 ;x < VALUES; ++x)
    {

        cout <<fixed<<setprecision(2)<< "Month of " << monthsOfYear[x] << " sales were " << storeSales[x];
        if(storeSales[x] == average)
        {
           cout <<"     :The sale was equal to years average" <<endl;
        }
        else
        if(storeSales[x] < average)
        {
           cout <<"     :The sale was lower than years average" <<endl;
        }
        else
            if(storeSales[x] > average)
        {
           cout <<"     :The sale was higher than years average" <<endl;
        }


    }



    return 0;
}

