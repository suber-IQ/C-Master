// 👉 Post Increment And Decrement Operator Overloading
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
   void operator++(int);
   void operator--(int);
};

void Test::display(){
      cout <<"a: " << a << " " << "b: " << b << " " << "c: " << c << endl;
}
void Test::operator++(int){
      //     a++;
      //     b++;
      //     c++;
      // ++a;
      // ++b;
      // ++c;
      // cout << "Operator Overloading working..." << endl;
}
void Test::operator--(int){
      // a--;
      // b--;
      // c--;
      //  --a;
      //  --b;
      //  --c;
}
int main(){
      Test T1(20,30,40);
        T1.display();
      // T1++; 
      T1--; 
        T1.display();

      return 0;
}
