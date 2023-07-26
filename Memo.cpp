#include<iostream>

using namespace std;

void companyName();


int main()
{
    cout <<"MEMO"<<endl;
    companyName();
    cout <<"\n__________________________";
    cout <<"\nTo: All Staff Members";
    cout <<"\nFrom: Brian Cine, CEO";
    cout <<"\n9th January 2015";
    cout <<"\nSubject: Upcoming Holidays";
    cout <<"\n____________________________";
    cout <<"\n";
    cout <<"Let me take this opportunity to wish you\n";
    cout <<"all Happy holidays and a prosperous new year.\n";
    cout <<"Let us enjoy and come back rejuvenated.\n";
    cout <<"It has been an excellent year and you will all\n";
    cout <<"be paid a bonus commensurate with your grade.\n";
    companyName();
    cout <<" will be rolling out new\n";
    cout <<"products and services coming year that will\n";
    cout <<"make us the regional market leader in software development.";
    cout <<"\n";
    cout <<"\nThank you.";
    cout <<"\nYours Faithfully,";
    cout <<"\n";
    cout <<"Brain Cine, CEO";
    cout <<"\n";
    companyName();
    cout <<"\n\n";

    return 0;
}

void companyName()
{
    cout << "C++ Software Developers";
}
