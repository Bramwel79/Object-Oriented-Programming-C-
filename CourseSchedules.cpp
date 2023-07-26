#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace  std;

int main()
{
  char courseSchedule[4][10]= {"Th 3.30","Fr 1.30","Mon 8.30","Wed 1.30"};
  char course[10];
  cout <<"Enter course name to display day and time: ";
  cin >> course;

  if(strcmp(course,"CIS110") == 0)
  {
      cout << "Course time : " << courseSchedule[0];
  }
  else if(strcmp(course,"MATHS100")== 0)
  {
      cout << "Course time : " << courseSchedule[1];
  }
  else if(strcmp(course,"ENGL200")== 0)
  {
      cout << "Course time : " << courseSchedule[2];
  }
  else if(strcmp(course,"MEPS410")== 0)
  {
      cout << "Course time : " << courseSchedule[3];
  }
  else
  {
      cout <<"Course not assigned time yet."<<endl;
  }




 return 0;
}


