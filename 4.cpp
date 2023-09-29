// swapping of two numbers
#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    // int swap;
    cout<<"enter two numbers : ";
    cin>>num1>>num2;
    cout<<"\nentered numbers are num1 : "<< num1<<" num2 : "<<num2;
    // swap=num1;
    // num1=num2;
    // num2=swap;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"\nafter swapping num1 : "<<num1<< "  num2 : "<< num2;
   
    return 0;
    
}//g++ 4.cpp
