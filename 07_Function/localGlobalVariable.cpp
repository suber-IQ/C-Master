// 👉 Program for Local and Global variable
#include<iostream>
using namespace std;

// 🎄 Part 1
// int a = 100;
// int main(){
//       int a = 50;
//       a = a + 10;
//       cout << a << endl;  //  🎉 Local variable
//       cout << ::a << endl; // 🎉 Global variable
// }

// 🎄 Part 2

// int a = 25;
// void display();

// int main(){
//       int a = 100; //  🎉 Local variable
//       display();
//       cout << a << endl; 

// }
// void display(){
//       cout << a << endl;
// }
// 🎄 Part 3

// int a = 50;
// void display();
// void pary();
// int main(){
//       display();
//       cout << a << endl; 

// }
// void display(){
//       int a = 20;
//       a = a + 10;
//       pary();
//       cout << a << endl;

// }

// void pary(){
//       a = a + 10;
// }
// 🎄 Part 4

// int main(){
//        int a = 50;
//        {
//             int a = 8;
//             a = a + 10;
//             {
//                   a = a + 50;
//                   cout << a << endl;
//             }
//             cout << a << endl;

//        }
//        cout << a << endl;
// }
// 🎄 Part 5
// int a = 20;
// int main(){
//        int a = 50;
//        {
//             int a = 8;
//             a = a + 10;
//             {
//                   a = a + 50;
//                   cout << a << endl;
//             }
//             cout << a << endl;

//        }
//        cout << a << endl;
// }
// 🎄 Part 6
// int a = 20;
// int main(){
//        int a = 50;
//        {
//             int a = 8;
//             a = a + 10;
//             {
//                   a = a + 50;
//                   cout << ::a << endl; 🎉 Global variable
//             }
//             cout << a << endl;

//        }
//        cout << a << endl;
// }
