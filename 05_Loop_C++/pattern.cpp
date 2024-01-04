// 👉 Pyramid print
#include<iostream>
using namespace std;


int main(){
      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 0; i < n; i++){
      //       for(int j = 0; j < i + 1; j++){
      //             cout << "*";
      //       }
      //       cout << endl;
      // }
      // ❓1. print pyramid program

      //    *
      //    * *
      //    * * *
      //    * * * *
      //    * * * * *

      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 1; i<=n; i++){
      //       for(int j = 1; j <= i; j++){
      //             cout << "*";
      //       }
      //       cout << endl;
      // }

      // ❓2. print Number pyramid program

            //  1
            //  2 2
            //  3 3 3
            //  4 4 4 4
            //  5 5 5 5 5

      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 1; i<=n; i++){
      //       for(int j = 1; j <= i; j++){
      //             cout << i;
      //       }
      //       cout << endl;
      // }

      // ❓3. print number pyramid program
            //  1
            //  1 2
            //  1 2 3
            //  1 2 3 4
            //  1 2 3 4 5
      //  int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 1; i<=n; i++){
      //       for(int j = 1; j <= i; j++){
      //             cout << j;
      //       }
      //       cout << endl;
      // }
      // ❓4. print number pyramid program
            //  A
            //  A B
            //  A B C
            //  A B C D
            //  A B C D E
      // int n;
      // char ch;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // if(n > 26){
      //       cout << "Invalid " << endl;
      // }else{
      //       for(int i = 1; i<=n; i++){
      //       ch = 'A';
      //       for(int j = 1; j <= i; j++){
      //           cout << ch;
      //           ch++;
      //       }
      //       cout << endl;
      // }
      // }

      // ❓5. print reverse star pyramid program

      // * * * * *
      // * * * *
      // * * * 
      // * * 
      // * 


      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 1; i <= n; i++){
      //       for(int j = n; j >= i; j--){
      //             cout << "*";
      //       }
      //       cout << endl;
      // }

   

      // ❓6. print reverse number pyramid program

      // 5 4 3 2 1
      // 5 4 3 2 
      // 5 4 3 
      // 5 4 
      // 5 


      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = 1; i <= n; i++){
      //       for(int j = n; j >= i; j--){
      //             cout << j;
      //       }
      //       cout << endl;
      // }

      // ❓7. print reverse number pyramid program

      // 1 2 3 4 5
      // 1 2 3 4 
      // 1 2 3 
      // 1 2 
      // 1 


      // int n;
      // cout << "Enter a Number: "<< endl;
      // cin>>n;
      // for(int i = n; i >= 1; i--){
      //       for(int j = 1; j <= i; j++){
      //             cout << j;
      //       }
      //       cout << endl;
      // }

   
      // ❓8. print reverse character pyramid program

      // A B C D E
      // A B C D 
      // A B C 
      // A B 
      // A 


      int n;
      char ch;
      cout << "Enter a Number: "<< endl;
      cin>>n;
      for(int i = n; i >= 1; i--){
            ch = 'A';
            for(int j = 1; j <= i; j++){
                  cout << ch;
                  ch++;
            }
            cout << endl;
      }

   

      return 0;
}