// 👉  get & getline
#include<iostream>
#include<fstream>
using namespace std;

int main(){
     char name[20];
     char college[20];
     cout << "Enter name: " << endl;
//      cin.get(name,20);
     cin.getline(name,20);
     cout << "Enter college: " << endl;
     cin.get(college,20);
     cout << name << endl;
     cout << college << endl;


      return 0;
}