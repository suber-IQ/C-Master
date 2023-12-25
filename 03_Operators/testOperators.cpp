// 👉 Increment and Decrement
#include<iostream>
using namespace std;


int main(){

   // ❓ Problem 1
//     int a = 5,b;
//     b=++a + a++ + ++a;
//     cout << "Value of a: " << a << endl;
//     cout << "Value of b: " << b << endl;

   // ❓ Problem 2
    int a = 10,b;

    //Rules:-   pre ➡️ arthematic ➡️ asign ➡️ post
    b = a++ + ++a + ++a; // 🔎 solve: b = 12 + 12 + 12 (two increment a = a + 2(two increment) => a = 10 + 2 = 12 place into per(all) (a) positions)
    //b = 35 ans then a = 12 + 1 => 13(post increment is one so add one)
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

   // ❓ Problem 3
//      int a = 10,b;

//     //Rules:-   pre ➡️ arthematic ➡️ asign ➡️ post
//     b = ++a + ++a + a++ + ++a; 
//     cout << "Value of b: " << b << endl;  // 🎉 output:- 50
//     cout << "Value of a: " << a << endl;  // 🎉 output:- 14

   // ❓ Problem 4
//     int a = 10, b, c;
//     b = --a;
//     a = b++;
//     c=--b;
//     b=a++;
//     cout << "Value of a: " << a << endl; // 🎉 output:- 10
//     cout << "Value of b: " << b << endl; // 🎉 output:- 9
//     cout << "Value of c: " << c << endl; // 🎉 output:- 9


    // 💁 Note:  

      return 0;
}