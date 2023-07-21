#include<iostream>

using namespace std;

int main()
{
    int manufacturerCode1;
    int manufacturerCode2;
    int manufacturerCode3;
    int manufacturerCode4;
    int manufacturerCode5;
    int productCode1;
    int productCode2;
    int productCode3;
    int productCode4;
    int productCode5;
    int checkDigit;
    int i;
    int validityCode;

    cout << "Enter the first digit manufacturer code ";
    cin >> manufacturerCode1;
    cout << "Enter the second digit manufacturer code ";
    cin >> manufacturerCode2;
    cout << "Enter the third digit manufacturer code ";
    cin >> manufacturerCode3;
    cout << "Enter the fourth digit manufacturer code ";
    cin >> manufacturerCode4;
    cout << "Enter the fifth digit manufacturer code ";
    cin >> manufacturerCode5;

    cout << "\nEnter the first digit product code ";
    cin >> productCode1;
    cout << "Enter the second digit product code ";
    cin >> productCode2;
    cout << "Enter the third digit product code ";
    cin >> productCode3;
    cout << "Enter the fourth digit product code ";
    cin >> productCode4;
    cout << "Enter the fifth digit product code ";
    cin >> productCode5;

    cout << "\nEnter the check digit ";
    cin >> checkDigit;

    // algorithm to validate check digit
    int stepa = manufacturerCode2 + manufacturerCode4;
    int stepb = productCode1 + productCode3 + productCode5;
    int stepc = ((stepa + stepb) * 3) ;
    int stepd = manufacturerCode1 + manufacturerCode3 + manufacturerCode5;
    int stepe = productCode2 + productCode4;
    int stepf = stepd + stepe + stepc ;
    int stepg = stepf % 10;
    int steph = 10 - stepg ;
    validityCode = steph == checkDigit;
    cout << "Is the check digit valid? " << validityCode;
     if(validityCode == 0)
        cout << "\nThe Check digit is not valid";
     else
        cout << "\nThe Check digit is valid" <<endl;


    return 0;



}
