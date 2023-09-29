#include<iostream>
using namespace std;

double power(double base, int pow)
{
	double a = 1;
	
	for(int i = 1 ; i <= pow ; i++)
	{
		a = a*base;
	}
		
	return a;
}

int fact(int n)
{

	for (int i = n-1 ; i>1 ; i--)
	{
		n = n*i;
	}
	
	return n;
}


int main()
{

	double x;
	double sum = 0;

	cout << "enter the radian value: ";
	cin >> x;
	cout << endl;
	
	int flag = 1;
	
	//cout << "power is: " << power(57.29,3) << endl << "fact is: " << fact(3); 
	
	
	for(int i = 1; i < 10; i+=2)
	{
		sum = sum + ((power(x,i)/fact(i)) * flag);	
		flag*=-1;
	}
	cout << "sine angle is: " << sum << endl;
	
	return 0;
}



