// 👉  Bitwise Operator (for Positive)
#include<iostream>
using namespace std;


int main(){

 //❓Problem 1 bitwise operation only integer

 int a;
 a = 12 & 14;

 //  8 4 2 1  // 💁 Trick for get Binary
 //  1 1 0 0 = 12 (combination of addtion number coming 12 into trick number 8 , 4, 2, 1 => 8 + 4 = 12 then position write with 1 and another place at 0)
// & 1 1 1 0 = 14 
//__________________
//   1 1 0 0 = 12
 cout << "Bitwise Operation of a: " << a << endl; // 🎉 output:- 12

//.........64 32 16 8 4 2 1 💁 Trick for get Binary

 //❓Problem 2 Same number bitwise operation on &(AND) Operator

 int x;
 x = 8 & 8;
 //  8 4 2 1  // 💁 Trick for get Binary
 //  1 0 0 0 = 8
// & 1 0 0 0 = 8 //🔎 if any same number(8 & 8)(with AND(&) Operator) on bit operation ans give same number(8)
//__________________
//   1 0 0 0 = 8 output

 cout << "Bitwise Operation of x: " << x << endl; // 🎉 output:- 8

 //❓Problem 3 Same number bitwise operation on |(OR) Operator

 int k;
 k = 13 | 13;
 //  8 4 2 1  // 💁 Trick for get Binary
 //  1 1 0 1 = 13
// | 1 1 0 1 = 13 //🔎 if any same number(13 | 13)(with OR(|) Operator) on bit operation ans give same number(13)
//__________________
//   1 1 0 1 = 13 output


cout << "Bitwise Operation of k: " << k << endl; // 🎉 output:- 13

 //❓Problem 4 Same number bitwise operation on ^(XOR) Operator

 int m;
 m = 9 ^ 9;
 //  8 4 2 1  // 💁 Trick for get Binary
 //  1 0 0 1 = 9
// ^ 1 0 0 1 = 9 //🔎 if any same number(13 ^ 13)(with XOR(^) Operator) on bit operation ans give 0.
//__________________
//   0 0 0 0 = 0 output


cout << "Bitwise Operation of m: " << m << endl; // 🎉 output:- 0

 //❓Problem 5  ^(XOR) Operator

 int d;
 d = 9 ^ 6;

 //  8 4 2 1  // 💁 Trick for get Binary
 //  1 0 0 1 = 9
// ^ 0 1 1 0 = 13 
//__________________
//   1 1 1 1 = 15

cout << "Bitwise Opertions of d: " << d << endl;  // 🎉 output:- 15


//❓ Question 1 Bitwise Operator

int l;
l = ((5 & 3) | 7) ^ 6;

 //  8 4 2 1  // 💁 Trick for get Binary
 //  0 1 0 1 = 5
// & 0 0 1 1 = 3 
//__________________
//   0 0 0 1 = 1
// | 0 1 1 1 = 7
//__________________
//   0 1 1 1 = 7
// ^ 0 1 1 0 = 6
//__________________
//   0 0 0 1 = 1 output:- 1 

cout << "Bitwise Opertions of l: " << l << endl; // 🎉 output:- 1


//❓ Question 2 Bitwise Operator (left shift)

int n;
// n = 5 << 3; //🎉 output:- 40
n = 4 << 3; // 🎉 output:- 32
// n = 8 << 5; // 🎉 output:- 256


   // 32 16 8 4 2 1  
// 0000.....0 1 0 1 = 5
// 0..0 1 0 1 0 0 0 = sifting 3
//_______________________
      // output :- 40

cout << "left sifting of n: " << n << endl; 


//❓ Question 3 Bitwise Operator (Right shift)

int p;
// p = 5 >> 3; //🎉 output:- 0
p = 23 >> 3; // 🎉 output:- 2
// p = 8 >> 5; // 🎉 output:- 0
// p = 15 >> 3; // 🎉 output:- 1


   // 32 16 8 4 2 1  
// 0000.....0 1 0 1 = 5
// 0000.....0 0 0 0 = sifting 3
//_______________________
      // output :- 0



cout << "right sifting of p: " << p << endl; 



//❓ Level Up Question 1 Bitwise Operator

unsigned int j;

j = (((5 & 5) | 5) << 3) >> 2; // 🎉 output:- 10


cout << "Bitwise Operation of j: " << j << endl;

//❓ Tricky Question 1 Bitwise Operator (XOR(^)) 

int f, e;
f = e^e;  // 🎉 output:- 0 (e= garbage value  then e = e into same value = 0)

cout << "Bitwise Operation of f: " << f << endl;

//❓ Tricky Question 1 Bitwise Operator 

int s,t;
s = t^t; // (garbage value ^ garbage value => 0 always)

cout << "Bitwise Operation of s: " << s << endl;




// 💁 Note:- 1. Bitwise operation only for apicable 🌟integer🌟 not be 🌟decimal(not use)🌟
          // 2. Universal truth is: same number aside with AND(&) or OR(|) Operator 🌟 answer is same number🌟 Ex:- ( a = 5 & 5 => 5 output) or (a = 6 | 6 => 6 output) 
          // 3. Universal truth is: same number aside with XOR(^) Operator 🌟 answer is 0🌟 Ex:- ( a = 5 ^ 5 => 0 output) or (a = 6 ^ 6 => 0 output) 
// 💁 Tricks:- Solve of Left shifting(<<)(negative and positive number apicable)  EX:- ⏩5<<3 => 2 power of 3 * 5 = 2*2*2 * 5 => 40 ⏪
                                                                                     //⏩4<<3 => 2 power of 3 * 4 = 2*2*2 * 4 => 32 ⏪
                                                                                     //⏩10<<2 => 2 power of 2 * 10 = 2*2 * 10 => 40 ⏪
// 💁 Tricks:- Solve of right shifting(>>)(only positive number apicable)  EX:- ⏩23>>3 🌞 n = even -> n/2, odd -> (n - 1)/2;🌞 ⏪ 23 is odd => (n - 1)/2= (23 - 1)/2 = 11 (1 shift completed) Then, (11 - 1)/2 = 5 (2 shift completed) then, (5 - 1)/2 = 2 (3 shift completed) 🌠 Output:- 2
return 0;



}