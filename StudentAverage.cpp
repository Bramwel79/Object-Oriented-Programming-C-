#include<iostream>

using namespace std;

void getNumberOfTests();
void getTestScores();
void calculateAverageScore(int tests,int scores[]);

int testNos;
const int SIZE = 5;
int testScores[SIZE];

int main()
{
    getNumberOfTests();
    getTestScores();
    calculateAverageScore(testNos,testScores);

    return 0;
}
void getNumberOfTests()
{
    cout <<"Enter number of tests taken so far: ";
    cin >>testNos;
    while(testNos < 1 || testNos > 5)
    {
        cout <<"Re-Enter number of tests taken so far: ";
        cin >>testNos;
    }

}

void getTestScores()
{
    int score;

    for(int x = 0; x< testNos;++x)
    {
        cout <<"Enter Score for Test " <<(x +1)<<": ";
        cin >> score;
        testScores[x]= score;
    }

    cout <<"**********************************"<<endl;
    //display scores
    for(int y = 0; y< testNos;++y)
    {
        cout <<"Score for Test " <<(y +1) << " is "<<testScores[y]<<endl;
    }
    cout <<"**********************************"<<endl;

}
void calculateAverageScore(int tests,int scores[])
{
    int totalScore = 0;
    int average = 0;
    for(int x = 0; x< tests;++x)
    {
        totalScore += scores[x];

    }
    average = totalScore / tests;

    cout <<"The average score is " <<average;

}

