#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int length=0,breadth=0;
    cout<<"enter breadth and  length  : ";
    cin>>breadth>>length;

    for(int i=1;i<=breadth;i++)
    {
        for(int j=1;j<=length;j++)
        {
            if(i==1 ||   j==1 ||  j==length || i==breadth )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }

    cout<<'\n';       

    }

    return 0;
}