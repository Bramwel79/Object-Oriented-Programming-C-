#include<iostream>
#define SIZE 10

using namespace std;

class PhoneCall
{
    friend ostream& operator<<(ostream&, const PhoneCall&); //output or insertion operator
    friend istream& operator>>(istream&, PhoneCall&); //input or extraction operator
private:
    int phoneNo;
    int callLength; //in minutes
    double ratePerMinute;

public:
    int operator==(const PhoneCall& pc);

};
int PhoneCall::operator==(const PhoneCall& pc)
{
    int ans = 0;
    if(phoneNo == pc.phoneNo)
    {
        ans = 1;
    }
    return ans;
}

ostream& operator<<(ostream& out,const PhoneCall& phoneCall)
{
    out << "Phone number is "<<phoneCall.phoneNo <<endl<<
    "Call length in minutes is "<<phoneCall.callLength <<endl<<
    "Rate per minute is "<<phoneCall.ratePerMinute<<endl;
    return out;

}

istream& operator>>(istream& in,PhoneCall& phoneCall)
{
    cout << endl; // to clear the buffer
    cout << "Enter phone number: ";
    in >>phoneCall.phoneNo;
    cout <<"Enter call length in minutes: ";
    in >>phoneCall.callLength;
    cout <<"Enter rate per minute: ";
    in >>phoneCall.ratePerMinute;
    cout<<endl;
    return in;

}
int main()
{
     PhoneCall pc[SIZE];
     PhoneCall temp;
     int i ,j;

     //enter first call
     cout <<"Enter first phone entry"<<endl;
     cin >> pc[0];

     //enter remaining data
     cout<<"Enter remaining entries"<<endl;

     for(i = 1; i < SIZE;++i)
     {
        cin >> temp;
        for(j = 0; j <= i;++j)
        {
            while(pc[j] == temp)
            {
                cout <<"Phone entry exists...Re-enter"<<endl;
                cin >> temp;
            }

        }
       pc[i] = temp;
     }

      //display phone entries
     cout <<"****Displaying Phone Entries********\n"<<endl;
     for(i = 0; i < SIZE;++i)
     {
         cout << pc[i];
         cout <<"\n"<<endl;
     }

     return 0;
}
