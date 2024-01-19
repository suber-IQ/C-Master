// 👉  Program for Constructors
#include<iostream>
using namespace std;

class Test{

      public:
      Test(){
        cout << "I am constructor" << endl;                     
      }
      void display(){
            cout << "I am displaying method: " << endl;
      }
};



int main(){
      Test T1;
      Test T2;
      Test T3;
      return 0;
}
// 👉  Program 2 for Constructors

// #include<iostream>
// using namespace std;

// class Test{

//       int n;
//       public:
//       Test(){

//             n = 100;
//       }
//       void incr();
//       void display();
// };

// void Test::incr(){
//       ++n;
// }
// void Test::display(){
//       cout << n << endl;
// }

// int main(){
//       Test T1,T2;
//       T1.incr();
//       T1.incr();
//       T1.incr();
//       cout << "T1 object: " << endl;
//       T1.display();
       
//       cout << "T2 object: " << endl;
//       T2.display();

//       return 0;
// }