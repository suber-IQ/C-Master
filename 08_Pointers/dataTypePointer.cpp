// Program for Pointer data type
#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main()
{
    int i,*p1;
    float f,*p2;
    char c,*p3;
    double d,*p4;
    clrscr();
    cout<<"\nsize of int: "<<sizeof(i);
    cout<<"\nsize of float: "<<sizeof(f);
    cout<<"\nsize of char: "<<sizeof(c);
    cout<<"\nsize of double: "<<sizeof(d);
    cout<<"\n--------------------------------------";
        
    cout<<"\nsize of int pointer: "<<sizeof(p1);
    cout<<"\nsize of float pointer: "<<sizeof(p2);
    cout<<"\nsize of char pointer: "<<sizeof(p3);
    cout<<"\nsize of double pointer: "<<sizeof(p4);
  cout<<"\n--------------------------------------";
   cout<<"\nsize of int pointer: "<<sizeof(*p1);
    cout<<"\nsize of float pointer: "<<sizeof(*p2);
    cout<<"\nsize of char pointer: "<<sizeof(*p3);
    cout<<"\nsize of double pointer: "<<sizeof(*p4);
    return 0;
}