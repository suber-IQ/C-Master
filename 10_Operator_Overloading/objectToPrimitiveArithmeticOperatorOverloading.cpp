// 👉 Arithmetic Operator Overloading for Object and Primitive 
#include<iostream>
using namespace std;

class Test{
      int n;
      public:
      Test(int n){
            this->n = n;
      }
      Test(){}
      void display();
      Test operator+(int x);
      Test operator-(int x);
      Test operator*(int x);
      Test operator/(int x);
      Test operator%(int x);
};

void Test::display(){
      cout << n << endl;
}

Test Test::operator+(int x){
      Test Temp;
      Temp.n = n + x;
      return Temp;
}

Test Test::operator-(int x){
      Test Temp;
      Temp.n = n - x;
      return Temp;
}

Test Test::operator*(int x){
      Test Temp;
      Temp.n = n * x;
      return Temp;
}

Test Test::operator/(int x){
      Test Temp;
      Temp.n = n / x;
      return Temp;
}

Test Test::operator%(int x){
      Test Temp;
      Temp.n = n % x;
      return Temp;
}

int main(){
      // 🎄 Phase 1: Test
      // Test T1(10);
      // Test T2;
      // T2 = T1 + 6;
      // T2.display(); // 🎉 output:- n:10 + 6 = 16

      // 🎄 Phase 2: Test
      //  Test T1(10);
      // Test T2;
      // T2 = T1 - 6;
      // T2.display(); // 🎉 output:- n:10 - 6 = 4

      // 🎄 Phase 3: Test
      //  Test T1(10);
      // Test T2;
      // T2 = T1 * 6;
      // T2.display(); // 🎉 output:- n:10 * 6 = 60

      // 🎄 Phase 4: Test
      //  Test T1(10);
      // Test T2;
      // T2 = T1 / 6;
      // T2.display(); // 🎉 output:- n:10 / 6 = 1

      // 🎄 Phase 5: Test
       Test T1(10);
      Test T2;
      T2 = T1 % 6;
      T2.display(); // 🎉 output:- n:10 % 6 = 4



      return 0;
}