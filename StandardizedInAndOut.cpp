#include<iostream>

using namespace std;

template<class T>
class Number
{
    private:
    T theNumber;
    public:
    Number(T n);
    void displayNumber();
};
template<class T>
Number<T>::Number(T n)
{
    theNumber = n;
}
template<class T>
void Number<T>::displayNumber()
{
    cout << "Number # ";
    cout << theNumber << endl;
}

int main()
{
    Number<int> anInt(65);
    Number<double> aDouble(3.46);
    Number<char> aChar('K');
    Number<int> aCharAsAnInt('K');
    Number<char> anIntAsAChar(65);
    anInt.displayNumber();
    aDouble.displayNumber();
    aChar.displayNumber();
    aCharAsAnInt.displayNumber();
    anIntAsAChar.displayNumber();
    return 0;
}
