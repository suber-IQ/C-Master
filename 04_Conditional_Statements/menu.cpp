// 👉 Menu Program
#include<iostream>
using namespace std;


int main(){

    int ch;
    int a,b;
    cout << "____________Menu________________" << endl;
    cout << "\n 1. Add \n 2. Max \n 3. Swap \n" << endl;
    cout << "Choose a menu Number: " << endl;
    cin>>ch;

    switch(ch){
        case 1:{
            cout << "Enter Two number: " << endl;
            cin>>a>>b;
            cout << "Addition of a & b: " << (a + b)<< endl;
            break;
        }
        case 2:{
            cout << "Enter Two Number for Max: " << endl;
            cin>>a>>b;
            if(a > b){
                  cout << "Maximum number: " << a << endl;
            }else{
                  cout << "Maximum number: " << b << endl;
            }
            break;
        }
        case 3:{
            cout << "Enter two Number a & b for swap: " << endl;
            cin>>a>>b;
            a = a + b;
            b = a - b;
            a = a - b;
            cout << "value of a: " << a << " value of b: " << b << endl;
            break;
        }
        default: cout << "Invalid Number into Input!"<< endl;

    }
   

    return 0;
}