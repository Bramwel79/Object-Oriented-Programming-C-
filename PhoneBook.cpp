#include<iostream>

using namespace std;
const int SIZE =  5;

class PhoneBook
{
    friend ostream& operator<<(ostream&, const PhoneBook&); //output or insertion operator
    friend istream& operator>>(istream&, PhoneBook&); //input or extraction operator

private:
    string firstName;
    string lastName;
    string areaCode;
    string phoneNo;

public:
    PhoneBook& operator[](PhoneBook&);
    PhoneBook& operator()(PhoneBook&);
    string getAreaCode();
    string getPhoneNumber();
    void setPhoneNumber(string p);
    void setAreaCode(string ac);
};
PhoneBook& PhoneBook::operator[](PhoneBook& pbk)
{
   string no;
   cout <<"Enter phone number: ";
   cin >> no;
   pbk.phoneNo = no;
   return *this;
}

PhoneBook& PhoneBook::operator()(PhoneBook& pbk)
{
   string code;
   string no;
   cout <<"Enter area code: ";
   cin >> code;
   cout <<"Enter phone number: ";
   cin >> no;
   pbk.areaCode = code;
   pbk.phoneNo = no;
   return *this;
}

void PhoneBook::setAreaCode(string ac)
{
    areaCode = ac;
}

void PhoneBook::setPhoneNumber(string p)
{
    phoneNo = p;
}

string PhoneBook::getAreaCode()
{
    return areaCode;
}

string PhoneBook::getPhoneNumber()
{
    return phoneNo;
}

ostream& operator<<(ostream& out,const PhoneBook& phoneBook)
{
    out << "First Name is "<<phoneBook.firstName<<endl<<
    "Last Name is "<<phoneBook.lastName<<endl<<
    "Area Code is "<<phoneBook.areaCode<<endl<<
    "Phone Number is "<<phoneBook.phoneNo<<endl;
    return out;

}

istream& operator>>(istream& in,PhoneBook& phoneBook)
{
    cout << endl; // to clear the buffer
    cout << "Enter first name: ";
    in >>phoneBook.firstName;
    cout <<"Enter last name: ";
    in >>phoneBook.lastName;
    cout << "Enter area code: ";
    in >>phoneBook.areaCode;
    cout <<"Enter phone number: ";
    in >>phoneBook.phoneNo;
    cout<<endl;
    return in;

}

int main()
{
    PhoneBook phoneBooks[SIZE];
    PhoneBook temp;
    int x;
    int entry;
    int selection;
    int pNo;
    int pCode;

    //get input
    for(x = 0; x < SIZE; ++x)
    {
        cout <<"Phone Book Entry : " <<(x+1)<<endl;
        cin >>phoneBooks[x];
    }

    cout <<"\n"<<endl;

    //display output
    cout<<"***Displaying output*************************\n"<<endl;
    for(x = 0; x < SIZE; ++x)
    {
        cout <<"Phone Book Entry : " <<(x+1)<<endl;
        cout <<phoneBooks[x];
        cout <<"\n"<<endl;

    }

    cout<<"Select 1,2,3,4 or 5 to modify a phone book entry: "<<endl;
    cin >> entry;

    cout<<"Enter 1 to alter entire entry."<<endl;
    cout<<"Enter 2 to alter phone number and area code."<<endl;
    cout<<"Enter 3 to alter phone number only."<<endl;
    cout<<"Enter your choice?"<<endl;
    cin>>selection;

    if(selection == 1)
    {
        cin>>temp;
        phoneBooks[entry-1] = temp;
        cout<<"\nAfter modifying entry no "<<entry <<endl;
        cout<<phoneBooks[entry-1];
    }
    else if (selection == 2) /* call overloaded operator()*/
    {
        //change area code and phone number
         temp(phoneBooks[entry - 1]);
         cout <<phoneBooks[entry-1];


    }
    else if( selection == 3)/* call overloaded operator[]*/
    {
        //change phone number
        temp[phoneBooks[entry - 1]];
        cout <<phoneBooks[entry-1];

    }

    //redisplay output after changes
    cout<<"\n***Redisplaying output after changes***********\n"<<endl;
    for(x = 0; x < SIZE; ++x)
    {
        cout <<"Phone Book Entry : " <<(x+1)<<endl;
        cout <<phoneBooks[x];
        cout <<"\n"<<endl;

    }

    return 0;
}
