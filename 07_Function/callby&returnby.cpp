// 👉 Program for call by Value and Return by value
#include<iostream>
using namespace std;

int add(int a,int b);
int main(){
  int a,b,c;
  cout << "Enter two number";
  cin>>a>>b;
  c = add(a,b); // 🎉 pass by value
  cout << "Addition is: " << c << endl;
return 0;
}

int add(int a,int b){
   int c;
   c = a + b;
   return c; // 🎉 return by value
}