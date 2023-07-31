#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class Dog
{
    friend ostream& operator<<(ostream&, const Dog&); //output or insertion operator
    friend istream& operator>>(istream&, Dog&); //input or extraction operator
private:
    string name;
    string eyeColour;

public:
    Dog();
    Dog(string,string);
    Dog operator*(Dog);
    string getName();
    string getEyeColour();
    void setName(string n);
    void setEyeColour(string eye);

};
Dog::Dog()
{

}
Dog::Dog(string n,string e)
{
    name = n;
    eyeColour = e;
}
void Dog::setEyeColour(string e)
{
    eyeColour = e;
}
void Dog::setName(string n)
{
    name = n;
}
string Dog::getName()
{
    return name;
}

string Dog::getEyeColour()
{
    return eyeColour;
}

Dog Dog::operator*(Dog dog)
{
   Dog temp;
   temp.name = name;
   const int DIVISOR = 2;
   srand((unsigned)time(NULL));
   int result;
   result = rand() % DIVISOR;

   //get dog breed
   if(temp.name.compare(dog.name) == 0)
   {
       temp.name = dog.name;
   }
   if(temp.name.compare(dog.name) != 0)
   {
       temp.name = "Mixed";
   }

   //get eye colour
   if(result == 0)
   {
       temp.eyeColour = eyeColour;
   }
   if(result == 1)
   {
       temp.eyeColour = dog.eyeColour;
   }


   return  temp;
}
ostream& operator<<(ostream& out,const Dog& dog)
{
    out << "Dog Breed is "<<dog.name <<endl<<
    "Eye colour is "<<dog.eyeColour <<endl;
    return out;

}

istream& operator>>(istream& in,Dog& dog)
{
    cout << endl; // to clear the buffer
    cout << "Enter dog breed: ";
    in >>dog.name;
    cout <<"Enter eye colour: ";
    in >>dog.eyeColour;
    cout<<endl;
    return in;

}
int main()
{
   Dog dog1("Bulldog","brown");
   Dog dog2("Bulldog","pink");
   Dog dog3("Alsatian","black");
   Dog dog4("German Shepherd","blue");
   Dog dogResult1;
   Dog dogResult2;

   cout <<"First pair of same breed"<<endl;
   cout <<"************************"<<endl;
   for(int i = 0; i <=7;++i)
   {
       dogResult1 = dog1 * dog2;
   }
   cout << dogResult1<<endl;

   cout <<"Second pair of different breed"<<endl;
   cout <<"******************************"<<endl;

    for(int i = 0; i <=7;++i)
   {
       dogResult2 = dog3 * dog4;
   }
   cout << dogResult2;

    return 0;
}
