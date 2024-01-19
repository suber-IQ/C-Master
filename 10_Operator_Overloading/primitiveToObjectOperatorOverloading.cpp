// 👉 C++ Program For Arithmetic Operator Overloading for Primitive and Object

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
      friend Test operator+(int x,Test &k);
      friend Test operator-(int x,Test &k);
      friend Test operator*(int x,Test &k);
      friend Test operator/(int x,Test &k);
      friend Test operator%(int x,Test &k);

};

void Test::display(){
      cout << n << endl;
}
Test operator+(int x, Test &k){
      Test Temp;
      Temp.n = x + k.n;
      return Temp;
}
Test operator-(int x, Test &k){
      Test Temp;
      Temp.n = x - k.n;
      return Temp;
}
Test operator*(int x, Test &k){
      Test Temp;
      Temp.n = x * k.n;
      return Temp;
}
Test operator/(int x, Test &k){
      Test Temp;
      Temp.n = x / k.n;
      return Temp;
}
Test operator%(int x, Test &k){
      Test Temp;
      Temp.n = x % k.n;
      return Temp;
}


int main(){

   //🎄 Phase 1: Test
      Test T1(20);
      Test T2;
      T2 = 50 + T1;
      T2.display(); //🎉 output: 70

   //🎄 Phase 2: Test
      // Test T1(20);
      // Test T2;
      // T2 = 50 - T1;
      // T2.display(); //🎉 output: 30

   //🎄 Phase 3: Test
      // Test T1(20);
      // Test T2;
      // T2 = 50 * T1;
      // T2.display(); //🎉 output: 1000

   //🎄 Phase 4: Test
      // Test T1(20);
      // Test T2;
      // T2 = 50 / T1;
      // T2.display(); //🎉 output: 2

   //🎄 Phase 5: Test
      // Test T1(20);
      // Test T2;
      // T2 = 50 % T1;
      // T2.display(); //🎉 output: 10

      return 0;
}