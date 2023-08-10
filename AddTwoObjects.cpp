#include<iostream>
#include<string.h>
#include "Homework.cpp"
using namespace std;

template<class T>
T add(T input, T input2)
{
    cout <<"Result = ";
    T ans = input + input2;
    cout << ans;
    cout <<"\n";
}


int main()
{
      Homework fr;
      fr.setAssignment("lire page deux");
      fr.setClassName("Francais 123");
      fr.setDuration(30);

      Homework it;
      it.setAssignment("leggere pagina due");
      it.setClassName("Italiano 123");
      it.setDuration(50);

      add(20,30);
      add(55.45,65.35);

      add(fr,fr);


    return 0;
}
