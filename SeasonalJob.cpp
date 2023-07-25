#include<iostream>

using namespace std;

int main()
{
    int age;
    int workExperience;
    int weightLifted;
    int wordsTypedPerMinute;
    bool criteria1;
    bool criteria2;

    cout << "Enter applicant's age: ";
    cin >> age;
    cout << "\nEnter applicant's work experience: ";
    cin >> workExperience;
    cout << "\nEnter weight applicant can lift: ";
    cin >> weightLifted;
    cout << "\nEnter number of words applicant can type in a minute: ";
    cin >> wordsTypedPerMinute;

    criteria1 = (age >= 16 && workExperience == 2);
    criteria2 = (weightLifted >= 40 || wordsTypedPerMinute == 50);

    if(criteria1 && criteria2)
       cout << "The applicant was successful.";
    else
        cout << "The applicant was not successful.";

    return 0 ;



}
