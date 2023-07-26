#include<iostream>

using namespace std;

void movieData(string name,int = 90);

int main()
{
    movieData("Eraser");
    movieData("Amar en tiempos revueltos",45);
    return 0;
}

/*
* method displays movie statistics
*/
void movieData(string name,int duration)
{
    cout <<"The movie is called " <<name<<endl;
    cout <<"The duration in minutes is " <<duration<<endl;
}
