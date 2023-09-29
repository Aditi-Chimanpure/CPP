#include<iostream>
using namespace std;

void Accept(int arr[3][3]);
void display (int arr[3][3]);
void Init(int arr[3][3]);
void mul (int arrA[3][3],int arrB[3][3],int arrC[3][3]);

int main()
{
	int i,j,num;
	int arrA[3][3];
	int arrB[3][3];
	int arrC[3][3];
	
	Accept(arrA);
	display(arrA);
	Accept(arrB);
	display(arrB);
	Init(arrC);
	mul(arrA,arrB,arrC);
	

	return 0;	
}

void Accept(int arr[3][3])
{
	int i,j,num;
 	cout<<"Enter the 9 elemnts of Matrix : ";
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		       	cin>>num;
			arr[i][j]=num;
		
		}
	}
	
	cout<<endl;
}

void Init(int arr[3][3])

{
	int i,j,num;
 	cout<<"Initializing elemnts of Matrix : ";
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		       	
			arr[i][j]=0;
			
		}
	}
	
	cout<<endl;
}


void display (int arr[3][3])
{
	int i,j;
	cout<<"Elements of matrix are : "<<endl;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void mul (int arrA[3][3],int arrB[3][3],int arrC[3][3])
{

		
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				arrC[i][j]=arrC[i][j]+(arrA[i][k]*arrB[k][j]);	
			}
			
		}
	}
					
display(arrC);
}

