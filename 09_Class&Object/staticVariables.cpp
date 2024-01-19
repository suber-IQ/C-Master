// 👉 Program for static variable
// #include<iostream>
// #define clrscr() system("cls")
// using namespace std;
// class Student
// {
//     public:
//     int rno,mno;
//     static int ccode;
//     static int count;
//     Student(int rno,int mno)
//     {
//         this->rno=rno;
//         this->mno=mno;
//         count++;
//     }
//     void display();
// };
// void Student::display()
// {
//     cout<<"\nRoll no: "<<rno;
//     cout<<"\tMobile No:"<<mno;
//     cout<<"\tCollege Code"<<Student::ccode;
// }
// int Student::count=0;
// int Student::ccode=101;
// int main()
// {
//     clrscr();
//     Student S1(101,12345);
//     Student S2(102,22334);
//     Student S3(103,5556);
//     Student S4(104,11223);
//     S1.display();
//     S2.display();
//     S3.display();
//     S4.display();
    
//     cout<<"\nTotal Student admited: ";
//     cout<<Student::count;
   

//   return 0;
// }
#include<iostream>
#define clrscr() system("cls")
using namespace std;
class Student
{
    public:
    static int count;
    Student()
    {
        count++;
    }
};
// int Student::count=0;
int Student::count = 0;
int main()
{
    clrscr();
    Student S1;
    Student S2;
    Student S3;
    Student S4;
    Student S5;
    
    cout<<"\nTotal Student admited: ";
    cout<<Student::count << endl;
   

  return 0;
}