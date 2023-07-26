#include<iostream>

using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    string zipCode;
public:
    Person(string lName,string fName,string code);
    void setLastName(string name);
    void setFirstName(string name);
    void setZipCode(string code);
    string getLastName();
    string getFirstName();
    string getZipCode();

};

Person::Person(string lName,string fName,string code)
{
    lastName = lName;
    firstName = fName;
    zipCode = code;
}
string Person::getFirstName()
{
    return firstName;
}
string Person::getLastName()
{
    return lastName;
}
string Person::getZipCode()
{
    return zipCode;
}
void Person::setFirstName(string name)
{
   firstName = name;
}
void Person::setLastName(string name)
{
    lastName = name;
}
void Person::setZipCode(string code)
{
    zipCode = code;
}


class StudentGrade
{
private:
    int studentIdNumber;
    Person student;
    int testScore;
    int possiblePoints;
    char grade;

public:
    StudentGrade(int id,string lName,string fName,string code,
                 int score,int points = 100);
    int getTestScore();
    int getPossiblePoints();
    int getIdNumber();
    char getGrade();
    void displayDetails();


};

int StudentGrade::getIdNumber()
{
    return studentIdNumber;
}
char StudentGrade::getGrade()
{
    return grade;
}

int StudentGrade::getPossiblePoints()
 {
     return possiblePoints;
 }
 int StudentGrade::getTestScore()
 {
     return testScore;
 }
StudentGrade::StudentGrade(int id,string lName,string fName,string code,
                 int score,int points): student(lName,fName,code)
                 {
                     studentIdNumber = id;
                     testScore = score;
                     if(points == 0)
                     {
                       possiblePoints = 1;
                     }
                     else
                     {
                       possiblePoints = points;
                     }

                     //calculate grade
                     int percent = testScore / possiblePoints;
                     if(percent >= 1 && percent <= 60)
                     {
                         grade = 'D';
                     }
                     if(percent >=61 && percent <= 70)
                     {
                         grade = 'C';
                     }
                     if(percent >= 71 && percent <= 89)
                     {
                         grade = 'B';
                     }
                     if(percent >= 90)
                     {
                         grade = 'A';
                     }


                 }

void StudentGrade::displayDetails()
{
    cout <<"Student First Name is "<<student.getFirstName()<<endl;
    cout <<"Students Last Name is " <<student.getLastName()<<endl;
    cout <<"Students Zip Code is "<<student.getZipCode()<<endl;
    cout <<"Students Id number is "<<getIdNumber()<<endl;
    cout <<"Test score = " << getTestScore()<<endl;
    cout <<"Possible points = "<<getPossiblePoints()<<endl;
    cout <<"Grade = " <<getGrade()<<endl;;
    cout <<"**********************"<<endl;
}

int main()
{
   StudentGrade bram(1000,"Nawate","Bramwel","00505",12000); //A
   bram.displayDetails();
   StudentGrade scott(1001,"Scott","Robinson","00105",100,1);//A
   scott.displayDetails();
   StudentGrade will(1002,"William","Tell","00405",8900);//B
   will.displayDetails();
   StudentGrade getray(1003,"Getray","Shijenje","00605",7000);//C
   getray.displayDetails();
   StudentGrade willis(1002,"Willis","Oira","00205",6000);//D
   willis.displayDetails();


    return 0;
}
