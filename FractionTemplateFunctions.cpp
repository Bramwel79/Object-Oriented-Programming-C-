#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<math.h>
#include<iomanip>
#include "FractionClass2.cpp"

using namespace std;
template <class T>
T problem(T one,char c,T two)
{
    T question;
    cout << one << " " << c << " "<< two << " = ";
    cin >> question;
    return question;

}

template <class T>
T solution(T one,char c,T two)
{
    T ans;
    if(c == '+')
    {
        ans = one + two;
    }
    if(c == '-')
    {
        ans = one - two;
    }
    if(c == '*')
    {
        ans = one * two;
    }
    if(c == '/')
    {
        ans = one / two;
    }

    return ans;

}
template <class T>
T congrats(T correct)
{
    string space = " ";
    int x;
    int y;
    for(x = 0; x < 10; ++x)
    {
       for(y = 0 ;y < x ;++y)
       {
          cout << space;
       }
        cout << correct<< " Congratulations! Correct Answer!"<<endl;
    }
}



int main()
{
     /*
     int one = 12;
     int two = 17;
     int three = 9;
     int userAnswer;
     int intAnswer;
     userAnswer = problem(one,'-',two);
     intAnswer = solution(one,'-',two);
     if(userAnswer == intAnswer) //-5
     {
         congrats(userAnswer);
     }
     */

     /*
     int one = 22;
     int two = 37;
     int three = 9;
     int userAnswer;
     int intAnswer;
     userAnswer = problem(one,'*',two);
     intAnswer = solution(one,'*',two);
     if(userAnswer == intAnswer) //814
     {
         congrats(userAnswer);
     }
     */

     /*
     char c  = '0';
     char d = '1';
     char answer;
     char compAns;
     answer = problem(c,'+',d);
     compAns = solution(c,'+',d); //a
     if(answer == compAns)
     {
         congrats(answer);
     }
     */

     /*
     float userAnswerf;
     float floatAnswer;
     float onef = 45.15;
     float twof = 2.50;
     float threef = 100.50;
     userAnswerf = problem(threef,'/',twof);
     floatAnswer = solution(threef,'/',twof); //40.2
     if(userAnswerf == floatAnswer)
     {
         congrats(userAnswerf);
     }
     */

     /*
     FractionClass2 frac1(3,4,5);
     FractionClass2 frac2(6,1,5);
     FractionClass2 fracAns;
     FractionClass2 user;
     user = problem(frac1,'+',frac2);
     fracAns = solution(frac1,'+',frac2);
     if(user == fracAns) // 0 50 5
     {
         congrats(user);
     }
     */

     /*
     int one = 22;
     int two = 37;
     int three = 9;
     int userAnswer;
     int intAnswer;
     char r;

     cout<<"Choose an answer from the following"<<endl;
     cout << 'a' << " : " << 512 <<endl;
     cout << 'b' << " : " << 814 <<endl;
     cout << 'c' << " : " << 235 <<endl;
     cout <<"\n";
     userAnswer = problem(one,'*',two);
     cout <<"Enter answer character: ";
     cin >> r;
     intAnswer = solution(one,'*',two);

     if(r == 'b'&& userAnswer == intAnswer) //814
     {
         congrats(userAnswer);
     }
     else
     {
         cout <<"Your response is incorrect"<<endl;
     }
     */

     /*
     int one = 22;
     int two = 37;
     int three = 9;
     int userAnswer;
     int intAnswer;
     char r;

     cout<<"Choose an answer from the following"<<endl;
     cout << 't' << " : " << 59 <<endl;
     cout << 't' << " : " << 95 <<endl;
     cout << 'f' << " : " << 55 <<endl;
     cout <<"\n";
     userAnswer = problem(one,'+',two);
     cout <<"Is answer true or false: ";
     cin >> r;
     intAnswer = solution(one,'+',two);

     if(r == 't' && userAnswer == intAnswer) //814
     {
         congrats(userAnswer);
     }
     else
     {
         cout <<"Your response is incorrect"<<endl;
     }
     */

    return 0;
}
