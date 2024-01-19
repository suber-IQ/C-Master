// 👉  Default Arguments in function

#include<iostream>
using namespace std;

// 🎄 Default argument gives last to first.
// int add(int a,int b,int c);
// int add(int a,int b=50,int c); //🎉 error 
// int add(int a,int b=50,int c = 20); //🎉 correct 
// int add(int a,int b,int c = 20); //🎉 correct 
// int add(int a = 20,int b = 30,int c = 20); //🎉 correct 
int add(int a = 5,int b = 10,int c=20); //🎉 default argument
float area(float r,float PI = 3.14f); //🎉 default argument
int main(){

cout << add(50,20,40) << endl;
cout << area(4.5f);
      return 0;
}

int add(int a,int b,int c){
      int x;
      x = a + b + c;
      return x;
}
float area(float r,float PI){
      float a = PI * (r * r);
      return a;
}