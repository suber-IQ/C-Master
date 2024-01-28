// 👉 Reference Object 
#include<iostream>
using namespace std;

class Abc{
  int n;
  public:
  Abc(){
      n = 10;
  }
  void display(){
      cout << n << endl;
  }
  void incr(){
      ++n;
  }
};

int main(){

    Abc A,*B;
    B = &A;
    A.incr();
    A.incr();
    B->display();
      return 0;
}