// Program for array as an argument
#include<iostream>
#define clrscr() system("cls")
using namespace std;
int search(int ar[],int n,int s);
int main()
{
      int ar[500],n,i,s,f;
      clrscr();
      xyz:cout<<"Enter the limit";
      cin>>n;
      if(n>500)
      {
        cout<<"Invalid limit enter again";
        goto xyz;
      }
      else
      {
          cout<<"\nEnter elements in array";
          for(i=0;i<n;i++)
          cin>>ar[i];
          cout<<"\nEnter an element for search";
           cin>>s;
          f=search(ar,n,s);
          if(f==1)
          cout<<"\nSearching success";
          else
          cout<<"\nSearching not success";
      }
      
return 0;
}
int search(int ar[],int n,int s)
{
       int i;
       for(i=0;i<n;i++)
       {
            if(ar[i]==s)
             return 1;
       }
return 0;
}