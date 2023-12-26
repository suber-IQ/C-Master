// 👉 Conditional Statements

#include<iostream>
using namespace std;

char customLower(char character){
      if(character >= 'A' && character <= 'Z'){
            return character + 32;
      }
      return character;
}

int main(){

// ❓ first test case

//  int n;
//  cout << "Enter a Number: " << endl;
//  cin>>n;
// 🔂 ****************
//  if(n)
//  cout << "hello\n";
//  else
//  cout << "end\n";
// 🔂 ****************
//   if(n > 10){
//       cout<< "hello\n";
//       cout << "friends\n";
//   }
// 🔂 ****************
// if(n > 10)
//  cout << "hello\n";
// //  cout << "friends\n";
// else
//   cout << "Bye\n";
//   cout << "Data\n";
// 🔂 ****************
// if(n > 10);;;
// ;
// ;
// ;
// ;;;;;;;;cout << "hello";;;;;;;;;;;;;;
// 🔂 ****************
// if(n==1)
//  cout << "one\n";
// if(n==2)
//  cout << "two\n";   
// if(n==3)
//  cout << "three\n";
// if(n==4)
//  cout << "four\n";
// if(n==5)
//  cout << "five\n";
// if(n<= 0 || n>5)
//  cout << "Invalid number\n";

// ❓ Check vowel and Consonent

char ch;
cout<< "Enter a character: " << endl;
cin>>ch;

ch = customLower(ch);

if(ch=='a' || ch=='i' || ch=='u' || ch=='e' || ch=='o')
 cout << "Vowel " << endl;
else
 cout << "Consonent" << endl;


      return 0;
}