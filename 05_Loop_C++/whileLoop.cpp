// 👉 while Loop with program
#include<iostream>
using namespace std;

int main(){
      
      // ❓Program 1 Print counting
      // int i;
      // i = 1;
      // while(i<=10){
      //       cout << i << endl;
      //       i++;
      // }
      // ❓Program 2 Print Oposite counting
      // int i,n;
      // cout << "Please Enter a Number: " << endl;
      // cin>>n;
      // i = 1;
      // while (i<=n)
      // {
      //       cout << n << endl;
      //       n--;
      // }
      // ❓Program 3 Print sum of all counting

      // int i,n;
      // i = 1;
      // int sum = 0;
      // cout << "Please Enter a Number: " << endl;
      // cin>>n;
      // while (i<=n)
      // {
      //       sum += i;
      //       i++;
      // }
      // cout << "Sum: " << sum << endl;

      // ❓Program 4 Table printing
      // int i,n;
      // cout << "Please Enter a Number: " << endl;
      // cin>>n;
      // i = 1;
      // cout << "Table of n: " << n << endl;
      // while(i<=10){
      //       cout << n * i << endl;
      //       i++;
      // }

      // ❓Program 5 square
      // int i = 1;
      
      // while(i <= 10){
      //       cout << (i * i) << endl;
      //       i++;
      // }

      // // ❓Program 6 square
      // char ch='A';
      // while (ch <= 'Z')
      // {
      //       cout << ch << " ";
      //       ch++;
      // }
      
      // cout << endl;

      // ❓Program 7 sum of individual digit of number
      // int n,r;
      // cout << "Enter a Number: " << endl;
      // cin>>n;
      // int sum = 0;

      // while(n!=0){
      //       r= n%10;
      //       sum = sum + r;
      //       n = n/10;
      // }
      // cout << "sum: " << sum << endl;

      // ❓Program 8 Reverse a Number
      // int n,r;
      // cout << "Enter a Number: " << endl;
      //  cin>>n;
      //  int s = 0;

      // while(n!=0){
      //     r = n%10;
      //     s = (s*10) + r;
      //     n /= 10;
      // }
      // cout << "Reverse a Number: " << s << endl;

      // ❓Program 9 Palindrome a Number
      // int n,r,f,s =0;
      // cout << "Enter a Number: " << endl;
      //  cin>>n;
      //  f = n;
      // while(n!=0){
      //     r = n%10;
      //     s = (s*10) + r;
      //     n /= 10;
      // }
      // f==s?cout <<"It is a Palindrome Number: " << endl :  cout << "It is not a Palindrome Number: " << endl; 

      // if(f==s){
      //       cout <<"It is a Palindrome Number: " << endl;
      // }else{
      //       cout << "It is not a Palindrome Number: " << endl;
      // }
      // ❓Program 9 Armstrong Number
    //   int n,r,f,s =0;
    //   cout << "Enter a Number: " << endl;
    //    cin>>n;
    //    f = n;
    //   while(n!=0){
    //       r = n%10;
    //       s += r*r*r;
    //       n /= 10;
    //   }
    //   f==s? cout << "it is a Armstrong Number\n" : cout << "it is not a Armstrong Number" << endl; 

      // ❓Program 10 How many Armstrong Number

    //  unsigned
    //   int k,r,n,s,i;
    //   i = 1;
    //  while(i<=500){
    //       s=0;
    //       n = i;
    //       k = n;
    //      while(n!=0){
    //       r = n%10;
    //       s += r*r*r;
    //       n /= 10;
    //      }
    //      if(k==s){
    //         cout << i << endl;
    //     }
    //      i++;      
    //   }

      // ❓Program 11 Is Prime or Not
   
//    int n,i = 2,f=0;

//    cout << "Enter a Number: " << endl;
//     cin>>n;
//    while(i<n){
//       if(n%i==0){
//         f = 1;
//         break;
//       }
//      i++;
//    }
//    if(f){
//     cout << "Not a Prime" << endl;
//    }else{
//     cout << "Is a Prime" << endl;
//    }

      // ❓Program 12 List of Prime numbers
     
      // int n,i,f,limit, x= 1;
      // cout << "Enter a Limit: " << endl;
      // cin>>limit;
      // while(x<=limit){
      //    n = x;
      //    f = 0;
      //    i = 2;
      //    while(i < n){
      //     if(n%i==0){
      //       f = 1;
      //       break;
      //     }
      //     i++;
      //    }
      //    if(f==0){
      //     cout << n << " ";
      //    }
      //     x++;
      // }
      // ❓Program 13 number to word convert

      // int n,r,s;
      // cout << "Enter a Number: " << endl;
      // cin>>n;
      // while(n != 0){
      //     r = n%10;
      //     s = (s*10) + r;
      //     n /= 10;
      // }
      // while(s != 0){
      //     r = s % 10;
      //     switch (r)
      //     {
      //       case 0: cout << "zero";break;
      //       case 1: cout << "one";break;
      //       case 2: cout << "two";break;
      //       case 3: cout << "three";break;
      //       case 4: cout << "four";break;
      //       case 5: cout << "five";break;
      //       case 6: cout << "six";break;
      //       case 7: cout << "seven";break;
      //       case 8: cout << "eight";break;
      //       case 9: cout << "nine";break;
      //     }
      //     s /= 10;
      // }
      // cout << endl;

      // ❓Program 14 Print Fibonacci Series.

      int n,i = 1,a = 0, b = 1,c;
      cout << "Enter  a number limit: " << endl;
      cin>>n;
      if(n  <= 0){
        cout << "Invalid Number: " << endl;
      }
      if(n == 1){
        cout << a << endl;
      }else if(n == 2){
        cout << a << " " << b << endl;
      }else if(n > 2){
          cout << a << " " << b;
          while(i <= n-2){
            c = a + b;
            cout << " " << c << " ";
            a = b;
            b = c;
            i++;
          }
      }
      cout << endl;



      return 0;
}