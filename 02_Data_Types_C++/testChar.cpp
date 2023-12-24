// 👉 program for character Data type

#include<iostream>
#define clrscr() system("cls");
using namespace std;

int main(){
      // ❓1. if give string into char data type then give output is last character of given string

      // char ch;
      // clrscr();
      // ch = 'sumit kumar'; 
      // cout << ch << endl;  // 🎉 output:- r

      //  ❓ Example of other 
      char ch;
      int x;
      cout << "Enter a character ";
      cin>>ch;
      x=ch;
      cout << "\ncharacter value is: " << ch;
      cout << "\nAscii value is: " << x;
      // char ch;
      // clrscr();
      // ch = '10';
      // ch += 20;
      // cout << ch << endl;
      return 0;
}