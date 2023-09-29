#include<iostream>
using namespace std;

int main()
{
  int num;
  int rem;
  cout<<"Enter a number : ";
  cin>>num;
  
  for(int a=2;a<=num/2;a++)
  {
       rem=num%a;
  }
  if(rem==0)
  cout<<"number "<<num<< " is not a prime";
  else
  cout<<"number "<<num<<" is prime";


return 0;

}
