#include<iostream>


using namespace std;

int main()
{
    double gradePointAverage;
    int admissionTestScore;
    bool outcome = false;

    cout << "Enter the Student High School Grade point Average: ";
    cin >>gradePointAverage;
    cout << "Enter the Student Admission Test Score ";
    cin >>admissionTestScore;

    /* criteria to meet
       gpa of 3.0 or above and admission score of atleast 60
       gpa of below 3.0 and admission score of atleast 80*/
     if(((gradePointAverage >= 3.0)  && (admissionTestScore >= 60)) ||
       ((gradePointAverage < 3.0) && (admissionTestScore >=80)))
       outcome = true;
     if(outcome)
        cout << "Accept";
     else
        cout << "Reject";


    return 0 ;
}
