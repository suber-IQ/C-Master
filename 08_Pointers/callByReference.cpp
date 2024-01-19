//Program by call by reference
#include<iostream>
#define clrscr() system("cls")
using namespace std;
//void xyz(int *a);
void swap(int *a,int *b);

int main()
{
    int a,b;
     clrscr();
    cout<<"\nEnter two number: ";
    cin>>a>>b;
    cout<<"\n Before swaping: "<<a <<" "<<b;
    swap(a,b);
        cout<<"\n After swaping: "<<a <<" "<<b;
    // //xyz(a); // call by value
    // xyz(&a);  // call by reference
    // cout<<a;
    return 0;
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    
}

// void xyz(int *a)
// {
//     ++*a;
// }