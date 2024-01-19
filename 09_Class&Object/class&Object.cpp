// // 👉 Program 1 for Class and Object;
// #include<iostream>
// using namespace std;

// class StudentData{

//       // property of class
//     private:
//       int rolln;
//       char name[50];
//       int mobile;

//     // method of class
//       public: 
//       void getData();
//       void display();
// };

// void StudentData::getData(){
//       cout << "Enter Roll no: " << endl;
//       cin>>rolln;
//       cout << "Enter Name: " << endl;
//       cin>>name;
//       cout << "Enter Mobile: " << endl;
//       cin>>mobile;
     
// }
// void StudentData::display(){
//       cout << "Roll no: " << rolln << endl;
//       cout << "Name: " << name << endl;
//       cout << "Mobile no: " << mobile << endl;
// }

// int main(){
//         StudentData s;
//         s.getData();
//         s.display();

//       return 0;
// }

// 👉 Program 2 for Class and Object;
#include<iostream>
#define clrscr() system("cls")
using namespace std;
class Car
{
       int model,year;
       char name[40],color[30];
       public:
       void getCardetails();
       void displaydetails();
};
void Car::getCardetails()
{
   cout<<"Enter Car Name";
   cin>>name;
   cout<<"Enter car Color";
   cin>>color;
   cout<<"Enter car model no";
   cin>>model;
   cout<<"Enter Year :";
   cin>>year;
}
void Car::displaydetails()
{
   cout<<"\nCar Name: "<<name;
   cout<<"\nCar Color: "<<color;
   cout<<"\nCar model no"<<model;
   cout<<"\nYear :"<<year;
   
}


int main()
{
    Car C1;
    clrscr();
    C1.getCardetails();
    C1.displaydetails();
    return 0;
}