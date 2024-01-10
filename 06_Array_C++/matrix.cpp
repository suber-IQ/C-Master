// 👉 Program for Matrix
#include<iostream>
using namespace std;

int main(){
      // ❓Part 1
//     int arr[3][3],r,c;
      
//     for(r = 0; r < 3; r++){
//       for(c = 0; c < 3; c++){
//             cin>>arr[r][c];
//       }
//     }
//     cout << endl;
    
//     for(r = 0; r < 3; r++){
//       for(c = 0; c < 3; c++){
//             cout << arr[r][c] << " ";
//       }
//       cout << endl;
//     }
      // ❓Part 2

    
//     int arr[50][50],r,c,m,n;
//     xyz:cout << "Enter row and column limit: " <<endl;
//     cin>>m>>n;
//     if(m > 50 || n > 50){
//       cout << "Invalid value plz enter again: " << endl;
//       goto xyz;
//     }
//     cout << "Start with" << endl;
//     for(r = 0; r < m; r++){
//       for(c = 0; c < n; c++){
//             cin>>arr[r][c];
//       }
//     }
//     cout << "end with" << endl;
    
//     for(r = 0; r < m; r++){
//       for(c = 0; c < n; c++){
//             cout << arr[r][c] << " ";
//       }
//       cout << endl;
//     }

// ❓ 1️⃣ Daigonal of matrix
//  int arr[50][50],m,n;
//  cout << "Enter row and column limit: " << endl;
//  cin>>m>>n;
//  if(m != n){
//       cout << "Please Enter same size of row & column:- " << endl;
//  }else{
//       cout << "Start with" << endl;
//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             cin>>arr[r][c];
            

      // cout << "End with" << endl;

      //🎄 Method 1 
      // for(int r = 0; r < m; r++)
      //   for(int c = 0; c < n; c++)
      //       if(r == c)
      //             cout << arr[r][c] << " ";
      //🎄 Method 2
      // for(int r = 0; r < m; r++){
      //       cout << arr[r][r] << " ";
      // }
        
//  }

// ❓ 2️⃣ lower & upper trangle of matrix

// 🎄 lower Trangle of matrix 
//  int arr[50][50],m,n;
//  cout << "Enter row and column limit: " << endl;
//  cin>>m>>n;
//  if(m != n){
//       cout << "Please Enter same size of row & column:- " << endl;
//  }else{
//       cout << "Start with" << endl;
//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             cin>>arr[r][c];
            

//       cout << "End with" << endl;

//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             if(r >= c)
//                   cout << arr[r][c] << " ";
      
        
//  }
// 🎄 Upper Trangle of matrix 
//  int arr[50][50],m,n;
//  cout << "Enter row and column limit: " << endl;
//  cin>>m>>n;
//  if(m != n){
//       cout << "Please Enter same size of row & column:- " << endl;
//  }else{
//       cout << "Start with" << endl;
//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             cin>>arr[r][c];
            

//       cout << "End with" << endl;

//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             if(r <= c)
//                   cout << arr[r][c] << " "; 
//  }

// ❓ 3️⃣ corner of Matrix
//  int arr[50][50],m,n;
//  cout << "Enter row and column limit: " << endl;
//  cin>>m>>n;
//  if(m != n){
//       cout << "Please Enter same size of row & column:- " << endl;
//  }else{
//       cout << "Start with" << endl;
//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++)
//             cin>>arr[r][c];
            

//       cout << "End with" << endl;

//       for(int r = 0; r < m; r++)
//         for(int c = 0; c < n; c++){
//             if(r == 0 && c == 0)
//                   cout << arr[r][c] << " ";
//             if(r == 0 && c == n-1)
//                   cout << arr[r][c] << " ";
//             if(r == m - 1 && c == 0)     
//                   cout << arr[r][c] << " ";
//             if(r == m - 1 && c == n - 1)      
//                   cout << arr[r][c] << " ";
//         }         
          
//  }

    

      return 0;
}