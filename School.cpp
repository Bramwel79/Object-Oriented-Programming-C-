#include<iostream>
#include<string>
#include<new>
#include "Classroom.cpp"


using namespace std;
void handleMemoryDepletion()
{
   cout << "Out of memory!" << endl;
   //exit(1);
}

class School
{

private:
  Classroom rooms[100];

public:


};

int main()
{

    School schools[500];
    set_new_handler(handleMemoryDepletion);
    const int LIMIT = 10;
    for(int x = 0; x < LIMIT; ++x)
    {
       schools[x];
    }


    return 0;
}
