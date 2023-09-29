#include<iostream>
using namespace std;
int main()
{ 
   char ch;
   again:
   cout<<"enter a character: ";
   cin>>ch;
   
   if((ch>122 || ch<97) && (ch>90 || ch<65))
   {
     cout<<"Enter a valid alphabet: "<<endl;
     goto again;
   }
    
   if(ch<123 && ch>96)
   {
    
    ch=ch-32;
   
   }
   
   else if(ch<91 && ch>64)
   {
    
    ch=ch+32;
   
   }
   
   //cout<<"Opposite Character case = "<<;
   printf("Opposite Character case = %c ",ch);


return 0;
}
