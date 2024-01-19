//Program for Pointer in array
#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main()
{
      int ar[5];
      int i,*p,sum=0;
      clrscr();
      cout<<"Enter element in array";
      //input using index
      for(i=0;i<5;i++)
      cin>>ar[i];

      p=&ar[0];
      int max;
      max=ar[0];
      //output using address
      for(i=100;i<105;i++)
      {
        //   cout<<&ar[i]<<"\n";
        //    cout<<*p<<"\n";
        //    sum=sum+*p;
        if(*p>max)
            max=*p;
           ++p;
      }
      cout<<"\n Largest elements is: "<<max;
      return 0;
}