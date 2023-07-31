#include<iostream>

using namespace std;
const int SIZE  = 4;

class CollegeDepartment
{
     friend ostream& operator<<(ostream&, const CollegeDepartment&); //output or insertion operator
  private:
      string deptName;
      string chairPerson;
      int classes;
      string *coursesPtr;


  public:
     CollegeDepartment();
     CollegeDepartment(string,string,int);
     int operator>(const CollegeDepartment& cd);
     int operator<(const CollegeDepartment& cd);
     CollegeDepartment& operator=(CollegeDepartment&);

};
CollegeDepartment::CollegeDepartment()
{
    deptName = "Chemistry";
    chairPerson = "Mr. Fisher";
    classes = 1;
    coursesPtr = new string[0];
}
CollegeDepartment::CollegeDepartment(string dept,string chairP,int cls)
{
    deptName = dept;
    chairPerson = chairP;
    classes = cls;
    coursesPtr = new string[classes];
    int x;
    for(x = 0; x < classes;++x)
    {
        cout<<"Enter course name " <<(x+1) << " : ";
        cin >> coursesPtr[x];
    }
}
int CollegeDepartment::operator>(const CollegeDepartment& cd)
{
    int most = 0;
    if(classes > cd.classes)
    {
        most = 1;
    }

    return most;
}

int CollegeDepartment::operator<(const CollegeDepartment& cd)
{
    int fewest = 0;
    if(classes < cd.classes)
    {
        fewest = 1;
    }

    return fewest;
}
CollegeDepartment& CollegeDepartment::operator=(CollegeDepartment& cd)
{
    int x ;
    deptName = cd.deptName;
    chairPerson = cd.chairPerson;
    classes = cd.classes;
    delete [] coursesPtr;
    coursesPtr = new string[cd.classes];
    for(x = 0; x < cd.classes;++x)
    {
        coursesPtr[x] = cd.coursesPtr[x];
    }
    return *this;
}
ostream& operator<<(ostream& out,const CollegeDepartment& collegeDepartment)
{
    int x;
    out << "\nDepartment Name is "<<collegeDepartment.deptName<<endl<<
    "Chairperson is  "<<collegeDepartment.chairPerson<<endl<<
    "Individual courses offered are:"<<endl;
    for(x = 0; x < collegeDepartment.classes;++x)
    {
        cout <<collegeDepartment.coursesPtr[x]<<endl;
    }
    return out;

}
int main()
{
    CollegeDepartment collegeDepts[SIZE];
    string dept;
    string chair;
    int courses;
    int i;
    for(i = 0 ;i < SIZE;++i)
    {
        cout << "Enter department name: ";
        cin >> dept;
        cout << "Enter chairperson name: ";
        cin >> chair;
        cout << "Enter number of courses: ";
        cin >> courses;
        CollegeDepartment temp(dept,chair,courses);
        collegeDepts[i] = temp;
        cout <<"\n";

    }

    for(i = 0; i < SIZE;++i)
    {
        cout <<collegeDepts[i];
    }

    return 0;
}
