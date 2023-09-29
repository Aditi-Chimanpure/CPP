#include<iostream>
using namespace std;
void max(int a[5])
{  
    int max=0;
    int i=0;
  
    while(i<5)
    {
    if (max>a[i])
    i++;
    else 
    {
    max=a[i];
    i++;
    }
        
    } 
    
    cout<<"Maximum of the integer is : "<<max<<endl;
    
}

void min(int a[])
{  
    int min=a[0];
    int i=1;
       
    while(i<5)
    {
    if (min<a[i])
    i++;
    else 
    {
    min=a[i];
    i++;
    }
        
    } 
    
    cout<<"Minimum of the integer is : "<<min<<endl;
    
}

void multiply(int a[])
{ 
   int i=0;
   int m=5;
   int m_arr[5];
   
   while(i<5)
   {
    m_arr[i]=a[i]*m;
    i++;
   }
   cout << "after multiplication: " << endl;
   for(int j=0;j<5;j++)
   cout<<m_arr[j]<<" ";
   cout << endl; 

}

int main()
{  
   int arr[5];
  
   
   cout<<"Enter five integers : ";
   for(int i=0;i<5;i++)
   cin>>arr[i];
   
   max(arr);
   min(arr);
   
   multiply(arr);
   
   
   return 0;


}
