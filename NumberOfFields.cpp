#include<iostream>
#include "TextBook.cpp"
#include "Client.cpp"

using namespace std;

template<class T>
class NumberOfFields
{
    private:
    T object;
    int elements;
    public:
    NumberOfFields(T n, int s);
    void displayMessage();
};
template<class T>
NumberOfFields<T>::NumberOfFields(T n,int s)
{
    object = n;
    elements = s;
}
template<class T>
void NumberOfFields<T>::displayMessage()
{
    cout << "You will be asked to enter X items"<<endl;

}

int main()
{
    TextBook one;
    one.setTextBook("Things fall apart",34.55);
    NumberOfFields<TextBook>aText(one,2);
    aText.displayMessage();

    int x;
    NumberOfFields<int>anInt(x,3);
    anInt.displayMessage();

    Client niko;
    niko.setClient("Niko Giordano",89.65);
    NumberOfFields<Client>aClient(niko,2);
    aClient.displayMessage();

    return 0;
}
