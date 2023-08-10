#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<math.h>

using namespace std;

class FractionClass2
{
    friend ostream& operator<<(ostream&, const FractionClass2&); //output or insertion operator
    friend istream& operator>>(istream&, FractionClass2&); //input or extraction operator

private:
    int wholeNumber;
    int numerator;
    int denominator;
    bool isNegative;
    int gcd(int m, int n);
    int gcdBruteForce(int m,int n);
    int lcdBruteForce(int m, int n);

public:
     FractionClass2(int=0,int=1);
     FractionClass2(int,int,int);
     static char slash;
     void enterFractionValue();
     void reduceFraction();
     void displayFraction(FractionClass2 f);
     int getWholeNumber();
     int getNumerator();
     int getDenominator();
     FractionClass2 operator+(FractionClass2);
     FractionClass2 operator-(FractionClass2);
     FractionClass2 operator*(FractionClass2);
     FractionClass2 operator/(FractionClass2);
     int operator==(const FractionClass2& fc);
     int operator<(const FractionClass2& fc);
     int operator>(const FractionClass2& fc);

};

FractionClass2::FractionClass2(int one,int two)
{
    wholeNumber = 0;
    numerator = one;
    denominator = two;
    if(denominator == 0)
    {
        denominator = 1;
    }
    isNegative = false;
}

FractionClass2::FractionClass2(int whole,int one,int two)
{
    wholeNumber= whole;
    numerator = one;
    denominator = two;
    if(denominator == 0)
    {
        denominator = 1;
    }
    isNegative = false;
}
char FractionClass2::slash = '/';

FractionClass2 FractionClass2::operator+(FractionClass2 f2)
{
    FractionClass2 temp;
    int divisor ;
    divisor = lcdBruteForce(denominator,f2.denominator);

    numerator = (denominator * wholeNumber) + numerator;
    f2.numerator = (f2.denominator * f2.wholeNumber) + f2.numerator;
    temp.numerator = (((divisor / denominator) * numerator) +
                     ((divisor / f2.denominator) * f2.numerator));
    temp.denominator = divisor;

     return temp;
}

FractionClass2 FractionClass2::operator-(FractionClass2 f2)
{
    FractionClass2 temp;
    int divisor ;
    divisor = lcdBruteForce(denominator,f2.denominator);

    numerator = (denominator * wholeNumber) + numerator;
    f2.numerator = (f2.denominator * f2.wholeNumber) + f2.numerator;
    temp.numerator = (((divisor / denominator) * numerator) -
                     ((divisor / f2.denominator) * f2.numerator));
    if(temp.numerator < 0)
    {
        temp.isNegative = true;
        temp.numerator = (((divisor / f2.denominator) * f2.numerator) -
                         ((divisor / denominator) * numerator));

    }
    temp.denominator = divisor;

     return temp;
}

FractionClass2 FractionClass2::operator*(FractionClass2 f2)
{
    FractionClass2 temp;
    numerator = (denominator * wholeNumber) + numerator;
    f2.numerator = (f2.denominator * f2.wholeNumber) + f2.numerator;
    temp.numerator = numerator * f2.numerator;
    temp.denominator = denominator * f2.denominator;

     return temp;
}

FractionClass2 FractionClass2::operator/(FractionClass2 f2)
{
    FractionClass2 temp;
    int denomTemp;
    int numTemp;

    numerator = (denominator * wholeNumber) + numerator;
    f2.numerator = (f2.denominator * f2.wholeNumber) + f2.numerator;

    //invert fraction two first
    denomTemp = f2.denominator;
    numTemp = f2.numerator;

    f2.numerator = denomTemp;
    f2.denominator = numTemp;

    temp.numerator = numerator * f2.numerator;
    temp.denominator = denominator * f2.denominator;

     return temp;
}

int FractionClass2::operator==(const FractionClass2& f2)
{
    int same = 0;
    if(numerator == f2.numerator && denominator == f2.denominator
       && wholeNumber == f2.wholeNumber)
    {
        same = 1;
    }

     return same;
}

int FractionClass2::operator<(const FractionClass2& f2)
{
    int smaller = 0;
    if(wholeNumber < f2.wholeNumber)
    {
        smaller = 1;
    }
    if(wholeNumber == f2.wholeNumber)
    {
        if(numerator < f2.numerator &&
           denominator < f2.denominator)
        {
            smaller = 1;
        }
    }
     return smaller;
}

int FractionClass2::operator>(const FractionClass2& f2)
{
    int bigger = 0;
    if(wholeNumber > f2.wholeNumber)
    {
        bigger = 1;
    }
    if(wholeNumber == f2.wholeNumber)
    {
        if(numerator > f2.numerator &&
           denominator > f2.denominator)
        {
            bigger = 1;
        }
    }
     return bigger;
}

int FractionClass2::getWholeNumber()
{
    return wholeNumber;
}

int FractionClass2::getNumerator()
{
    return numerator;
}

int FractionClass2::getDenominator()
{
    return denominator;
}

int FractionClass2::gcd(int m, int n)//euclidean algorithm
{
    int r = n % m;
    while(r != 0)
    {
        n = m;
        m = r;
        r = n % m;
    }
    return m;
}

int FractionClass2::gcdBruteForce(int m, int n)
{
    //assume m, n >= 1
    int last = min(m, n);
    int gcd;
    int i = 1;
    while (i <= last)
    {
       if (m % i == 0 && n % i == 0)
       {
            gcd = i;
       }
       i++;
    }
   return gcd;
}

int FractionClass2::lcdBruteForce(int m, int n)
{
    //assume m, n >= 1
    int small = min(m, n);
    int big = max(m,n);
    int lcd;

    if(big % small == 0)
    {
        lcd = big;
    }
    else
    {
        lcd = big * small;
    }

   return lcd;
}
void FractionClass2::enterFractionValue()
{
   cout << "Enter the numerator for the fraction >> ";
   cin >>numerator;
   this->numerator = numerator;
   while(numerator < 0)
   {
       cout << "Input is not a valid numerator" <<endl;
       cout << "Re-Enter the numerator for the fraction >> ";
       cin >>numerator;
   }
   this->numerator = numerator;

   cout << "Enter the denominator for the fraction >> ";
   cin >>denominator;
   this->denominator = denominator;
   while(denominator == 0 || denominator < 0)
   {
       cout << "Input is not a valid denominator" <<endl;
       cout << "Re-Enter the denominator for the fraction >> ";
       cin >>denominator;
   }
   this->denominator = denominator;

   cout << "Enter the whole number for the fraction >> ";
   cin >> wholeNumber;
   this->wholeNumber = wholeNumber;
   while(wholeNumber < 0)
   {
       cout <<"Input is not a valid whole number" <<endl;
       cout <<"Re-Enter whole number>> ";
       cin >>wholeNumber;
   }
    this->wholeNumber = wholeNumber;


}

void FractionClass2::reduceFraction()
{
   int commonDivisor;
   commonDivisor = gcd (numerator,denominator);
   numerator = numerator /commonDivisor;
   denominator = denominator /commonDivisor;

    if(numerator > denominator)
    {
       wholeNumber += numerator / denominator;
       numerator %= denominator;
    }
    if(numerator == denominator)
    {
        wholeNumber += numerator / denominator;
        numerator = 0;
        denominator = 0;

    }

}

void FractionClass2::displayFraction(FractionClass2 f)
{
    if(f.isNegative == true)
    {
         //do not display 0 whole number ,numerator or denominator
        if(wholeNumber == 0 )
        {
            cout <<"-"<< numerator << slash << denominator<<endl;
        }
        else if(numerator == 0 || denominator == 0)
        {
            cout <<"-"<< wholeNumber <<endl;
        }
        else
        {
            cout <<"-"<< wholeNumber <<" "<< numerator<<slash<< denominator<<endl;
        }
    }
    else
    {
         //do not display 0 whole number ,numerator or denominator
        if(wholeNumber == 0 )
        {
            cout <<numerator << slash <<denominator<<endl;
        }
        else if(numerator == 0 || denominator == 0)
        {
            cout << wholeNumber <<endl;
        }
        else
        {
           cout <<wholeNumber <<" "<<numerator<<slash<<denominator<<endl;
        }
    }

}
int main()
{
     /*
     FractionClass2 fc1(4);
     fc1.reduceFraction();
     fc1.displayFraction(fc1);

     FractionClass2 fc2(0,2,4);
     fc2.reduceFraction();
     fc2.displayFraction(fc2);

     FractionClass2 fc3(3,10,2);
     fc3.reduceFraction();
     fc3.displayFraction(fc3);
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     FractionClass2 add;

     one.enterFractionValue();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Sum of the fractions is"<<endl;
     cout<<"************************"<<endl;

     add = one + two;
     add.reduceFraction();
     add.displayFraction(add);
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     FractionClass2 subtract;

     one.enterFractionValue();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Subtracting the fractions yields"<<endl;
     cout <<"********************************"<<endl;

     subtract = one - two;
     subtract.reduceFraction();
     subtract.displayFraction(subtract);
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     FractionClass2 multiply;

     one.enterFractionValue();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Multiplying the fractions yields"<<endl;
     cout <<"********************************"<<endl;

     multiply = one * two;
     multiply.reduceFraction();
     multiply.displayFraction(multiply);
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     FractionClass2 divide;

     one.enterFractionValue();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Dividing the fractions yields"<<endl;
     cout <<"********************************"<<endl;

     divide = one / two;
     divide.reduceFraction();
     divide.displayFraction(divide);
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     int equalfractions;

     one.enterFractionValue();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Testing fraction equality yields"<<endl;
     cout <<"********************************"<<endl;

     equalfractions = (one == two);
     if(equalfractions)
     {
         cout <<"Fractions are equal"<<endl;
     }
     else
     {
         cout <<"Fractions are not equal"<<endl;
     }
     */

    /*
     FractionClass2 one;
     FractionClass2 two;
     int biggerfraction;

     one.enterFractionValue();
     one.reduceFraction();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.reduceFraction();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"Overloaded > operator:"<<endl;
     cout <<"**********************"<<endl;

     biggerfraction = (one > two);
     if(biggerfraction)
     {
         cout <<"Fraction one is bigger than Fraction two"<<endl;
     }
     else
     {
         cout <<"Fraction one is smaller than Fraction two"<<endl;
     }
     */

     /*
     FractionClass2 one;
     FractionClass2 two;
     int smallerfraction;

     one.enterFractionValue();
     one.reduceFraction();
     one.displayFraction(one);

     cout << "\n";

     two.enterFractionValue();
     two.reduceFraction();
     two.displayFraction(two);

     cout <<"\n";

     cout <<"overloaded < operator:"<<endl;
     cout <<"***********************"<<endl;

     smallerfraction = (one < two);

     if(smallerfraction)
     {
         cout <<"Fraction one is smaller than Fraction two"<<endl;
     }
     else
     {
         cout <<"Fraction one is bigger than Fraction two"<<endl;
     }
     */

     /*
     const int DIVISOR = 5;
     const int NUM = 10;
     int x,y,i;
     int result;
     int fractionNumerator[NUM];
     int fractionDenominator[NUM];
     FractionClass2 f[NUM];
     srand((unsigned)time(NULL));

     //assign numerator
     for(x = 0; x < NUM;++x)
     {
         result = 1 +  (rand() % DIVISOR);
         fractionNumerator[x] = result;
         result = 0;
     }

     //assign denominator
     for(y = 0; y < NUM;++y)
     {
         fractionDenominator[y] = 10;

     }

     //make complete fraction
     for(i = 0; i < NUM;++i)
     {
         f[i] = FractionClass2(fractionNumerator[i],fractionDenominator[i]);

     }

     //reduce and display fractions
     for(x = 0; x < NUM;++x)
     {
         cout <<"Fraction " << (x+1) << " is:"<<endl;
         cout <<"****************"<<endl;
         f[x].displayFraction(f[x]);

         cout<<"\nAfter reducing:"<<endl;
         cout <<"****************"<<endl;
         f[x].reduceFraction();
         f[x].displayFraction(f[x]);
         cout <<"\n";
     }
     */

     const int DIVISOR = 5;
     const int NUM = 10;
     int x,y,i;
     int result;
     int choice;
     int fractionNumerator[NUM];
     int fractionDenominator[NUM];
     FractionClass2 f[NUM];
     FractionClass2 one;
     FractionClass2 two;
     FractionClass2 three;
     FractionClass2 four;
     FractionClass2 five;
     srand((unsigned)time(NULL));

     //assign numerator
     for(x = 0; x < NUM;++x)
     {
         result = 1 +  (rand() % DIVISOR);
         fractionNumerator[x] = result;
         result = 0;
     }

     //assign denominator
     for(y = 0; y < NUM;++y)
     {
         fractionDenominator[y] = 10;

     }

     //make complete fraction
     for(i = 0; i < NUM;++i)
     {
         f[i] = FractionClass2(fractionNumerator[i],fractionDenominator[i]);

     }


     cout <<"Choose 1 for addition"<<endl;
     cout <<"Choose 2 for subtraction"<<endl;
     cout <<"Choose 3 for multiplication"<<endl;
     cout <<"Choose 4 for division"<<endl;
     cin >> choice;
     while(choice < 1 || choice > 4)
     {
         cout <<"Enter choice 1,2,3 or 4: ";
         cin >> choice;
     }

     switch(choice)
     {
         case 1:
             one = f[1] + f[2];
             two = f[3] + f[4];
             three = f[5] + f[6];
             four = f[7] + f[8];
             five = f[9] + f[10];

             one.reduceFraction();
             one.displayFraction(one);
             two.reduceFraction();
             two.displayFraction(two);
             three.reduceFraction();
             three.displayFraction(three);
             four.reduceFraction();
             four.displayFraction(four);
             five.reduceFraction();
             five.displayFraction(five);
             break;

         case 2:
            one = f[1] - f[2];
             two = f[3] - f[4];
             three = f[5] - f[6];
             four = f[7] - f[8];
             five = f[9] - f[10];

             one.reduceFraction();
             one.displayFraction(one);
             two.reduceFraction();
             two.displayFraction(two);
             three.reduceFraction();
             three.displayFraction(three);
             four.reduceFraction();
             four.displayFraction(four);
             five.reduceFraction();
             five.displayFraction(five);
             break;

         case 3:
             one = f[1] * f[2];
             two = f[3] * f[4];
             three = f[5] * f[6];
             four = f[7] * f[8];
             five = f[9] * f[10];

             one.reduceFraction();
             one.displayFraction(one);
             two.reduceFraction();
             two.displayFraction(two);
             three.reduceFraction();
             three.displayFraction(three);
             four.reduceFraction();
             four.displayFraction(four);
             five.reduceFraction();
             five.displayFraction(five);
             break;

         case 4:
             one = f[1] / f[2];
             two = f[3] / f[4];
             three = f[5] / f[6];
             four = f[7] / f[8];
             five = f[9] / f[10];

             one.reduceFraction();
             one.displayFraction(one);
             two.reduceFraction();
             two.displayFraction(two);
             three.reduceFraction();
             three.displayFraction(three);
             four.reduceFraction();
             four.displayFraction(four);
             five.reduceFraction();
             five.displayFraction(five);
            break;





     }
    return 0;
}
