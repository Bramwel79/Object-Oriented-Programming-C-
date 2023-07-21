#include<iostream>

using namespace std;

struct PhoneCall
{
     int callMinutes;
};

int main()
{
    const int COST_PER_MINUTE = 10;
    PhoneCall myCallToGrandmaOnSunday ;
    myCallToGrandmaOnSunday.callMinutes = 33;
    cout << "The call lasted " <<myCallToGrandmaOnSunday.callMinutes << " minutes";
    cout << "\nThe call cost " << myCallToGrandmaOnSunday.callMinutes * COST_PER_MINUTE << " cents";
    return 0;
}
