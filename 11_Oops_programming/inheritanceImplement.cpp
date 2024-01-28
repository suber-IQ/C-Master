// 👉 C++ Program for Inheritance
#include<iostream>
using namespace std;

// 🎏🎏🎏🎏🎏 Chart of Access Specifiers 🎏🎏🎏🎏🎏🎏🎏🎏🎏🎏
// 1. Private
// 2. Protected
// 3. Public

// 🎏🎏🎏🎏🎏 Chart of Visibility Modifiers 🎏🎏🎏🎏🎏🎏🎏🎏🎏🎏

// 🌟          Private          Protected          Public
// Private :    X               private            private

// Protected:   X               protected          protected  

// Public:      X               protected          public   


// 🎄 Program 1: Test

// class Test{
//       private:
//        int x_pri;
//        protected:
//        int y_pro;
//        public:
//         int z_pub;
//         Test(){
//             x_pri = 100;
//             y_pro = 200;
//             z_pub = 300;
//         }
// };

// int main(){

//   Test T;
// //   cout << T.x_pri << endl;  // not working
// //   cout << T.y_pro << endl;  // not working
//   cout << T.z_pub << endl;  // working
//   return 0;
// }

// 🎄 Program 2: Test
// class Base{
//       private:
//        int x_pri;
//        protected:
//        int y_pro;
//        public:
//         int z_pub;
       
// };

// class Derived:public Base{
//       public: 
//        void display(){
//             // x_pri = 100;  //🥳 not working
//             y_pro = 200;  //🥳 protected
//             z_pub = 300; //🥳 public
//             // cout<<x_pri<<endl;  //🥳 not working
//             cout<<y_pro<<endl;
//             cout<<z_pub<<endl;
//        }
// };

// int main(){

//    Derived D1;
//    D1.display();
//   return 0;

// 🎄 Program 3: Test
// class Base{
//       private:
//        int x_pri;
//        protected:
//        int y_pro;
//        public:
//         int z_pub;
       
// };

// class Derived:protected Base{
//       public: 
//        void display(){
//             // x_pri = 100;  //🥳 not working
//             y_pro = 200; //🥳 protected
//             z_pub = 300; // 🥳 protected
//             // cout<<x_pri<<endl;  //🥳 not working
//             cout<<y_pro<<endl;
//             cout<<z_pub<<endl;
//        }
// };

// int main(){

//    Derived D1;
// //    D1.display();
// // Base B1;
// // B1.z_pub = 800;
// // B1.display();

// // D1.z_pub = 800;
// // D1.display();
   
//   return 0;
// }


// 🎄 Program 4: Test
// class Base{
//       private:
//        int x_pri;
//        protected:
//        int y_pro;
//        public:
//         int z_pub;

     
       
// };

// class Derived:private Base{
//       public: 
//        void display(){
//             // x_pri = 100;  //🥳 not working
//             y_pro = 200; //🥳 private
//             z_pub = 300; // 🥳 private
//             // cout<<x_pri<<endl;  //🥳 not working
//             cout<<y_pro<<endl;
//             cout<<z_pub<<endl;
//        }
// };

// int main(){

//    Derived D1;
// //    D1.z_pub = 900;
//    D1.display();
   
//   return 0;
// }