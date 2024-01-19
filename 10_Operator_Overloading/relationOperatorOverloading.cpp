// 👉 Relational Operator Overloading
#include<iostream>
using namespace std;


class Test{
    int n;
    public:
      Test(int n){
          this->n = n;
      }
      int operator>(Test &k);
      int operator<(Test &k);
      int operator==(Test &k);
      int operator>=(Test &k);
      int operator<=(Test &k);
      int operator!=(Test &k);

};

int Test::operator>(Test &k){
      if(n > k.n)
        return 1;

    return 0;    
}
int Test::operator<(Test &k){
      if(n < k.n)
        return 1;

    return 0;    
}
int Test::operator==(Test &k){
      if(n == k.n)
        return 1;

    return 0;    
}
int Test::operator>=(Test &k){
      if(n >= k.n)
        return 1;

    return 0;    
}
int Test::operator<=(Test &k){
      if(n <= k.n)
        return 1;

    return 0;    
}
int Test::operator!=(Test &k){
      if(n != k.n)
        return 1;

    return 0;    
}



int main(){
      // 🎄 Phase 1: Test
      Test T1(16);
      Test T2(8);
      if(T1>T2){
          cout << "true" << endl;
      }else{
            cout << "false" << endl;
      }

      // 🎄 Phase 2: Test
      // Test T1(16);
      // Test T2(8);
      // if(T1<T2){
      //     cout << "true" << endl;
      // }else{
      //       cout << "false" << endl;
      // }

      // 🎄 Phase 3: Test
      // Test T1(16);
      // Test T2(8);
      // if(T1==T2){
      //     cout << "true" << endl;
      // }else{
      //       cout << "false" << endl;
      // }

      // 🎄 Phase 4: Test
      // Test T1(16);
      // Test T2(8);
      // if(T1>=T2){
      //     cout << "true" << endl;
      // }else{
      //       cout << "false" << endl;
      // }

      // 🎄 Phase 5: Test
      // Test T1(16);
      // Test T2(8);
      // if(T1<=T2){
      //     cout << "true" << endl;
      // }else{
      //       cout << "false" << endl;
      // }

      // 🎄 Phase 6: Test
      // Test T1(16);
      // Test T2(8);
      // if(T1 != T2){
      //     cout << "true" << endl;
      // }else{
      //       cout << "false" << endl;
      // }


      return 0;
}