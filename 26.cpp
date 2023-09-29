#include<iostream>

using namespace std;
int main()
{
	int size=5;

  	int arr[size]={0,1,2,3,4};
  	
  	int element,index;
  	
  	cout<<"Enter the element to be added : ";
  	cin>>element;
  	cout<<endl;
  	cout<<"Enter the index : ";
  	cin>>index;
  	
  	cout<<endl<<"Before "<<endl<<"Array elements are : ";
  	for (int i=0;i<size;i++)
  	{
   		cout<<arr[i]<<" ";
   		
  	}
  	
  	for(int i=size;i>=index;i--)
  	{
  	  
  		arr[i]=arr[i-1];
  		if(i==index)
  		{
  		 arr[i]=element;
  		}
  	  
  	}
  	cout<<endl<<"After "<<endl<<"Array elements are : ";
  	for (int i=0;i<size+1;i++)
  	{
   		cout<<arr[i]<<" ";
   		
  	}
	return 0;	
	

}
