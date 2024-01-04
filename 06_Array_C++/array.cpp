// 👉  Program for Array Demo 
#include<iostream>
#define clrscr() system("cls")
using namespace std;


int main(){
      int arr[5],i;
      clrscr();
      cout << "Enter element in Array" << endl;
      for(int i = 0; i < 5; i++){
            cin>>arr[i];
      }
      
      for(int i = 0; i < 5; i++){
          cout << arr[i] << " ";
      }


      return 0;
}