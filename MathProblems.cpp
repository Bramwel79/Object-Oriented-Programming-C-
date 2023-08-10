#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<math.h>


#include "MathProblem.cpp"
#define MAXIMUM 5



int main()
{
     const int DIVISOR = 5;
     const int DIVISOR2 = 10;
     int x,y,i,j;
     int result;
     int result2;
     double correctAnswers = 0;
     int fractionNumerator[MAXIMUM];
     int fractionDenominator[MAXIMUM];
     MathProblem mathProblem[MAXIMUM];
     FractionClass fractions[MAXIMUM];

     srand((unsigned)time(NULL));

     //assign numerator
     for(x = 0; x < MAXIMUM;++x)
     {
         result = 1 +  (rand() % DIVISOR);
         fractionNumerator[x] = result;
         result = 0;
     }

     //assign denominator
     for(y = 0; y < MAXIMUM;++y)
     {
         result2 = 1 +  (rand() % DIVISOR2);
         fractionDenominator[y] = result2;
         result2 = 0;

     }

     //make complete fraction
     for(i = 0; i < MAXIMUM;++i)
     {
       fractions[i] = FractionClass(fractionNumerator[i],
                                    fractionDenominator[i]);

     }

     //display fractions
     cout << "The random fractions are:"<<endl;
     cout <<"**************************"<<endl;
     for(i = 0; i < MAXIMUM;++i)
     {
         fractions[i].displayFraction(fractions[i]);
     }

     //set problem,display problem and ask for user response
     for(x = 0; x < MAXIMUM;++x)
     {
         mathProblem[x].setProblem(fractions[x],fractions[x],'+');
         mathProblem[x].displayProblem(fractions[x],fractions[x],'+');
         mathProblem[x].askUserForAnswer();
         correctAnswers = mathProblem[x].getCorrectAnswerCount();

     }


    //summary of results
     cout <<"\n\nTotal number of questions = " << MAXIMUM<<endl;
     cout << "Correct answers = " << correctAnswers<<endl;
     cout <<"Wrong answers = " <<MAXIMUM - correctAnswers<<endl;
     double percent = ((correctAnswers / MAXIMUM) * 100);
     cout <<"You scored " << percent << "%"<<endl;





    return 0;
}
