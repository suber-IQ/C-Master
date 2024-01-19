// 👉 Function declaration and definition
#include<iostream>
using namespace std;

void add(); // 🎉 declaration
int main(){
 cout << "Function call 1" << endl;     
 add(); // 🎉 calling
 cout << "Function call 2" << endl;     
 add(); // 🎉 calling
 cout << "Function call 3" << endl;     
 add(); // 🎉 calling
 cout << "Function call 4" << endl;     
 add(); // 🎉 calling
   
}

void add(){  // 🎉 definition
      int a,b,c;
      cout << "Enter two number" << endl;
      cin>>a>>b;
      c = a + b;
      cout << "Addtion is: " << c << endl;
}