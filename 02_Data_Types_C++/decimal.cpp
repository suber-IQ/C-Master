// 👉 Decimal ( float and double) => implicit conversion
#include<iostream>
using namespace std;


int main(){
      
      // int a;
      // a = 12.345; //🔎 12.345 is double data type default into integer type
      // cout << a << endl;
      // cout << sizeof(a) << endl; //🎉 output:- 4 bytes (integer)
      // cout << sizeof(12.345) << endl; // 🎉 output:- 8 bytes (double decimal data )
      // cout << sizeof(12.345f) << endl; // 🎉 output:- 4 bytes (float)

      //❓ Division tricky cases
      // int a;
      // double b;
      // double c;
      // float d; //🔎 d variable is float but value is double assign because output is decimal so default value is double assign
      // a = 15/2; // 🔎 15/2 :- 15 = int, 2 = int then int/int => int; 
      // b = 15/2.0; // 🔎 15/2.0 :- 15 = int, 2.0 = decimal then int/decimal => decimal; 
      // c = 15.0/2.0; // 🔎 15.0/2.0 :- 15.0 = decimal, 2.0 = decimal then decimal/decimal => decimal; 
      // d = 15.0/2; // 🔎 15.0/2 :- 15.0 = decimal, 2 = int then decimal/int => decimal; 
      // cout << a <<endl; // 🎉 output:- 7 (int)
      // cout << b << endl; // 🎉 output:- 7.5 (double)
      // cout << c << endl; // 🎉 output:- 7.5 (double)
      // cout << d << endl; // 🎉 output:- 7.5 (double)
      // cout << sizeof(d) << endl; // 🎉 output:- float


     //❓ Problem 
      //int h,e,c,m,total;
      //float per;
      //cout << "Enter marks of 4 subject" <<endl;
       //cin>>h>>e>>c>>m;
       //total = (h+e+c+m);
       //cout << "total: " << total <<endl;
       //per=total/4.0f; //🔎 => 4.0 is float 
    //per=total/4;  //🔎 => 4 is integer
    //per=total/4.0; //🔎 => 4.0 is double

    //cout <<"percentage: " << per << endl;

    // ❓ Problem case 2

    // cout << "15/2: " << 15/2 << " " << sizeof(15/2) << endl; // 🎉 output:- 7 (4 bytes)
    // cout << "15/2: " << 15.0/2 << " " << sizeof(15.0/2) << endl; // 🎉 output:- 7.5 (8 bytes means of double data type)
    // cout << "15/2: " << 15/2.0 << " " << sizeof(15/2.0) << endl; // 🎉 output:- 7.5 (8 bytes means of double data type)
    // cout << "15/2: " << 15.0/2.0 << " " << sizeof(15.0/2.0) << endl; // 🎉 output:- 7.5 (8 bytes means of double data type)

    // ❓ Problem case 3

    //int r,A;
    float r,A;
    const float PI = 3.14f;
    cout << "Enter radius of circle: " << endl;
    cin>>r;
   //A=3.14*r*r;
    A=PI*r*r;
    cout << "size of PI: " << sizeof(r) << endl; // 🎉 output:- 4 bytes
    cout << "size of PI: " << sizeof(3.14) << endl; // 🎉 output:- 8 bytes
    cout << "Area of Circle of "<< r << " radius: " << A << endl;



      // 💁 Note:-1️⃣ C++ default define double data type 
               // 2️⃣  int/int => int
               // 3️⃣  int/decimal OR decimal/int OR decimal/decimal => decimal value(is default double Data type)
      return 0;
}