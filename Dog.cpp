#include<iostream>

using namespace std;

class Dog
{
private:
    string name;
    string breed;
    int age;
    const static double licence_fee = 12.25;
public:
    string getName();
    void setName(string);
    string getBreed();
    void setBreed(string);
    int getAge();
    void setAge(int);
    void displayData();

};

string Dog::getName()
{
    return name;
}

void Dog::setName(string s)
{
    name = s;
}

string Dog::getBreed()
{
    return breed;
}

void Dog::setBreed(string b)
{
    breed = b;
}

int Dog::getAge()
{
    return age;
}

void Dog::setAge(int age)
{
    this->age = age;
}

void Dog::displayData()
{
    cout <<"Dog's Name: "<< name<<endl;
    cout <<"Dog's Breed: "<<breed<<endl;
    cout <<"Dog's Age: "<<age<<endl;
    cout <<"Licence fee is: "<<licence_fee<<endl;
}

int main()
{
   Dog dog;
   Dog dog1;

   dog.setName("Biky");
   dog.setBreed("Bulldog");
   dog.setAge(5);
   dog.displayData();
   cout <<"\n";
   dog1.setName("Smoky");
   dog1.setBreed("hans");
   dog1.setAge(4);
   dog1.displayData();

    return 0;
}
