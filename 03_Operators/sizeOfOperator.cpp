// 👉 Size of Operator
#include<iostream>
using namespace std;

class Test1{
  double d;
  double r;
  double j;
//   int n;   
//   char k;
// char k;
// int n;
// float f;
};
class Test2:public Test1{
   
};
int main(){

//       cout << "size of integer " << sizeof(34) << endl;
//       cout << "size of double " << sizeof(34.66) << endl;
//       cout << "size of float " << sizeof(34.66f) << endl;
//       cout << "size of char " << sizeof('y') << endl;
// cout << endl;
//       cout << "size of integer " << sizeof(int) << endl;
//       cout << "size of double " << sizeof(double) << endl;
//       cout << "size of float " << sizeof(float) << endl;
//       cout << "size of char " << sizeof(char) << endl;


Test1 T;
cout << "size of empty Test 1 class: " << sizeof(T) << endl;
Test2 T2;
cout << "size of empty Test 2 class: " << sizeof(T2) << endl;

}