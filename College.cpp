#include<iostream>

using namespace std;

struct College
{
    int collegeFoundingYear;
    int currentStudentPopulation;
    double annualTuition;
};

int main ()
{
    College egerton;
    cout << "When was Egerton founded ";
    cin >>egerton.collegeFoundingYear;
    cout <<"\nWhat is the current Student Population ";
    cin >>egerton.currentStudentPopulation;
    cout << "\nHow much is the annual Tuition ";
    cin >>egerton.annualTuition;
    cout << "**********************************\n";
    cout << "College founding year was ";
    cout <<egerton.collegeFoundingYear;
    cout << "\nCurrent student population is ";
    cout <<egerton.currentStudentPopulation;
    cout << "\nThe annual tuition is ";
    cout <<egerton.annualTuition <<endl;
    return 0;

}
