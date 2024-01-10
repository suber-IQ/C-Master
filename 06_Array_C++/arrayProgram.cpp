// 👉 Program of Array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    

//     ❓ Largest number in an array in c++
//     int max,p;
//     int arr[10] = {8,88,89,345,23,99,199,66,42,12};
//       max = arr[0];
//       p = 0;
//     for(int i = 1; i < 10; i++){
//       if(arr[i]>max){
//             max = arr[i];
//             p = i;
//       }
//     }

//     cout << "max: " << max << endl;
//     cout << "pos: " << p << endl;

//     ❓ Smallest number in an array in c++
//    int min,p;
//     int arr[10] = {8,88,89,345,23,99,1,66,42,12};
//       min = arr[0];
//       p = 0;
//     for(int i = 1; i < 10; i++){
//       if(min>arr[i]){
//             min = arr[i];
//             p = i;
//       }
//     }

//     cout << "min: " << min << endl;
//     cout << "pos: " << p << endl;

//     ❓ Linear Search array 

      //   int arr[100],n,f=0,s;
      //   limit:cout << "Enter a limit of array size " << endl;
      //   cin>>n;
      //   if(n>100){
      //       goto limit;
      //   }else{
      //       for(int i = 0; i< n; i++){
      //         cin>>arr[i];
      //       }  
      //       cout << "Enter Search element: " <<endl;
      //       cin>>s;
      //       for(int i = 0; i<n; i++){
      //             if(arr[i] == s){
      //                   f = 1;
      //                   break;
      //             }
      //       }

      //       if(f){
      //         cout << "Present" <<endl;
      //       }else{
      //             cout << "Absent" << endl;
      //       }


      //   }
//     ❓ Binary Search array 
      //    int n,arr[100],temp,left,right,mid,s,f;
      //  limit:cout << "Enter a Limit: " << endl;
      //  cin>>n;
      // if(n>100){
      //       goto limit;
      // }else{
      //       for(int i =0; i< n; i++){
      //             cin>>arr[i];
      //       }
      //       for(int i = 0; i< n; i++){
      //             for(int j = i+1; j< n; j++){
      //                   if(arr[j] < arr[i]){
      //                         temp = arr[i];
      //                         arr[i] = arr[j];
      //                         arr[j] = temp;
      //                   }
      //             }
      //       }
      //       for(int i = 0; i < n; i++){
      //             cout << arr[i] << " ";
      //       }
      //       cout << endl;
           
      //       left = 0;
      //       right = n-1;
      //        cout << "Enter Search element: " << endl;
      //       cin>>s;
      //       f = 0;
      //       while(left<=right){
      //       // mid = (left + right)/2;
      //       mid = left + (right - left)/2;

      //           if(arr[mid] == s){
      //              f = 1;
      //              break;
      //           }else if(s > arr[mid]){
      //             left = mid + 1;
      //           }else{
      //             right = mid -1;
      //           }
      //       }

      //       if(f){
      //         cout << "Prensent:" << endl;
      //       }else{
      //             cout << "Absent:" << endl;
      //       }

      // }

//     ❓find second largest element 
        int max,p;
    int arr[10] = {8,88,89,345,23,99,199,66,42,12};
      max = arr[0];
      p = 0;
    for(int i = 1; i < 10; i++){
      if(arr[i]>max){
            max = arr[i];
            p = i;
      }
    }

    cout << "First Largest max: " << max << endl;
    cout << "First Largest pos: " << p << endl;
    arr[p] = INT_MIN;
      max = arr[0];
      p = 0;
    for(int i = 1; i < 10; i++){
      if(arr[i]>max){
            max = arr[i];
            p = i;
      }
    }

    cout << "Second Largest max: " << max << endl;
    cout << "Second Largest pos: " << p << endl;
          
//     ❓find second Smallest element 
//      int min,p;
//     int arr[10] = {8,88,89,345,23,99,1,66,42,12};
//       min = arr[0];
//       p = 0;
//     for(int i = 1; i < 10; i++){
//       if(min>arr[i]){
//             min = arr[i];
//             p = i;
//       }
//     }

//     cout << "First Smallest min: " << min << endl;
//     cout << "First Smallest pos: " << p << endl;
//     arr[p] = INT_MAX;
//      min = arr[0];
//       p = 0;
//     for(int i = 1; i < 10; i++){
//       if(min>arr[i]){
//             min = arr[i];
//             p = i;
//       }
//     }

//     cout << "Second Smallest min: " << min << endl;
//     cout << "Second Smallest pos: " << p << endl;


 
      return 0;
}