// 👉 Switch Statements
#include<iostream>
using namespace std;


char customLower(char character){
       if(character >= 'A' && character <= 'Z'){
            return character + 32;
       }

      return character;
}


int main(){

//  ❓ checking vowel and consonant

char ch;
cout << "Enter a Character: " << endl;
cin>>ch;

ch = customLower(ch);

switch(ch){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      cout << "It is Vowel" << endl;break;
      default: cout << "Consonant" << endl;
}

 return 0;

}