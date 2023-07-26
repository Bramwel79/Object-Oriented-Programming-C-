#include<iostream>

using namespace std;

struct Employee
{
    int employeeId;
    string firstName;
    string lastName;
    double hourlyPayRate;
};

int main()
{
  const int MAX = 5;
  const int SENTINEL = 999;
  Employee employees[MAX];
  int idNumber ;
  int isFound = 0;


  //get input for 5 employees
  cout <<"Input details for 5 employees:"<<endl;
  cout <<"******************************"<<endl;
 for(int x = 0; x< MAX;++x)
 {
     cout << "Enter Employee " << x+1 << " ID number :";
     cin >> employees[x].employeeId;
     cout << "Enter Employee " << x+1 << " First Name : ";
     cin >> employees[x].firstName;
     cout << "Enter Employee " << x+1 << " Last Name : ";
     cin >> employees[x].lastName;
     cout << "Enter Employee " << x+1 << " Hourly Pay Rate : ";
     cin >> employees[x].hourlyPayRate;
     cout << "________________________________________________"<<endl;
 }

 //display input based on id number
  cout << "Enter Employee ID number or 999 to quit application :";
  cin >> idNumber;
  while(idNumber != SENTINEL)
  {
      cout << "The details for Employee ID Number : " <<idNumber << " are as follows:"<<endl;
      cout << "**********************************************************************"<<endl;

       for(int i = 0; i < MAX;++i)
       {
           if(employees[i].employeeId == idNumber)
           {
              cout << "First Name : " << employees[i].firstName<<endl;
              cout << "Last Name : " << employees[i].lastName<<endl;
              cout << "Hourly Pay Rate : " << employees[i].hourlyPayRate<<endl;
              cout << "\n"<<endl;
              isFound = 1;
              break;
           }
           else
           {
               isFound = 0;
           }


       }
       if(isFound == 0)
           {
               cout << "Sorry- no such id number exists" <<endl;
           }

      cout << "Enter Employee ID number or 999 to quit application :";
      cin >> idNumber;

  }


    return 0;
}
