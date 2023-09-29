#include<iostream>
using namespace std;
int main()
{  
    int year,lp;
    cout<<"enter year : ";
    cin>>year;
    lp=year%4;
    //lp==0? cout<<year<<" is a leap year":cout<<year<<" is NOT a leap year";
    // if(lp==0)
    // {
    //     cout<<year<<" is a leap year";

    // }
    // else
    // {
    //      cout<<year<<" is NOT a leap year";
    // }
    if((year%100==0 && year%400==0)||(year %100 !=0 && year%4==0))
    cout<<year<<" is a leap year";
    else
    cout<<year<<" is NOT a leap year";
    
    return 0;
}// g++ 7.cpp