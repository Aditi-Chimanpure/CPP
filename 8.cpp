#include<iostream>
using namespace std;
int main()
{  
    float basic_sal,sales_amount,sal;
    
    cout<<"enter basic salary and sales ammount: ";
    cin>>basic_sal>>sales_amount;

    if(sales_amount>5000 && sales_amount < 7500)
    {
        sal=basic_sal*3/100+basic_sal;
    }

    else if(sales_amount>7501 && sales_amount < 10500)
    {
        sal=basic_sal*8/100+basic_sal;
    }
    
     else if(sales_amount>10501 && sales_amount < 15000)
    {
        sal=basic_sal*11/100+basic_sal;
    }                                                                                               
    
     else if(sales_amount>15000)
    {
        sal=basic_sal*15/100+basic_sal;
    }

    cout<<"salary is "<<sal;

    return 0;

}