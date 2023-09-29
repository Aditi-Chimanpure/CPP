#include<iostream>
using namespace std;
int main()
{
    float Average;
    int CPP,DS,OS,JAVA,DBM;
    cout<<"Enter the marks of Subject \n1.CPP\n2.DS,\n3.OS,\n4.JAVA,\n5.DBM\n";
    cin>>CPP>>DS>>OS>>JAVA>>DBM;
    Average=(float)(CPP+DS+OS+JAVA+DBM)/5;
    cout<<Average;

    return 0;

}// g++ 2.cpp 