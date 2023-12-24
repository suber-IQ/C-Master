// 👉 swap number
#include<iostream>
using namespace std;


int main(){

      // ❔ Method 1
      // int a, b, c;
      // cout << "Enter two numbers: " << endl;
      // cin>>a>>b;
      // cout << "Before swaping: " << "a: " << a << " b: " << b << endl;
      // c = a;
      // a = b;
      // b = c;
      // cout << "After swaping: " << "a: " << a << " b: " << b << endl;

      // ❔ Method 2 (minimize space) : swap without using third variable

      int a, b;
      cout << "Enter two numbers: " << endl;
      cin>>a>>b;
      cout << "Before swaping: " << "a: " << a << " b: " << b << endl;
      a = a+b; //:- a = 20 , b = 40 => a = 60;
      b = a-b; //:- 60-40 => b = 20;
      a = a-b; //:- 60 - 20 => a = 40;
      cout << "After swaping: " << "a: " << a << " b: " << b << endl;

      return 0;
}