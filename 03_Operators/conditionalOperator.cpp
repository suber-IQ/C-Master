// 👉 Conditional Operators

#include<iostream>
using namespace std;

char CustomTolower(char character){
      if(character >= 'A' && character <= 'Z'){
            return character + 32;
      }
      return character;
}

int main(){
      
      // ❓ Problem 1 Check Even or Odd Number

      // int n;
      // cout << "Please Enter a Number: " << endl;

      // cin>>n;
      // // n%2==0 ? cout << "Even Number": cout << "Odd Number" << endl;
      // n%2? cout << "Odd Number" << endl : cout << "Even Number" << endl;

      // ❓ Problem 2
      //   (10==10==10)?cout << "hello is Right\n": cout << "Bye is Wrong\n";


      // ❓ Problem 3
      //   (80>50>30)?cout << "hello is Right\n": cout << "Bye is Wrong\n";

      // ❓ Problem 4 
      // int a,b,c,d,x,y,z;
      // system("cls");
      // cout << "Enter Four Number: " << endl;
      // cin>>a>>b>>c>>d;
      // x=a>b?a:b;
      // y=c>d?c:d;
      // z=x>y?x:y;

      // cout << "Greater No is: " << z << endl;

      // ❓ Problem 5

      // char ch;
      // cout << "Enter a Character: " << endl;
      
      // cin>>ch;
      // ch = CustomTolower(ch);

      // // ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='u' || ch=='U' || ch=='o'|| ch=='O' || ch=='i' || ch=='I' ? cout << "It is Vowel\n" : cout << "It is Consonant \n"; 
      // ch=='a' || ch=='e' || ch=='u' || ch=='o' || ch=='i' ? cout << "It is Vowel\n" : cout << "It is Consonant \n"; 

      // ❓ Problem 6
      
      int a,b,c;
      a = 50;
      b= 70;

      c=a>b?a:b;
      cout << "greater number: " << c <<endl;



        



      return 0;
}