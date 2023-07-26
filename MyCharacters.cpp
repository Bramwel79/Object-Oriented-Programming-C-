#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

class Character
 {
 private:
     int age;
     int numberOfEyes;
     int numberOfLegs;
 public:
    void setAge(int age);
    void setNumberOfEyes(int no);
    void setNumberOfLegs(int no);
    int getAge();
    int getNumberOfEyes();
    int getNumberOfLegs();
    void displayCharacter();

 };

 void Character::setAge(int age)
 {
     this->age = age;
 }

 void Character::setNumberOfEyes(int no)
 {
     numberOfEyes = no;
 }
 void Character::setNumberOfLegs(int no)
 {
     numberOfLegs = no;
 }
 int Character ::getAge()
 {
     return age;
 }
 int Character::getNumberOfEyes()
 {
     return numberOfEyes;
 }
 int Character::getNumberOfLegs()
 {
     return numberOfLegs;
 }
 void Character::displayCharacter()
 {
     cout <<"Age of Character is "<<getAge()<<endl;
     cout <<"Number of Eyes is "<<getNumberOfEyes()<<endl;
     cout <<"Number of Lives is "<<getNumberOfLegs()<<endl;
 }


int main()
{
    Character one;
    Character two;

    srand((unsigned)time(NULL));

    int ageOne = 1 + (rand() % 100);
    one.setAge(ageOne);
    int ageTwo = 1 + (rand() % 100);
    two.setAge(ageTwo);

    int eyesOne = 1 + (rand() % 10);
    one.setNumberOfEyes(eyesOne);
    int eyesTwo = 1 + (rand() % 10);
    two.setNumberOfEyes(eyesTwo);

    int legsOne = 1 + (rand() % 12);
    one.setNumberOfLegs(legsOne);
    int legsTwo = 1 + (rand() % 12);
    two.setNumberOfLegs(legsTwo);

    cout <<"Details of Character one are:"<<endl;
    one.displayCharacter();
    cout <<"\nDetails of Character two are:"<<endl;
    two.displayCharacter();

    return 0;
}
