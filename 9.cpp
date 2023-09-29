#include<iostream>
using namespace std;
int main()
{
    int choice;
    int a,b,result;

     do
    {  

    cout<<"Enter the two numbers : ";
    cin>>a>>b; 

    again:
    cout<<"enter the operation you want to perform"<<endl<<"1.add   2.subtract   3.multiply   4.divide   0.exit  "<<endl;
    cin>>choice;

    
    switch (choice)
   
    {
          
    case 1:
        result=a+b;
        break;
    case 2:
        result=a-b;
        break;
    case 3:
        result=a*b;
        break;
    case 4:
        result=a/b;
        break;   
    
    default:
       cout<<"enter a valid choice"<<endl;
       goto again;
    
    case 0:
        cout<<"Thank you."<<endl;
        exit(1);
       
    }
    cout<<"result is "<<result<<endl;
       
} while (choice != 0);

return 0;
    
}//g++ 7.cpp