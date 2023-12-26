// 👉  Negative Integer for Bitwise Operators

#include<iostream>
using namespace std;


int main(){
   
  //❓ Problem 1

  int a;
  a = -13 & 5;  // 🎉 output: 1

      //  16 8 4 2 1 = // 💁 trick get Binary 
//0....0 0 0 1 1 0 1 = 13
//1 1..1 1 1 0 0 1 0 = 1's complement     
//               + 1 = 2's complement     
//________________________________                    
//1 1..1 1 1 0 0 1 1 = -13
//&
//0 0....0 0 0 1 0 1 = 5
//________________________________                    
//0 0....0 0 0 0 0 1 = 1


cout << "Bitwise Operation of a: " << a << endl;

  // ❓Problem 2

//   🌟 If get negative binary into 2's complement

//1....1 1 1 1 1 0 1 = -3
//0 0..0 0 0 0 0 1 0 = 1's complement     
//               + 1 = 2's complement     
//________________________________                    
//0 0..0 0 0 0 0 1 1 = 3

// ❓ Example of Negative integer with bitwise operation

int n;
n = -4 & -11;  //🎉 output: -12

 //       16 8 4 2 1 = // 💁 trick get Binary 
//0....0 0 0 0 1 0 0 = 4
//1 1..1 1 1 1 0 1 1 = 1's complement     
//               + 1 = 2's complement     
//________________________________                    
//1 1..1 1 1 1 1 0 0 = -4

 //       16 8 4 2 1 = // 💁 trick get Binary 
//0....0 0 0 1 0 1 1 = 11
//1 1..1 1 1 0 1 0 0 = 1's complement     
//               + 1 = 2's complement     
//________________________________                    
//1 1..1 1 1 0 1 0 1 = -11

//✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️✴️

//  1 1..1 1 1 1 1 0 0 = -4
//&
//  1 1..1 1 1 0 1 0 1 = -11
//________________________________                    
//  1 1..1 1 1 0 1 0 0 = -12 output 🙋
//  0 0..0 0 0 1 0 1 1 = 1's complement     
//                 + 1 = 2's complement  
//________________________________                    
//  0 0..0 0 0 1 1 0 0 = 12

cout << "Bitwise Operation of n: " << n << endl;

// ❓Problem 3 with bitwise Operator OR(|)

  int k;
  k = -13 | 5;  // 🎉 output: 1

//  1 1..1 1 1 0 0 1 1 = -13
// |
//  0 0....0 0 0 1 0 1 = 5
//________________________________                    
//  1 1....1 1 0 1 1 1 = -9 output 🙋
//  0 0..0 0 0 1 0 0 0 = 1's complement     
//                 + 1 = 2's complement  
//________________________________                    
//  0 0..0 0 0 1 0 0 1 = 9    

cout << "Bitwise Opertion of k: " << k << endl;

//  ❓ Universal truth of all 1111111111 binary numbers
int j;
j = -6 | 5; // 🎉output: -1

cout << "Bitwise Opertion of j: " << j << endl;


//  ❓Problem 4 with left shifting

int d;
d = -4 << 3;


// //  1 1..1 1 1 1 1 0 0 = -4
//       1......1 1 1 0 0 0 0 0 = output -32 🙋 (3 left shift)
//       0......0 0 0 1 1 1 1 1 = 1's complement
//                          + 1 = 2's complement
//_________________________________________                    
//       0......0 0 1 0 0 0 0 0 = 32


cout << "Bitwise Opertion of d: " << d << endl;

//  ❓Problem 5 with right shifting (Universal truth)

int m;
m = -1 >> 13;  //🎉output:-  -1 (always give -1)

cout << "Bitwise Opertion of m: " << m << endl;




// 💁 Note:- 1. Universal truth:- if all binary is : 🌟 1 1 1 1 1 1 1 1 1 1 🌟 then output always -1.
// 💁 Note:- 2. Universal truth:- binary right shift with -1 >> 13 output is always -1.

   return 0;

}