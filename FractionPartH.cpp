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

     FractionClass2 fc1(1,10);
     FractionClass2 fc2(3,10);
     FractionClass2 result(2,5);
     int upper;
     int lower;
     int x;
     int success = 0;
     int failure = 0;

     cout <<"What is " <<fc1.getNumerator() << " / " <<
                         fc1.getDenominator() << " + " <<
                         fc2.getNumerator() << " / " <<
                         fc2.getDenominator() << " ? "<<endl;
     cout <<"You have 3 attempts\nSimplify your answer i.e fraction be in proper format"<<endl;
     cout <<"\n"<<endl;

     for(x = 0; x < 3;++x)
     {
         cout <<"Enter numerator: ";
         cin >> upper;

         cout <<"Enter denominator: ";
         cin >> lower;

         if((upper == result.getNumerator()) &&
         (lower == result.getDenominator()))
        {
            ++success;
            cout <<"Correct!"<<endl;
            cout <<"You got " << success << " out of " << 1 <<endl;
            return 0;
        }
        else
        {
            ++failure;
            cout <<"Not correct"<<endl;
        }

     }


  cout <<"You got " << success << " out of " << 1 <<endl;
    return 0;
}
