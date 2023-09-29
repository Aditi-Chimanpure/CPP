#include<iostream>
using namespace std;
void charline(char ch,int length)
{
   for(int i=1;i<=length;i++)
   cout<<ch;
   cout<<endl;
   return;
}

int main()
{
  
  char ch=95;
  int length=30;

  charline(ch,length);
  cout<<"Data type"<<"\t"<<"size in byets";
  cout<<endl;
  charline(ch,length);
  cout<<"Integer"<<'\t'<<'\t'<<sizeof(int);
  cout<<endl;
  charline(ch,length);
  cout<<"charcter"<<'\t'<<sizeof(char);
  cout<<endl;
  charline(ch,length);
  cout<<"float"<<"\t"<<'\t'<<sizeof(float);
  cout<<endl;
  charline(ch,length);
  
  return 0;
  
}


