// 👉 Pre & Post Increment & Decrement Assignment Operator overloading
#include<iostream>
using namespace std;

class Test{
      int a,b,c;
      public:
      Test(int a,int b,int c){
            this->a = a;
            this->b = b;
            this->c = c;
      }
      Test(){

      }
      Test operator++();
      Test operator++(int);
      Test operator--();
      Test operator--(int);
      void display();

};

Test Test::operator++(){
       ++a;
       ++b;
       ++c;
       return *this;
}
Test Test::operator++(int){
    Test Temp = *this;
    a++;
    b++;
    c++;
    return Temp;
}
Test Test::operator--(){
      --a;
      --b;
      --c;
      return *this;

}
Test Test::operator--(int){
     Test Temp = *this;
     a--;
     b--;
     c--;
     return Temp;
}
void Test::display(){
  cout << a << " " << b << " " << c << " " << endl;
}


int main(){
      // 🎄 Phase 1: Test
      // Test T1(10,20,30);
      // Test T2;
      // T2 = ++T1;  //🎉 Pre Increment Assignment Operator Overloading
      // T2.display();
      // T1.display();

      // 🎄 Phase 2: Test
      // Test T1(10,20,30);
      // Test T2;
      // T2 = T1++;  //🎉 Post Increment Assignment Operator Overloading
      // T2.display();
      // T1.display();

      // 🎄 Phase 3: Test
      // Test T1(10,20,30);
      // Test T2;
      // T2 = --T1;  //🎉 Pre Decrement Assignment Operator Overloading
      // T2.display();
      // T1.display();

      // 🎄 Phase 4: Test
      // Test T1(10,20,30);
      // Test T2;
      // T2 = T1--;  //🎉 Post Decrement Assignment Operator Overloading
      // T2.display();
      // T1.display();




      return 0;
}