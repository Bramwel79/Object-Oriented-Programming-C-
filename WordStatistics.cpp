#include<iostream>

using namespace std;

int main()
{
    const char SENTINEL = '*';
    const int SUBSCRIPT = 15;
    char wordArray[SUBSCRIPT];
    char wordCharacter;
    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';
    int vowelsCount = 0;
    int consonantsCount = 0;
    int x = 0;
    int y = 0;

    cout << "Enter character " << (x+1) << " or '*' to quit: ";
    cin  >> wordCharacter;

    while( x <= SUBSCRIPT && wordCharacter != SENTINEL)
    {
        wordArray[x] = wordCharacter;
        ++x;
        cout << "Enter character " << (x+1) << " or '*' to quit: ";
        cin  >> wordCharacter;
    }
    for(y = 0 ;y < SUBSCRIPT;++y)
    {
        if(wordArray[y] == a || wordArray[y] == e ||
           wordArray[y] == i || wordArray[y] == o ||
           wordArray[y] == u )
        {
            ++vowelsCount;
        }
        else
        {
           ++consonantsCount;
        }
    }
    int letterCount = vowelsCount + consonantsCount;
    cout << "Letter count is " << letterCount <<endl;
    cout << "Vowels count is " << vowelsCount <<endl;
    cout << "Consonants count is " << consonantsCount <<endl;

    return 0;
}
