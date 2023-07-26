#include<iostream>

using namespace std;

struct Employee
   {
       string firstName;
       string lastName;
       double hourlyPayRate;
   };

int main()
{
 const int MAX = 5;
 Employee employees[MAX];
 int index;

//get input for 5 employees
 for(int x = 0; x< MAX;++x)
 {
     cout <<"Enter Employee " << x+1 << " First Name : ";
     cin >> employees[x].firstName;
     cout << "Enter Employee " << x+1 << " Last Name : ";
     cin >> employees[x].lastName;
     cout << "Enter Employee " << x+1 << " Hourly Pay Rate : ";
     cin >> employees[x].hourlyPayRate;
     cout << "________________________________________________"<<endl;
 }
  //display input based on index number
  cout << "Enter Employee [1,2,3,4 or 5] to view details :";
  cin >> index;
  while(index <= 0 || index > 5)
  {
     cout << "Re-Enter Employee [1,2,3,4 or 5] to view details :";
     cin >> index;
  }
  index -= 1; //counting starts at index 0

  cout << "The details are as follows:"<<endl;
  cout << "***************************"<<endl;
  for(int y = 0 ; y < MAX;++y)
  {
      if(y == index)
      {
          cout << "First Name : " << employees[y].firstName<<endl;
          cout << "Last Name : " << employees[y].lastName<<endl;
          cout << "Hourly Pay Rate : " <<employees[y].hourlyPayRate<<endl;
      }
  }


  return 0;
}
