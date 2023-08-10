#include<iostream>
#include "Array.cpp"
#include "Book.cpp"
#include "Client.cpp"
using namespace std;

int main()
{

   int ints[] = {34,56,89,29,100};
   int arraySize = sizeof(ints) / sizeof(ints[0]);
   Array<int>arrayOfIntegers(ints,arraySize);
   arrayOfIntegers.showFirst();
   arrayOfIntegers.showLast();
   arrayOfIntegers.showList();
   arrayOfIntegers.showSpecificElement(5);
   arrayOfIntegers.sortAscending(ints,0,arraySize-1);
   arrayOfIntegers.sortDescending(ints,0,arraySize-1);
   arrayOfIntegers.sumElements(ints);
   arrayOfIntegers.reverseArray();

   double floats[] = {34.55,56.45,89.25,29.35,100.15};
   int arraySize2 = sizeof(floats) / sizeof(floats[0]);
   Array<double>arrayOfFloats(floats,arraySize2);
   arrayOfFloats.showFirst();
   arrayOfFloats.showLast();
   arrayOfFloats.showList();
   arrayOfFloats.showSpecificElement(2);
   arrayOfFloats.sortAscending(floats,0,arraySize2-1);
   arrayOfFloats.sortDescending(floats,0,arraySize2-1);
   arrayOfFloats.sumElements(floats);
   arrayOfFloats.reverseArray();

   Book one;
   Book two;
   Book three;
   one.setBook("En avant la musique",45.15);
   two.setBook("Contacts un",23.35);
   three.setBook("Contacts deux",30.55);
   Book combo[] = {one,two,three};
   int arraySize3 = sizeof(combo) / sizeof(combo[0]);
   Array<Book>arrayOfBooks(combo,3);
   arrayOfBooks.showFirst();
   arrayOfBooks.showLast();
   arrayOfBooks.showList();
   arrayOfBooks.showSpecificElement(2);
   arrayOfBooks.reverseArray();

   Client one1;
   Client two1;
   Client three1;
   one1.setClient("Patti Labelle",10);
   two1.setClient("Regina Belle",9);
   three1.setClient("Adina Howard",2);
   Client combo1[] = {one1,two1,three1};
   int arraySize4 = sizeof(combo1) / sizeof(combo1[0]);
   Array<Client>arrayOfClients(combo1,3);
   arrayOfClients.showFirst();
   arrayOfClients.showLast();
   arrayOfClients.showList();
   arrayOfClients.showSpecificElement(2);
   arrayOfClients.reverseArray();
    return 0;
}
