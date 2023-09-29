#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
    int i=5,j,n,m;
    int row=5;
    int blank=0;
    int diff[]={1,3,5,7,9,11};
    int b=0,temp;
    
    do
    {
        cout<<endl;
       
        for (j=1;j<=i;j++)
        {
           
           cout<<j;
        }  
        
        //cout<<endl<<"to check "<<j; // 
        
        if(i==5)
        {
         temp=i-1;
        }
        //else
        //temp=i;
        //cout<<endl<<"to check "<<temp;
        

        for(m=0;m<blank;m++)
            {
               cout<<" ";
            } 
          
           
        for(n=temp;n>=1;n--)
           {
                cout<<n;
           }
           //cout<<endl<<"to check "<<n; 

        

        blank=diff[b++];
        i--;
        temp=i;
        //cout<<endl<<"to check "<<i; 
         
    }while(i!=0);
    

    return 0;
    
}
