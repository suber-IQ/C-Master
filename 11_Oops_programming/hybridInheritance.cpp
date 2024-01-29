// 👉 Hybrid Inheritance
#include<iostream>
using namespace std;

// class Student{
//       protected:
//         int rno;
//         char name[50];
//         public:
//         void getStudent(){
//             cout << "\nEnter roll no";
//             cin>>rno;
//             cout << "\nEnter name";
//             cin>>name;
//         }
// };

// class Mark:public Student{
//       protected:
//       int h,e,c,m;
//       public:
//       void getMark(){
//             cout << "\nEnter Marks of Hindi: ";
//             cin>>h;
//             cout << "\nEnter Marks of English: ";
//             cin>>e;
//             cout << "\nEnter Marks of Computer: ";
//             cin>>c;
//             cout << "\nEnter Marks of Math: ";
//             cin>>m;
//       }
// };

// class Sports{
//       protected:
//       int sp;
//       public:
//       void getSports(){
//             cout << "\nEnter Marks of sports: ";
//             cin>>sp;
//       }

// };

// class Result:public Mark,public Sports{
//   int total,per;
//   public:
//   void calculateResult(){
//       total = h + e + c + m + sp;
//       per = total / 5;
//   }
//   void display(){
//       cout << "Roll no: " << rno << endl;
//       cout << "Name: " << name << endl;
//       cout << "Total no: " << total << endl;
//       cout << "Percetage of marks: " << per << " %" << endl;
//   }
// };


// int main(){

//     Result r;
//     r.getStudent();
//     r.getMark();
//     r.getSports();
//     r.calculateResult();
//     r.display();

//       return 0;
// }


// 🎄 Diamond Problem of Hybrid Inheritance

class One{
      public:
      void display(){
            cout << "This display of One Class" << endl;
      }
};

class Two:public virtual One{

};

class Three:virtual public One{

};

class Four:public Two,public Three{

};

int main(){
    Four f;
    f.display();

      return 0;
}


