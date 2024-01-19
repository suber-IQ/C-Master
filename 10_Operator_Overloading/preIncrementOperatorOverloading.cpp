// 👉 Pre Increment And Decrement Operator Overloading
#include<iostream>
using namespace std;

class Test{
   int a,b,c;
   public:
   Test(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
   }
   void display();
   void operator++();
   void operator--();
};

void Test::display(){
      cout <<"a: " << a << " " << "b: " << b << " " << "c: " << c << endl;
}
void Test::operator++(){
      ++a;
      ++b;
      ++c;
    
      // cout << "Operator Overloading working..." << endl;
}
void Test::operator--(){
      --a;
      --b;
      --c;
}
int main(){
      Test T1(20,30,40);
        T1.display();
      //   ++T1; // 🎉 output:- a: 21, b: 31, c: 41
      // --T1; // 🎉 output:- a: 19, b: 29, c: 39
      // T1++; // wrong statement
      // T1--; // wrong statement
        T1.display();

      return 0;
}
