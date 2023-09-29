#include<iostream>
using namespace std;
void getdate(int *d,int *m, int *y)
{   
   cout<<"Enter day,month and year : "<<endl;
   cin>>*d>>*m>>*y;
   
}
int main()
{
     int day,month,year;
     
     getdate(&day,&month,&year);
     
     cout<<"Date is :  "<<day<<"/"<<month<<"/"<<year;
     
     return 0;
}
