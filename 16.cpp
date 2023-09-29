#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int matchsticks=21;
    int user_pick;
    int comp_pick;

    cout<<"hey player!! Matchsticks are 21 :";
    do {
    again:
    cout<<"\nenter your pick 1 or 2 or 3 or 4 : ";
    cin>>user_pick;
    if(user_pick>4 || user_pick<1)
    {
        cout<<"pick valid no of matchsticks : 1 ,2,3 or 4 : ";
        goto again;
    }
    comp_pick=5-user_pick;
    cout<<"computer has picked "<<comp_pick<<endl;
    
    matchsticks=matchsticks - (user_pick+comp_pick);
    cout<<"\nmatchstics remaining are : "<< matchsticks<<endl;
    cout<<"\n\nnow your turn\n";


    }while(matchsticks!=1);

    cout<<"1 matchstick left...you lost :-(";

    return  0;   

}