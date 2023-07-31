#include<iostream>
using namespace std;

const int SIZE = 4;

class JobBid
{
   friend ostream& operator<<(ostream&, const JobBid&); //output or insertion operator
   friend istream& operator>>(istream&, JobBid&); //input or extraction operator

   private:
     int bidNumber;
     double price;
   public:
     JobBid(int n,double p);
     int operator<(const JobBid& jbd);

};
JobBid::JobBid(int n,double p)
{
    bidNumber = n;
    price = p;
}

int JobBid::operator<(const JobBid& jbd)
{
    int lowest = 0;
    if(price < jbd.price)
    {
        lowest = 1;
    }

   return lowest;
}
ostream& operator<<(ostream& out,const JobBid& jobBid)
{
    out << "Job bid number is "<<jobBid.bidNumber <<endl<<
    "Quoted price is "<<jobBid.price <<endl;
    return out;

}

istream& operator>>(istream& in,JobBid& jobBid)
{
    cout << endl; // to clear the buffer
    cout << "Enter job bid number: ";
    in >>jobBid.bidNumber;
    cout <<"Enter quoted price: ";
    in >>jobBid.price;
    cout<<endl;
    return in;

}

int main()
{
    JobBid bids[SIZE] ={JobBid(1,11.55),
                        JobBid(2,5.85),
                        JobBid(3,150.55),
                        JobBid(4,12.55)
                       };
     JobBid lowest(0,0.00);
     int temp;
     int x,y;
     cout <<"Lowest Bid is"<<endl;
     cout <<"**************"<<endl;
     lowest = bids[0];
     for(x = 1; x < SIZE;++x)
     {
        if(bids[x] < lowest)
        {
            lowest = bids[x];
        }

     }
    cout << lowest;

    return 0;
}
