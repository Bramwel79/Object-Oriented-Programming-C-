#include<iostream>

using namespace std;


struct Fraction
{
    int numerator;
    int denominator;
    int wholeNumber;
};


Fraction enterFractionValue();
Fraction reduceFraction(Fraction f);
void displayFraction(Fraction f);

int main()
{
   Fraction original;
   Fraction reduced;
   //Fraction three;
   //float fractionOne;
   //float fractionTwo;
   //float fractionThree;
   //char arithmeticOperation;
   /*int maximum;
   int commonDivisor;
   int reducedNumeratorOne;
   int reducedNumeratorTwo;
   int reducedDenominatorOne;
   int reducedDenominatorTwo;*/

   cout << "Teacher's Pet Sofware"<<endl;
   cout << "*********************"<<endl;
   original  = enterFractionValue();
   reduced = reduceFraction(original);
   displayFraction(reduced);
   while(original.numerator != 0 && original.wholeNumber != 0)
   {
       original  = enterFractionValue();
       reduced = reduceFraction(original);
       displayFraction(reduced);


   }


   /*
   //fraction two
   cout << "\n******************************************" ;
   cout << "\nEnter the numerator for the fraction two>> ";
   cin >>two.numerator;
   while(two.numerator < 0)
   {
       cout << "Input is not a valid numerator" <<endl;
       cout << "Re-Enter the numerator for the fraction two>> ";
       cin >>two.numerator;
   }

   cout << "Enter the denominator for the fraction two>> ";
   cin >>two.denominator;
   while(two.denominator == 0 || two.denominator < 0)
   {
       cout << "Input is not a valid denominator" <<endl;
       cout << "Re-Enter the denominator for the fraction two>> ";
       cin >>two.denominator;
   }

   cout << "Enter the whole number for the fraction two>> ";
   cin >> two.wholeNumber;
   while(two.wholeNumber < 0)
   {
       cout <<"Input is not a valid whole number" <<endl;
       cout <<"Re-Enter whole number>> ";
       cin >>two.wholeNumber;
   }

   //reduction of fraction two

   if(two.numerator > two.denominator)
   {
       maximum = two.numerator;
   }
   else
   {
       maximum = two.denominator;
   }

   for(int x = 1; x < maximum;++x)
   {
       if(two.numerator % x == 0 && two.denominator % x == 0)
       {
           commonDivisor = x;

       }
       else
       {
           reducedNumeratorTwo = two.numerator;
           reducedDenominatorTwo = two.denominator;
       }
   }
    cout <<"After reducing fraction it is "<<endl;
    reducedNumeratorTwo = two.numerator /commonDivisor;
    reducedDenominatorTwo = two.denominator /commonDivisor;
    if(reducedNumeratorTwo > reducedDenominatorTwo)
    {
       two.wholeNumber += reducedNumeratorTwo / reducedDenominatorTwo;
       reducedNumeratorTwo %= reducedDenominatorTwo;
       cout << two.wholeNumber << " " << reducedNumeratorTwo << "/" <<
               reducedDenominatorTwo;
       fractionOne = static_cast <float>((two.wholeNumber * reducedDenominatorTwo) + reducedNumeratorTwo)
                 / static_cast<float > (reducedDenominatorTwo);
       cout << "\nThe floating equivalent is " << fractionOne<<endl;
    }
    else if(reducedNumeratorTwo == reducedDenominatorTwo)
    {
        two.wholeNumber += reducedNumeratorTwo / reducedDenominatorTwo;
        cout << two.wholeNumber;
        fractionOne = static_cast <float>((two.wholeNumber * reducedDenominatorTwo)
                 / static_cast<float > (reducedDenominatorTwo));
   cout << "\nThe floating equivalent is " << fractionOne<<endl;
    }
    else
    {
        cout << reducedNumeratorTwo << "/" << reducedDenominatorTwo;
        fractionOne = static_cast <float>((two.wholeNumber * reducedDenominatorTwo) + reducedNumeratorTwo)
                 / static_cast<float > (reducedDenominatorTwo);
        cout << "\nThe floating equivalent is " << fractionOne<<endl;
    }
    //end of fraction two details

     cout <<"******************************************" <<endl;

     */

     /*
    //prompt for operation
   cout <<"Do you wish to add or multiply the fractions?"<<endl;
   cout << "Enter + for addition  or * for multiplication : ";
   cin >> arithmeticOperation;
   while (!(arithmeticOperation == '+' || arithmeticOperation == '*'))
   {
       cout << "Re-enter arithmetic operator either + or *: ";
       cin >> arithmeticOperation;
   }
   if(arithmeticOperation == '*')
   {
      int a = ((reducedDenominatorOne * one.wholeNumber) + reducedNumeratorOne);
      int b = reducedDenominatorOne;
      int c = (( reducedDenominatorTwo * two.wholeNumber) + reducedNumeratorTwo);
      int d = reducedDenominatorTwo;
      int whole = (a * c) / (b * d);
      int num = (a * c) % (b * d);
      int den = b * d;
      cout <<"The answer is "<<endl;
      cout <<whole << " " <<num <<"/"<<den <<endl;
   }
   else
   {
      int a = ((reducedDenominatorOne * one.wholeNumber) + reducedNumeratorOne);
      int b = reducedDenominatorOne;
      int c = (( reducedDenominatorTwo * two.wholeNumber) + reducedNumeratorTwo);
      int d = reducedDenominatorTwo;
      int den =  b < d ? d : b ;
      int num = (((den / b) * a) + ((den / d) * c));
      int whole = num /den;

      cout <<"The answer is "<<endl;
      if(num % den == 0)
      {
         cout <<whole << " " <<endl;
      }
      else
      {
         cout <<whole << " " <<num % den <<"/" <<den <<endl;
      }


   }*/


   return 0 ;
}

Fraction enterFractionValue()
{
   Fraction one;
   cout << "Enter the numerator for the fraction one>> ";
   cin >>one.numerator;
   while(one.numerator < 0)
   {
       cout << "Input is not a valid numerator" <<endl;
       cout << "Re-Enter the numerator for the fraction one>> ";
       cin >>one.numerator;
   }

   cout << "Enter the denominator for the fraction one>> ";
   cin >>one.denominator;
   while(one.denominator == 0 || one.denominator < 0)
   {
       cout << "Input is not a valid denominator" <<endl;
       cout << "Re-Enter the denominator for the fraction one>> ";
       cin >>one.denominator;
   }

   cout << "Enter the whole number for the fraction one>> ";
   cin >> one.wholeNumber;
   while(one.wholeNumber < 0)
   {
       cout <<"Input is not a valid whole number" <<endl;
       cout <<"Re-Enter whole number>> ";
       cin >>one.wholeNumber;
   }

   return one;
}

Fraction reduceFraction(Fraction f)
{
   int maximum;
   int commonDivisor;
   int reducedNumeratorOne;
   int reducedDenominatorOne;
   Fraction one  = f;

   if(one.numerator > one.denominator)
   {
       maximum = one.numerator;
   }
   else
   {
       maximum = one.denominator;
   }

   for(int x = 1; x < maximum;++x)
   {
       if(one.numerator % x == 0 && one.denominator % x == 0)
       {
           commonDivisor = x;

       }
       else
       {
           reducedNumeratorOne = one.numerator;
           reducedDenominatorOne = one.denominator;
       }
   }
    //cout <<"After reducing fraction it is "<<endl;
    reducedNumeratorOne = one.numerator /commonDivisor;
    reducedDenominatorOne = one.denominator /commonDivisor;
    if(reducedNumeratorOne > reducedDenominatorOne)
    {
       one.wholeNumber += reducedNumeratorOne / reducedDenominatorOne;
       reducedNumeratorOne %= reducedDenominatorOne;
       //cout << one.wholeNumber << " " << reducedNumeratorOne << "/" <<
               //reducedDenominatorOne;
       //fractionOne = static_cast <float>((one.wholeNumber * reducedDenominatorOne) + reducedNumeratorOne)
                // / static_cast<float > (reducedDenominatorOne);
       //cout << "\nThe floating equivalent is " << fractionOne <<endl;
    }
    else if(reducedNumeratorOne == reducedDenominatorOne)
    {
        one.wholeNumber += reducedNumeratorOne / reducedDenominatorOne;
        //cout << one.wholeNumber;
        //fractionOne = static_cast <float>((one.wholeNumber * reducedDenominatorOne)
               //  / static_cast<float > (reducedDenominatorOne));
  // cout << "\nThe floating equivalent is " << fractionOne<<endl;
    }
    else
    {
        //cout << reducedNumeratorOne << "/" << reducedDenominatorOne;
       // fractionOne = static_cast <float>((one.wholeNumber * reducedDenominatorOne) + reducedNumeratorOne)
                // / static_cast<float > (reducedDenominatorOne);
       // cout << "\nThe floating equivalent is " << fractionOne<<endl;
    }

    return one;

}

void displayFraction(Fraction f)
{
    cout << f.wholeNumber <<" " <<f.numerator << "/"<<f.denominator<<endl;
}
