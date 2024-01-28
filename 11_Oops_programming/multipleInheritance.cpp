// 👉 Program for method overloading
#include<iostream>
using namespace std;

class Student{
   protected:
     int rno;
     char name[50];
     public:
//      Student(){
//       cout << "constructor of Student class" << endl;
//      }
     void getStudent();
};

void Student::getStudent(){
      cout << "Enter roll no: "<< endl;
      cin>>rno;
      cout << "Enter name: "<< endl;
      cin>>name;
}

class Mark{
      protected:
       int h,m,e,c;
       public:
      //  Mark(){
      // cout << "constructor of Mark class" << endl;

      //  }
       void getMark();
};

void Mark::getMark(){
      cout <<"Enter marks of hindi: " << endl;
      cin>>h;
      cout << "Enter marks of math: " << endl;
      cin>>m;
      cout << "Enter marks of English: " << endl;
      cin>>e;
      cout << "Enter marks of Computer: " << endl;
      cin>>c;
}
class Result:public Student,public Mark{
   int total,per;
   public:
//      Result(){
//       cout << "constructor of Result class" << endl;
//      }
   void calculate();
   void displayResult();
};
void Result::calculate(){
      total = h + e + m + c;
      per = total/4;
}
void Result::displayResult(){
      cout << "Roll no: " << rno  << " " << "Name: " << name<< endl;
      cout << "\nh: " << h << "\ne: " << e << "\nm: " << m << "\nc: " << c << endl;
      cout << "Total no of marks: " << total << endl;
      cout << "Percentage: " << per << " %" << endl;
}

int main(){

      Result R;
      R.getStudent();
      R.getMark();
      R.calculate();
      R.displayResult();

      return 0;
}