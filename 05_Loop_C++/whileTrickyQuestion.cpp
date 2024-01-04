// Tricky Question for Interviews
#include<iostream>
using namespace std;

int main(){
      int a = 5;
      while(a){
            cout << "hello " <<endl;
            a--;
      }
      char ch='A';
      while(ch<= 'Z'){
            cout << ch << endl;
            ch++;
      }
      int x;
      while(x++<=10);
      {
            cout << x << endl;
            x++;
      }
      int y;
      while(++y<=10);
      {
            cout << y << endl;
            y++;
      }

     
      return 0;
}