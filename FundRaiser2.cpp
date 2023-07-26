#include<iostream>
#include<iomanip>
#include<time.h>

const int ROWS = 4;
const int SENTINEL = 999;
const int COLUMNS = 1;




void DisplayData();


using namespace std;

int main()
{
    clock_t start = 0;
    clock_t end = 0;
    double cpu_time = 0.00;
    start = clock();
    string classes[ROWS] = {"Freshman","Sophomore","Junior","Senior"};
    int fundRaiser[ROWS][COLUMNS];
    int classType;
    int contribution = 0;



    DisplayData();

    for(int x = 0;x < ROWS;++x)
    {
      for(int y = 0 ; y < COLUMNS ; ++y)
       {
            fundRaiser[x][y]= 0;
       }

    }

    cout << "Enter class type between 1 and 4 or 999 to quit program: ";
    cin >> classType;
    while ((classType > ROWS) && classType != SENTINEL)
    {
        cout << "Re-Enter class type between 1 and 4 or 999 to quit program: ";
        cin >> classType;
    }
    while(classType != SENTINEL )
    {
       cout << "Enter contribution amount: ";
       cin >> contribution;
       int index = classType - 1;
       fundRaiser[index][0] = contribution;
       cout << "Enter class type between 1 and 4 or 999 to quit program: ";
       cin >> classType;

   }

    cout <<"\n";
    cout <<"The contributions are as follows:"<<endl;

        for (int x = 0;x < ROWS;++x)
        {
           for(int y = 0; y < COLUMNS;++y)
           {
             cout << (x+1)<< ":"<< classes[x] << " = ";
             cout << fundRaiser[x][y] << " ";
             cout <<"\n";

           }


        }

    end = clock();
    cpu_time = (double)((end - start) / CLOCKS_PER_SEC);
    cout << "Application processed in " <<cpu_time << " seconds."<<endl;
    return 0;

}

void DisplayData()
 {
        cout <<"Addison High School";
        cout <<"\n*******************"<<endl;
        cout <<"Class Types are as follows "<<endl;
        cout <<" 1: Freshman "<<endl;
        cout <<" 2: Sophomore "<<endl;
        cout <<" 3: Junior "<<endl;
        cout <<" 4: Senior " <<endl;
 }





