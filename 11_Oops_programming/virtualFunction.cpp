// 👉 Virtual Function
#include<iostream>
using namespace std;

// 🎄 Phase 1:

// class Base{
//    public:
//      void display(){
//       cout << "\n display method of Base class" << endl;

//      }
   
// };
// class Derived:public Base{
//    public:
//     void display(){
//       cout << "\n display method of derived class" << endl;
//     }
// };



// int main(){

//       Base B,*p;
//       p = &B;
//       p->display();
 
//  🎄 Case 2:
//       Derived D,*p;
//       p = &B;
//       p->display();


//       return 0;
// }

// 🎄 Phase  3:

// class Base{
//    public:
//      void virtual display(){ // 🎉  virtual 
//       cout << "\n display method of Base class" << endl;
//      }
   
// };
// class Derived:public Base{
//    public:
//     void display(){
//       cout << "\n display method of derived class" << endl;
//     }
// };

// int main(){
//    Base *p;
//    Derived D;
//    p = &D;
//    p->display();

//   return 0;
// }

// 🎄 Phase  4:

// class Base{
//    public:
//      void virtual display() = 0;  // 🎉 Pure virtual 
   
// };
// class Derived:public Base{
//    public:
//     void display(){
//       cout << "\n display method of derived class" << endl;
//     }
// };

// int main(){
//    Base *p;
//    Derived D;
//    p = &D;
//    p->display();

//   return 0;
// }

// 🎄 Phase  5:

class Button{
   public:
     void virtual click() = 0;
     void virtual dbClick() = 0;
};

class Color:public Button{  // 🙇 Programmer 1
    public:
      void click(){
        cout << "\n Now color is red of click..." << endl;
      }
      void dbClick(){
        cout << "\n Now color is blue of double click..." << endl;

      }
};

class Image:public Button{  // 🙇 Programmer 2
  public:
   void click(){
    cout << "\n This is my Image of click" << endl;
   }
   void dbClick(){
    cout << "\n This is my Image of double click" << endl;
   }
};

int main(){
    Button *p;  // only make reference object with only virtual class or pure virtual class
    Color C;
    p = &C;
    p->click();
    p->dbClick();
       
    Image I;
    p = &I;
    p->click();
    p->dbClick();

 

}