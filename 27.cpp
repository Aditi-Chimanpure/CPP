#include<iostream>
using namespace std;

void Accept(int arr[3][3]);
void display (int arr[3][3]);
void transpose (int arr[3][3]);
void add(int arr[3][3],int arr2[3][3]);

int main()
{
	int i,j,num;
	int arr[3][3];
	int arr2[3][3];
	Accept(arr);
	display(arr);
	transpose(arr);
	//Accept(arr2);
	//display(arr2);
	//add(arr,arr2);
	
	
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
			cout<<arr[i][j]<<" ";
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

void transpose (int arr[3][3])
{
	int arr_t[3][3];
	int i,j;
	
	for (j=0;j<3;j++)
	{
		for (i=0;i<3;i++)
		{
			arr_t[i][j]=arr[j][i];
		}
		
	}
	cout<<"Transpose of matrix is ";
	display(arr_t);
}

void add(int arr[3][3],int arr2[3][3])
{
	int arr_res[3][3];
	int i,j;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			arr_res[i][j]=arr[i][j]+arr2[i][j];
		}
		
	}
	cout<<"Resultant matrix is : ";
	display(arr_res);
}





