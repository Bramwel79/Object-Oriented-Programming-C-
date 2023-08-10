#include<iostream>

#include "FractionClass.cpp"

using namespace std;

class MathProblem : public FractionClass
{
private:
    FractionClass firstOperand;
    FractionClass secondOperand;
    FractionClass userResponse;
    FractionClass correctResponse;
    char operatorCh;
    bool isAnswerCorrect;


public:
    void setProblem(FractionClass, FractionClass, char);
    void displayProblem(FractionClass , FractionClass,char );
    void askUserForAnswer();
    int getCorrectAnswerCount();
    static int answerCount;
};

int MathProblem::answerCount = 0;

int MathProblem::getCorrectAnswerCount()
{
    return answerCount;

}
void MathProblem::askUserForAnswer()
{
    cout <<"\nEnter your response"<<endl;
    cout <<"********************"<<endl;
    userResponse.enterFractionValue();

    //display student's answer
    cout <<"Student's response : " <<endl;
    userResponse.displayFraction(userResponse);

    //display correct answer
    cout <<"Correct response : " << endl;
    correctResponse.displayFraction(correctResponse);

    if(userResponse == correctResponse)
    {
        isAnswerCorrect = true;
        ++answerCount;
        cout <<"Answer is correct";
    }
    else
    {
        isAnswerCorrect = false;
        cout <<"Answer is wrong";
    }


}

void MathProblem::displayProblem(FractionClass one,FractionClass two,char c)
{
    cout <<"\n\nThe question is"<<endl;
    cout <<"****************"<<endl;
    one.displayFraction(one);
    cout << c <<endl;
    two.displayFraction(two);

}

void MathProblem::setProblem(FractionClass one, FractionClass two, char c)
{
    switch(c)
    {
    case '+':
        correctResponse = one + two;
        break;
    case '-':
        correctResponse = one - two;
        break;
    case '*':
        correctResponse = one * two;
        break;
    case '/':
        correctResponse = one / two;
        break;
    }

    userResponse = 0;
    isAnswerCorrect = false;
}


/* //a
int main()
{
    FractionClass firstOperand;
    FractionClass secondOperand;
    FractionClass userResponse;
    FractionClass correctResponse;
    char operatorCh = '+';
    bool isAnswerCorrect = false;

    //get first operand
    cout <<"Enter first fraction values"<<endl;
    cout <<"***************************"<<endl;
    firstOperand.enterFractionValue();

    //get second operand
    cout <<"\nEnter second fraction values"<<endl;
    cout <<"***************************"<<endl;
    secondOperand.enterFractionValue();

    //ask question
    cout <<"\nThe question is"<<endl;
    cout <<"****************"<<endl;
    firstOperand.displayFraction(firstOperand);
    cout << operatorCh <<endl;
    secondOperand.displayFraction(secondOperand);

    //get client response
    cout <<"\nEnter your response"<<endl;
    cout <<"********************"<<endl;
    userResponse.enterFractionValue();
    userResponse.reduceFraction();

    //get correct response
    correctResponse = firstOperand + secondOperand;
    correctResponse.reduceFraction();

    //return results
    if(userResponse == correctResponse)
    {
        isAnswerCorrect = true;
    }

    cout << "\nAnswer is " << (isAnswerCorrect? "correct": "not correct");

}
*/
