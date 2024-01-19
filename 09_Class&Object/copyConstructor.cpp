// 👉 Program for copy constructor
#include<iostream>
#include<string.h>
// #define clrscr() system("cls")
using namespace std;
class Student
{
    private:
    int rno;
    string name;
    public:
    Student(int rno,string name){
      this->rno = rno;
      this->name = name;
    }
    Student(){

    }
//     Student(Student &s){
//       this->name = s.name;
//       this->rno = s.rno;
//     }
    void display(){
      cout << "string: " << this->name << endl;
      cout << "RNO: " << this->rno << endl;
    }
   
};
int main()
{
 Student s1(12,"Sumit");
//  Student s2(s1);
Student s2=s1;
 s2.display();
      
}