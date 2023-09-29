#include<iostream>
using namespace std;

int main()
{

 int number,rem,digit,sum=0,temp;
 int x=1;
 cout<<"enter a number : ";
 cin>>number;
 cout<<"enter the number of digits in given number : ";
 cin>>digit;
 temp=number;
 
 
 while(number>0)
 {
   x=1;
   rem = number%10;
   
   for(int i=1;i<=digit;i++)
   {
     x=x*rem;
   }
   
   sum=sum+x;
   
   number=number/10;
   
 }
 if (temp==sum)
 cout<<"entered number is a armstrong number ";
 else
 cout<<"entered number is not a armstrong number ";

return 0;

}
