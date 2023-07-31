#include<iostream>
#define SIZE 11

using namespace std;

class SoccerPlayer
{
    friend ostream& operator<<(ostream&, const SoccerPlayer&); //output or insertion operator
    friend istream& operator>>(istream&, SoccerPlayer&); //input or extraction operator
private:
    int jerseyNumber;
    int numberOfGoals;
    int numberOfAssists;

public:
    int operator>(const SoccerPlayer& scp);

};

int SoccerPlayer::operator>(const SoccerPlayer& scp)
{
    int greatest = 0;
    int total = numberOfAssists + numberOfGoals;
    if(total > (scp.numberOfAssists + scp.numberOfGoals))
    {
        greatest = 1;
    }

    return greatest;
}
ostream& operator<<(ostream& out,const SoccerPlayer& soccerPlayer)
{
    out << "Player Jersey Number is "<<soccerPlayer.jerseyNumber <<endl<<
    "Number of goals is "<<soccerPlayer.numberOfGoals <<endl<<
    "Number of assists is "<<soccerPlayer.numberOfAssists<<endl;
    return out;

}

istream& operator>>(istream& in,SoccerPlayer& soccerPlayer)
{
    cout << endl; // to clear the buffer
    cout << "Enter player jersey number: ";
    in >>soccerPlayer.jerseyNumber;
    cout <<"Enter number of goals: ";
    in >>soccerPlayer.numberOfGoals;
    cout <<"Enter number of assists: ";
    in >>soccerPlayer.numberOfAssists;
    cout<<endl;
    return in;

}

int main()
{
    SoccerPlayer sc[SIZE];
    SoccerPlayer best;
    int i;
    int j;

    //fill array
    for(i = 0; i < SIZE;++i)
    {
        cin >> sc[i];
    }


    //display array
    cout<<"Displaying soccer player data"<<endl;
    cout<<"**************************************************"<<endl;
    for(i = 0; i < SIZE;++i)
    {
        cout << sc[i];
        cout <<"\n"<<endl;
    }

    //find greatest totals of goals plus assists
    best = sc[0];
    for(i = 1; i < SIZE;++i)
    {
         if(sc[i] > best)
         {
             best = sc[i];
         }

    }

    cout<<"Player with greatest total of goals and assists is"<<endl;
    cout<<"**************************************************"<<endl;
    cout<< best;

    return 0;
}
