#include<iostream>
#include "Order.cpp"
#define ARRAY_SIZE 5

using namespace std;

int main()
{
   Order order[ARRAY_SIZE];
   int x;
   double t;
   for(x = 0; x < ARRAY_SIZE;++x)
   {
       try
       {
          cin >> order[x];
          order[x].CalculateTotal(order[x]);


       }
       catch(NonNumericException n)
       {
          cout <<"*****************************************"<<endl;
          cout << n.what()<<endl;
          cout <<"*****************************************"<<endl;

          if(order[x].getOrderNo() > 9999)
          {
              cout << "Re-enter number"<<endl;
              --x;
          }

          if((order[x].getQuantity() > 50) ||
             (order[x].getPrice() > 39.95))
          {
              order[x].setQuantity(0);
              order[x].setPrice(0);
          }



       }
   }

   //list all orders
   for(x = 0; x <ARRAY_SIZE;++x)
   {
       cout << order[x]<<endl;
   }
    return 0;
}

