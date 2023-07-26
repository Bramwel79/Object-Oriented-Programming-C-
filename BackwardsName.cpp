#include<iostream>

using namespace std;

int main()
{
    const int SUBSCRIPT = 8;
    const char SENTINEL = 'o';
    char myName[SUBSCRIPT];
    char nameCharacters;
    int x = 0;
    int y = 0;


    cout << "Enter your name characters or 'o' to quit: ";
    cin  >> nameCharacters;

    while(nameCharacters != SENTINEL)
    {
        myName[x] = nameCharacters;
        ++x;
        cout << "Enter your name characters or 'o' to quit: ";
        cin  >> nameCharacters;

    }
    for(y = SUBSCRIPT -1;y >= 0 ;--y )
    {
        cout << myName[y] << " ";
    }


    return 0;
}
