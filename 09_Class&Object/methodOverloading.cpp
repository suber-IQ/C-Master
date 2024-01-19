// 👉 Method Overloading
// #include<iostream>
// using namespace std;

// class Test{
//       public:
//       int add(int a, int b);
//       int add(int a, int b,int c);
//       int add(int a, int b,int c,int d);
// };

// int Test::add(int a, int b){
//       int x = a + b;
//       return x;
// }
// int Test::add(int a, int b, int c){
//       int x = a + b + c;
//       return x;
// }
// int Test::add(int a, int b, int c,int d){
//       int x = a + b + c + d;
//       return x;
// }


// int main(){

//       Test T1;
//      int ans = T1.add(8,8);
//      int ans1 = T1.add(8,8,5);
//       cout << "ans1: " << ans << "\n" << "ans2: " << ans1 << endl;



//       return 0;
// }

// 👉 2. Program for method overloading
#include<iostream>
#define clrscr() system("cls")
using namespace std;
class Area
{
    public:
    float area(float r);
    float area(float l,float b);
};
float Area::area(float r)
{
         float A;
         A=3.14*r*r;
         return A;
}
float Area::area(float l,float b)
{
       float A;
       A=l*b;
       return A;
}

int main()
{
    clrscr();
    Area A;
    cout<<"Area is:" <<A.area(10.2,20.2);
  return 0;
}