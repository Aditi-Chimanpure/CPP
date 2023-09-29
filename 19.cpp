#include<iostream>
using namespace std;

void fibbonacci (int terms)
{
  int t1=0,t2=1;
  int next_t;
  int count=3;
  cout<<t1<<" "<<t2<<" ";
  
  
  while(count<=terms)
  {
    next_t=t1+t2;
    cout<<next_t<<" ";
    t1=t2;
    t2=next_t;
    
    count++;
   }
   
    return;  
}

int main()
{
  int terms;
  cout<<"Enter the number of terms : ";
  cin>>terms;
  
  fibbonacci(terms);
  
  return 0;

}
