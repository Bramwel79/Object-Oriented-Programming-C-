#include<iostream>
#include<string>
#include<vector>
#include "ArcadePlayer.cpp"
using namespace std;

int main ()
{
    vector<ArcadePlayer>myVector;
    int x;
    int position;
    ArcadePlayer ac;
    const char QUIT = 'n';
    char quitChar;
    cout << "Do you want to enter data? y or n:  ";
    cin >> quitChar;
    while(quitChar != QUIT)
    {
        cout <<"Enter data:"<<endl;
        cin >> ac;
        ac.calculatePlayerScore();
        myVector.push_back(ac);
        cout << "Do you want to enter a value? y or n ";
        cin >> quitChar;
    }
    sort(myVector.begin(), myVector.end());
    cout << "Size of the list is " << myVector.size() << endl;
    cout << "The list: " << endl;
    for(x = 0; x < myVector.size(); ++x)
    {
        cout << myVector[x];
    }

    cout << "Enter a position to display ";
    cin >> position;
    cout << "The item at position " << position << " is: ";
    cout << myVector.at(position) << endl;
    return 0;
}
