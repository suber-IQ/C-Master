// 👉 Overloading Vs Overriding
#include<iostream>
using namespace std;

class Base{
      public:
      void display(){
            cout << "Display of Base without parameter" << endl;
      }
      void display(int n){
            cout << "Display of Base with Parameter "  << n << endl;
      }
};
class Derived:public Base{  // Method overriding
      public:
       void display(){
            cout << "Display of derived without parameter" << endl;
      }
        void display(int n){
            cout << "Display of Base k... k... with Parameter "  << n << endl;
            cout << "Hello bye bye... "  << n << endl;
             
        }
};

int main(){
      // Base B;
      // B.display();
      // B.display(500);
      Derived D;
      D.display();
      D.display(20);

      return 0;
}