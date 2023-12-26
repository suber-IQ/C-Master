// goto Statement 
#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main()
{
    int h,e,c,m,total,per;
    clrscr();
    hindi:cout<<"\nEnter Marks of Hindi";
    cin>>h;
    if(h<0|| h>100) 
    {
        cout<<"\n Invalid marks enter again";
        goto hindi;
    }
    eng:cout<<"\nEnter Marks of English";
    cin>>e;
    if(e<0||e>100) 
    {
        cout<<"\n Invalid marks enter again";
        goto eng;
    }
   comp:cout<<"\nEnter Marks of Computer";
    cin>>c;
    if(c<0||c>100) 
    {
        cout<<"\n Invalid marks enter again";
        goto comp;
    }

    math:cout<<"\nEnter Marks of Maths";
    cin>>m;
    if(m<0||m>100) 
    {
        cout<<"\n Invalid marks enter again";
        goto math;
    }

    total=h+e+c+m;
    cout<<"\n Total Marks: "<<total;
    per=total/4;
    cout<<"\n Percentage : "<<per<<"%";
    if(per<=35)
      cout<<"\nYou are Fail";
   else if(per>=35 && per<45)  
      cout<<"\nIII Dvision";
    else if(per>=45 && per<60)  
    cout<<"\nII Dvision";
    else
    cout<<"\nI Dvision";


    return 0;
}