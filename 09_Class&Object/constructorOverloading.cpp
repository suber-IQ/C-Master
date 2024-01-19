// 👉 Constructor Overloading
#include<iostream>
#define clrscr() system("cls")
using namespace std;
// class Test
// {
//       int a,b,c,d;
//       public:
//       Test(int x,int y,int z)
//       {
//        cout<<"\nConstructor with  3  argument";
//         a=x;
//         b=y;
//         c=z;
//         } 
//       Test(int x,int y)
//       {
//         cout<<"\nConstructor with  2 argument";
//         a=x;
//         b=y;
//         c=100;
//         }
//      Test(int x)
//       {
//         cout<<"\nConstructor with  1 argument";
//         a=x;
//         b=50;
//         c=100;
//         }   
//       Test()
//       {
//         cout<<"\nConstructor without argument";
//         a=b=c=0;
//       }
//       public:
//       void add();
//       void sub();
// };
// void Test::add()
// {
//     d=a+b+c;
//     cout<<"\nAddition is: "<<d;
// }
// void Test::sub()
// {
//     d=a-b-c;
//     cout<<"\nsubtraction is: "<<d;
// }
// int main()
// {
//      clrscr();
//      Test T1(50,30,20);
//      Test T2(10,20);
//      Test T3(5); 
//      Test T4;
//      T1.add();
//      T2.add();
//      T3.add();
//      T4.add();

//      T1.sub();
//      T2.sub();
//      T3.sub();
//      T4.sub();
//    return 0;
// }

// 👉 Constructor Overloading & Default Argument

class Test{
     int a,b,c;
     public:
     Test(int x,int y,int z = 80){
        a = x;
        b = y;
        c = z;
     }
     Test(int x,int y =5
     ){
        a = x;
        b = y;
        c = 50;
     }
     Test(int x){
        a = x;
        b = 10;
        c = 30;
     }

     void add();

};

void Test::add(){
  cout << a + b + c << endl;
}

int main(){
    Test T1(50,20,10);
    Test T2(40,30);
    Test T3(70);
  return 0;
}