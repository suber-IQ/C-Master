// Program of convert decimal
#include<iostream>
#include<cmath>
using namespace std;

int main(){

// ❓ Decimal to binary conversion (base is 2)
//     int arr[100],r,d,i = 0;
//     cout << "Enter decimal number: " << endl;
//     cin>>d;
//     while(d!=0){
//       r = d%2;
//       arr[i] = r;
//       i++;
//       d = d/2;
//     }
//     i--;
//     while(i>=0){
//          cout << arr[i] << " ";
//          i--;
//     }
//     cout << endl;
// ❓ Decimal to octal conversion(base is 8)
//     int arr[100],r,d,i = 0;
//     cout << "Enter decimal number: " << endl;
//     cin>>d;
//     while(d!=0){
//       r = d%8;
//       arr[i] = r;
//       d = d/8;
//       i++;
//     }
//     i--;
//     while(i>=0){
//          cout << arr[i];
//          i--;
//     }
//     cout << endl;

// ❓ Decimal to hexadecimal conversion (base is 16)
//     int arr[100],r,d,i = 0;
//     cout << "Enter decimal number: " << endl;
//     cin>>d;
//     while(d!=0){
//       r = d%16;
//       arr[i] = r;
//       d = d/16;
//       i++;
//     }
//     i--;
//     while(i>=0){
//       switch (arr[i])
//       {
//       case 10: cout << 'A'; break;
//       case 11: cout << 'B'; break;
//       case 12: cout << 'C'; break;
//       case 13: cout << 'D'; break;
//       case 14: cout << 'E'; break;
//       case 15: cout << 'F'; break;
//       default: cout << arr[i];
//       }
//       i--;
//     }
//     cout << endl;
// ❓ Binary to decimal conversion (base is 16)
//     int r,b,d = 0,i = 0;
//     cout << "Enter decimal number: " << endl;
//     cin>>b;
//      while(b!=0){
//        r = b%10;
//        b /= 10;
//        d += r * pow(2,i);
//        i++;
//      }
//     cout << d << endl;
  return 0;
}