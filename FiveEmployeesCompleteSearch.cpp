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
  const int MAX = 5; //maximum number of employees in struct
  const int SENTINEL = 999; //to end application requiring an integer value
  const string SENTINEL2 = "END"; //to end application requiring string value
  Employee employees[MAX]; //array of Employee struct
  int searchNumber ; //search criteria
  int idNumber; //employee id number
  string lastName; //employee last name
  double hourlyPayRate; //employee hourly pay rate
  int isFound = 0; //acts like a boolean value


  //get input for 5 employees
  cout <<"Input details for " << MAX << " employees:"<<endl;
  cout <<"******************************"<<endl;
 for(int x = 0; x < MAX;++x)
 {
     cout << "Enter Employee " << x+1 << " ID number : ";
     cin >> employees[x].employeeId;

     //check for duplicate id numbers
     while((employees[0].employeeId == employees[1].employeeId ||
        employees[0].employeeId == employees[2].employeeId ||
        employees[0].employeeId == employees[3].employeeId ||
        employees[0].employeeId == employees[4].employeeId)
        ||
       (employees[1].employeeId == employees[0].employeeId ||
        employees[1].employeeId == employees[2].employeeId ||
        employees[1].employeeId == employees[3].employeeId ||
        employees[1].employeeId == employees[4].employeeId)
        ||
       (employees[2].employeeId == employees[0].employeeId ||
        employees[2].employeeId == employees[1].employeeId ||
        employees[2].employeeId == employees[3].employeeId ||
        employees[2].employeeId == employees[4].employeeId)
        ||
       (employees[3].employeeId == employees[0].employeeId ||
        employees[3].employeeId == employees[1].employeeId ||
        employees[3].employeeId == employees[2].employeeId ||
        employees[3].employeeId == employees[4].employeeId)
        ||
       (employees[4].employeeId == employees[0].employeeId ||
        employees[4].employeeId == employees[1].employeeId ||
        employees[4].employeeId == employees[2].employeeId ||
        employees[4].employeeId == employees[3].employeeId))
     {
         cout << "Employee id already exists"<<endl;
         cout << "Re-Enter Employee " << x+1 << " ID number : ";
         cin >> employees[x].employeeId;
     }
     cout << "Enter Employee " << x+1 << " First Name : ";
     cin >> employees[x].firstName;
     cout << "Enter Employee " << x+1 << " Last Name : ";
     cin >> employees[x].lastName;
     cout << "Enter Employee " << x+1 << " Hourly Pay Rate : ";
     cin >> employees[x].hourlyPayRate;
     cout << "________________________________________________"<<endl;

 }

 //display input based on search criteria
  cout << "Display Employee details based on search criteria:"<<endl;
  cout <<"*********************************************"<<endl;
  cout << "Enter 1 to search by ID Number, 2 by Last Name or 3 by Hourly Pay or " <<SENTINEL<< " to quit application: ";
  cin >> searchNumber;

  while(searchNumber < 1 || searchNumber > 3 )
  {
    if(searchNumber == SENTINEL)
    {
      break;
    }
    cout << "Re-Enter 1 to search by ID Number, 2 by Last Name or 3 by Hourly Pay or " <<SENTINEL<< " to quit application: ";
    cin >> searchNumber;
  }

  switch(searchNumber)
  {
     case 1 : //by id number
              cout << "Enter Employee ID Number or " <<SENTINEL<< " to quit application: ";
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
                      break; //because no two employees can have same id number
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

              cout << "Enter Employee ID Number or " <<SENTINEL<< " to quit application: ";
              cin >> idNumber;


      }
       break;

       case 2 : //by last name
              cout << "Enter Employee Last Name or " << SENTINEL2 << " to quit application: ";
              cin >> lastName;
         while(lastName != SENTINEL2)
         {
              cout << "The details for Employee : " <<lastName << " are as follows:"<<endl;
              cout << "**********************************************************************"<<endl;

               for(int i = 0; i < MAX;++i)
               {
                   if(employees[i].lastName == lastName)
                   {
                      cout << "ID Number : " <<employees[i].employeeId<<endl;
                      cout << "First Name : " << employees[i].firstName<<endl;
                      cout << "Hourly Pay Rate : " << employees[i].hourlyPayRate<<endl;
                      cout << "\n"<<endl;
                      isFound = 1;

                   }
                   else
                   {
                       isFound = 0;
                   }


               }
               if(isFound == 0)
                   {
                       cout << "Sorry- no such last name exists" <<endl;
                   }

              cout << "Enter Employee Last Name or " << SENTINEL2 << " to quit application: ";
              cin >> lastName;

         }

       break;

       case 3: // by hourly rate
            cout << "Enter Hourly Rate or " << SENTINEL<< " to quit application: ";
            cin >> hourlyPayRate;
         while(hourlyPayRate != SENTINEL)
         {
              cout << "The details for Employee with hourly pay rate of : " <<hourlyPayRate << " are as follows:"<<endl;
              cout << "**********************************************************************"<<endl;

               for(int i = 0; i < MAX;++i)
               {
                   if(employees[i].hourlyPayRate == hourlyPayRate)
                   {
                      cout << "ID Number : " <<employees[i].employeeId<<endl;
                      cout << "First Name : " << employees[i].firstName<<endl;
                      cout << "Last Name : " << employees[i].lastName<<endl;
                      cout << "\n"<<endl;
                      isFound = 1;

                   }
                   else
                   {
                       isFound = 0;
                   }


               }
               if(isFound == 0)
                   {
                       cout << "Sorry- no such hourly pay rate exists" <<endl;
                   }

              cout << "Enter Hourly Rate or " << SENTINEL<< " to quit application: ";
              cin >> hourlyPayRate;

         }
         break;

  }


    return 0;
}
