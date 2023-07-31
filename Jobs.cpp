#include<iostream>
using namespace std;
class Job
{
   friend ostream& operator<<(ostream&, const Job&); //output or insertion operator
   friend istream& operator>>(istream&, Job&); //input or extraction operator

   private:
   int jobNumber;
   int completionTime;
   double hourlyRate;

   public:
    Job(int,int,double);
    Job operator+(Job);
    Job operator-(Job);
    void showJobCompletionTime();
};

Job::Job(int no, int time,double rate)
{
    jobNumber = no;
    completionTime = time;
    hourlyRate = rate;
}
void Job::showJobCompletionTime()
{
    cout <<"Job completion time = " <<completionTime<<endl;
}

Job Job::operator+(Job job)
{
    Job total(0,0,0);
    total.completionTime = completionTime + job.completionTime;
    return total;
}

Job Job::operator-(Job job)
{
    Job total(0,0,0);
    total.completionTime = completionTime - job.completionTime;
    return total;
}
ostream& operator<<(ostream& out,const Job& job)
{
    out << "Job number is "<<job.jobNumber <<endl<<
    "Time to complete job is "<<job.completionTime <<endl<<
    "Hourly rate is "<<job.hourlyRate<<endl;
    return out;

}

istream& operator>>(istream& in,Job& job)
{
    cout << endl; // to clear the buffer
    cout << "Enter job number: ";
    in >>job.jobNumber;
    cout <<"Enter time to complete job: ";
    in >>job.completionTime;
    cout <<"Enter Hourly rate is: ";
    in >>job.hourlyRate;
    cout<<endl;
    return in;

}
int main()
{
    Job job(0,0,0);
    Job job1(0,0,0);
    Job ans(0,0,0);
    Job ans1(0,0,0);
    cin >> job;
    cout<<job;
    cin >> job1;
    cout<<job1;
    ans = job + job1;
    ans1 = job - job1;
    cout <<"\n"<<endl;
    cout <<"overloaded operator + \n";
    cout <<"***********************\n";
    ans.showJobCompletionTime();
    cout <<"\n";
    cout <<"overloaded operator - \n";
    cout <<"***********************\n";
    ans1.showJobCompletionTime();

   return 0;
}
