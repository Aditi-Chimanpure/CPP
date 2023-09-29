#include<iostream>
using namespace std;
int main()
{
    float bs,hra,da,pf,gs,ns;
    cout<<"enter basic salary : ";
    cin>>bs;
    cout<<bs<<endl;
    hra=bs*15/100;
    cout<<hra<<endl;
    da=bs*30/100;
    cout<<da<<endl;
    gs=bs+da+hra;
    cout<<gs<<endl;
    pf=gs*12.5/100;
    cout<<pf<<endl;
    ns=gs-pf;
    cout<<"Net salary is "<<ns;
    
    return 0;

}// g++ 5.cpp