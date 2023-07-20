#include<iostream>

using namespace std;

struct Computer
{
    double cpuSpeed;
    double memory;
    int operatingSystemBit;
};
int main()
{
  Computer macintosh;
  Computer dell;

  cout << "What is the CPU Speed for Macintosh ";
  cin >>macintosh.cpuSpeed;
  cout << "\nHow big is the memory ";
  cin >>macintosh.memory;
  cout << "\nWhat bit is the Operating System ";
  cin >>macintosh.operatingSystemBit;
  cout << "\nWhat is the CPU Speed for Dell ";
  cin >>dell.cpuSpeed;
  cout << "\nHow big is the memory ";
  cin >>dell.memory;
  cout << "\nWhat bit is the Operating System ";
  cin >>dell.operatingSystemBit;


  cout << "*********Macintosh Data*********************\n";
  cout << "The CPU Speed is ";
  cout <<macintosh.cpuSpeed;
  cout << "\nThe memory size is ";
  cout <<macintosh.memory;
  cout << "\nThe operating system bit is ";
  cout <<macintosh.operatingSystemBit;

  cout <<"\n************Dell Data************************\n";
  cout << "The CPU Speed is ";
  cout <<dell.cpuSpeed;
  cout << "\nThe memory size is ";
  cout <<dell.memory;
  cout << "\nThe operating system bit is ";
  cout <<dell.operatingSystemBit;
  return 0;


}
