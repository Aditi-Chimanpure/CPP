#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void occurences (string str,int len);
void blankspace(string str, int len);
int main()
{
	string str1;
	int len;
	
	cout<<"Enter your name : ";
	getline(cin,str1);
	cout<<endl;
	
	len=str1.length();
	//cout<<"String lenght is : "<<len<<endl;
	
	//occurences(str1,len);
	blankspace(str1,len);
	
	
	
	
    	return 0;
}

void occurences (string str,int len)
{
	int count=0,i=0;
	char ch;
	cout<<"Enter the character  : ";
	cin>>ch;
	
	
	while(i<=len)
	{
	  
	  if(str[i]==ch)
	  {	
	  	count++;
	  }
	  i++;
	}
	
	cout<<"occurences of char "<<ch<<" in string "<<str<<" are : "<<count<<endl;

}

void blankspace(string str, int len)
{
	int count=0,i=0;
	
	while(i<=len)
	{
	  
	  if(str[i]==' ')
	  {	
	  	count++;
	  }
	  //cout<<"count "<<count<<endl;
	  i++;
	}
	
	cout<<"blank spaces in string "<<str<<" are : "<<count<<endl;
	

}



