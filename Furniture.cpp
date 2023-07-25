#include<iostream>

using namespace std;

int main()
{
    char choice;
    int tablePrice = 0;
    int totalPrice = 0;
    int oakCount = 0;
    int cherryCount = 0;
    int pineCount = 0;
    int mahoganyCount = 0;
    const int OAK_TABLE_COST = 1500;
    const int CHERRY_TABLE_COST = 1700;
    const int PINE_TABLE_COST = 800;
    const int MAHOGANY_TABLE_COST = 2000;
    const char O = 'o';
    const char C = 'c';
    const char P = 'p';
    const char M = 'm';
    const char SENTINEL = 'z';

    string answer = "The Table costs ";
    cout << "************Norm's Furniture Shop****************";
    cout << "\nChoose o for oak , c for cherry, p for pine , m for mahogany or z to quit: ";
    cin >> choice;

    if(!(choice == O || choice == C || choice == P ||
                 choice == M ))
    {
                cout << "Your choice was invalid."<<endl;

    }


    while ( choice != SENTINEL)
    {

        if(choice == O)
        {
            tablePrice = OAK_TABLE_COST;
            cout << answer << " $ " << tablePrice;
            totalPrice += tablePrice;
            ++oakCount;
        }
        if(choice == C)
        {
             tablePrice = CHERRY_TABLE_COST;
             cout << answer << " $ " <<tablePrice;
             totalPrice += tablePrice;
             ++cherryCount;
        }
        if(choice == P)
        {
             tablePrice = PINE_TABLE_COST;
             cout << answer << " $ " << tablePrice;
             totalPrice += tablePrice;
             ++pineCount;
        }
        if(choice == M)
        {
             tablePrice = MAHOGANY_TABLE_COST;
             cout << answer << " $ " << tablePrice;
             totalPrice += tablePrice;
             ++mahoganyCount;
        }

        cout << "\nChoose o for oak , c for cherry, p for pine , m for mahogany or z to quit: ";
        cin >> choice;

    }

    cout << "Oak table count is " << oakCount <<endl;
    cout << "Cherry table count is "<<cherryCount <<endl;
    cout << "Pine table count is "<< pineCount<<endl;
    cout << "Mahogany table count is " << mahoganyCount<<endl;
    cout << "Total Table cost is " << totalPrice <<endl;
    return 0;
}
