// 👉 Program for unary Operator Overloading

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
      void display();
      void operator-();
};

void Test::display(){
    cout << a << " " << b << " " << c << endl;
}
void Test::operator-(){
      a = -a;
      b = -b;
      c = -c;
}

int main(){
     Test T1(18,20,10);
     T1.display();

     -T1;
     T1.display();

      return 0;
}