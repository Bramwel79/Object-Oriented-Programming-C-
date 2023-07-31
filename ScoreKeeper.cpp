#include<iostream>

using namespace std;

class ScoreKeeper
{
    friend ostream& operator<<(ostream&, const ScoreKeeper&); //output or insertion operator

private:
   string courseName;
   int scores;
   int *scorePtr;

public:
    ScoreKeeper(string,int);
    ~ScoreKeeper();
    ScoreKeeper& operator=(ScoreKeeper&);


};
ScoreKeeper::ScoreKeeper(string name,int mark)
{
   courseName = name;
   scores = mark;
   scorePtr = new int[scores];
   int x ;
   int score;
   for(x = 0; x < scores;++x)
   {
       cout <<"Enter individual score (0 to 100): ";
       cin >> score;
       while(score < 0 || score > 100)
       {
           cout <<"Re-enter individual score (0 to 100): ";
           cin >> score;
       }
       scorePtr[x] = score;
   }


}
ScoreKeeper::~ScoreKeeper()
{
    delete [] scorePtr;
}
ScoreKeeper& ScoreKeeper::operator=(ScoreKeeper& sk)
{
    int x ;
    courseName = sk.courseName;
    scores = sk.scores;
    delete [] scorePtr;
    scorePtr = new int[scores];
    for(x = 0; x < sk.scores;++x)
    {
        scorePtr[x] = sk.scorePtr[x];
    }
    return *this;
}
ostream& operator<<(ostream& out,const ScoreKeeper& storeKeeper)
{
    int x;
    out << "\nCourse Name is "<<storeKeeper.courseName<<endl<<
    "Number of score items is  "<<storeKeeper.scores<<endl;
    for(x = 0; x < storeKeeper.scores;++x)
    {
        cout <<storeKeeper.scorePtr[x]<<endl;
    }
    return out;

}

int main()
{
     cout<<"Enter scores for course"<<endl;
     ScoreKeeper semester1("Computer science",2);
     {
         cout<<"\nEnter scores for course"<<endl;
         ScoreKeeper semester2("Biological science",2);
         cout << endl << "Computer science before change:" << endl;
         cout << semester1;
         cout << endl << "Biological science before change:" <<endl;
         cout << semester2;
         semester1 = semester2;
         cout << endl << "Computer science after change:" <<endl;
         cout << semester1;
     }
     cout << endl <<"After Computer science has gone out of scope:" <<endl;
     cout << semester1;

    return 0;
}
