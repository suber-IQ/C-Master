// 👉  Program for Binary Operators Overloading for Arithmetic Operator
#include<iostream>
using namespace std;


class Test{
   int n;
   public:
   Test(int n){
      this->n = n;
   }
   Test(){}
   Test operator+(Test &k);
   Test operator-(Test &k);
   Test operator*(Test &k);
   Test operator/(Test &k);
   Test operator%(Test &k);
   void display();
};

Test Test::operator+(Test &k){
      Test Temp;
      Temp.n = n + k.n;
      return Temp;
}

Test Test::operator-(Test &k){
      Test Temp;
      Temp.n = n - k.n;
      return Temp;
}

Test Test::operator*(Test &k){
      Test Temp;
      Temp.n = n * k.n;
      return Temp;
}

Test Test::operator/(Test &k){
      Test Temp;
      Temp.n = n / k.n;
      return Temp;
}

Test Test::operator%(Test &k){
      Test Temp;
      Temp.n = n % k.n;
      return Temp;
}
void Test::display(){
      cout << n << endl;
}

int main(){
     
     // 🎄 Phase 1: Test
      // Test T1(5);
      // Test T2(2);
      // Test T3;
      // T3 = T1 + T2;  // 🎉 output:- T1:5 + T2:2 = T3:7 
      // T3.display();

     // 🎄 Phase 2: Test
      // Test T1(5);
      // Test T2(2);
      // Test T3;
      // T3 = T1 - T2; // 🎉 output:- T1:5 - T2:2 = T3:3 
      // T3.display();

     // 🎄 Phase 3: Test
      // Test T1(5);
      // Test T2(2);
      // Test T3;
      // T3 = T1 * T2; // 🎉 output:- T1:5 - T2:2 = T3:10
      // T3.display();

     // 🎄 Phase 4: Test
      // Test T1(5);
      // Test T2(2);
      // Test T3;
      // T3 = T1 / T2; // 🎉 output:- T1:5 - T2:2 = T3:2
      // T3.display();

     // 🎄 Phase 5: Test
      // Test T1(5);
      // Test T2(2);
      // Test T3;
      // T3 = T1 % T2; // 🎉 output:- T1:5 - T2:2 = T3:1
      // T3.display();



      return 0;
}