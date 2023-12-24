// 👉 Integer Representation of c++
#include<iostream>
using namespace std;

//🌟 octal range = 0 - 7 ; base = 8
//🌟 hexadecimal range = 0 - 15 ; base = 16
//🌟 decimal range = 0 - 9 ; base = 10; 10 = A, 11 = B, 12 = C, 13 = D, 14 = E, 15 = F;


int main(){
      // ❓ Question 1
      //  unsigned int a = 0x2B;  //🔍 hexadecimal representation
      // cout << a << endl; //🎉 output :- 43 => //🔍 Result Only Decimal 

      // ❓ Question 2

      // unsigned int a = 015 + 0x13; // 🔍 octal & hexadecimal representation
      // cout << a << endl; //🎉 output :- 32 => //🔍 Result Only Decimal 

      // ❓ ✴️Question 3 (*️⃣important)
      //   unsigned int a = 019; //🔍 🎗️ERROR octal range only 0 - 7 not to be 9
      //   cout << a << endl; //🎉 output:- 🎗️Error 

      // ❓ Question 2
      //      int a = 10;  // 🔍 decimal number
      //      cout << a << endl; //🎉 output:- 10; => decimal number

      // ❓ Question 2
            // unsigned int a = 0xface; // 🔍 hexadecimal number
            // cout << a << endl; //🎉 output:- 64206 => decimal number


      // 💁 NOTES:- Any integer representation(oct,hexa,decimal) calculation will be output given the 🌠 decimal 🌠 value;

      return 0;
}