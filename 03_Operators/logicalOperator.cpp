// 👉 Logical
#include<iostream>
using namespace std;


int main(){

 
 
   // ❓ Problem 1
//    int a,b,c;
//     cout << "Enter two num: " << endl;
//     cin>>a>>b;
//     c = a && b;  // 🔎 if a = 5,b = 8 then result is 1. OR if a = 0, b = 8 then result is 0
//     cout << c << endl;

   // ❓ Problem 2
//    int a, b, c;
//    a = 10;
//    b = 5;

//    c = (++a>20) && (++b<8);  //🔎 short Circuit of &&(AND) Operator (if one condition is false then not moving or Checking after another condition and then Short Circuit of &&(AND) Operator )
//    cout << "a: " << a << " b: " << b << " c: " << c << endl; //🎉output:- a = 11,b = 5 & c = 0(false).


   // ❓ Problem 3
//    int a, b, c;
//    a = 90;
//    b = 5;

//    c = (++a>50) || (++b<8);  //🔎 short Circuit of ||(OR) Operator (if one condition is true then not moving or Checking after another condition and then Short Circuit of ||(OR) Operator )
//    cout << "a: " << a << " b: " << b << " c: " << c << endl; //🎉output:- a = 91,b = 5 & c = 1(true).

   // ❓ Problem 4

   int a,b,c;
   cout << "Enter two Numbers: " << endl;
   cin>>a>>b;
   c= !(a>b);
   cout << "c: " << c << endl; 
   




    // 💁 Note:  leaving 0(zero:- false(0)) aside, all numbers are true(1) and be character

      return 0;
}