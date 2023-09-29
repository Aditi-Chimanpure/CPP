#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"enter three numbers : ";
    cin>>i,j,k;

    for(i=1;i<=3;i++)
    {
        for (j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
    
               if(i!=k && i!=j && j!=k)
               cout<<i<<j<<k<<endl;
                
            }
                       
        }
        
    }
    return 0;
}