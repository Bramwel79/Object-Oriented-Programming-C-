#include<iostream>

using namespace std;

struct Dog
{
    string dogName;

};

struct Cat
{
    string catName;
};

void Speak(Dog dog);
void Speak(Cat cat);

int main()
{
    Dog dog;
    Cat cat;

    cout <<"Enter name of Dog: ";
    cin >>dog.dogName;
    cout <<"Enter name of Cat: ";
    cin >>cat.catName;
    cout<<"\n";

    Speak(dog);
    Speak(cat);

    return 0;
}

void Speak(Dog dog)
{
    cout <<"Dog's name is " <<dog.dogName<<endl;
    cout <<dog.dogName<< " says woof"<<endl;
}

void Speak(Cat cat)
{
    cout <<"Cat's name is " <<cat.catName<<endl;
    cout <<cat.catName<< " says meow"<<endl;
}
