#include<iostream>
#include<exception>
#include "JobException.cpp"
#define FEE 250
#define ARRAY_SIZE 8

using namespace std;

class Job
{
    friend ostream& operator<<(ostream&, const Job&); //output or insertion operator
    friend istream& operator>>(istream&, Job&)
          throw(JobException); //input or extraction operator
private:
  int jobIdNumber;
  double cost;

public:


};

ostream& operator<<(ostream& out, const Job& jb)
{
   out << "Job id number: " <<jb.jobIdNumber << " "
          "Job fee: " << jb.cost<< endl;
   return out ;
}

istream& operator>>(istream& in, Job &jb)
   throw(JobException)
{
    cout << endl; // to clear the buffer
    cout << "Enter job id number ";
    in >> jb.jobIdNumber;
    cout << "Enter job cost ";
    in >> jb.cost;
    if(jb.cost < FEE)
    {
        JobException je("Fee below");
        throw(je);
    }
    return in;
}

int main()
{
    Job jobs[ARRAY_SIZE];
    int x;
    for(x = 0; x < ARRAY_SIZE;++x)
    {
        try
        {

           cin >> jobs[x];
        }

        catch(JobException j)
        {
           cout << "Error message is " << j.getMessage() << " "<< FEE << " Re-enter data"<<endl;
           cin >> jobs[x];

        }
    }

    cout <<"\n";
    for(x = 0; x < ARRAY_SIZE;++x)
    {
        cout << jobs[x];
    }

    return 0;
}
