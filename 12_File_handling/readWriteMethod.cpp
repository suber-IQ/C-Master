// 👉  How to Use Read And Write Methods in c++
#include<iostream>
#include<fstream>
using namespace std;

class Employee{
      int  empid;
      char name[20];
      char dname[20];
      int salary;
      public:
      void getdata();
      void showdata();
};
void Employee::getdata(){
   cout << "Enter id: " << endl;
   cin>>empid;
   cout << "Enter name: " << endl;
   cin>>name;
   cout << "Enter Departments: " << endl;
   cin>>dname;
   cout << "Enter salary: " << endl;
   cin>>salary;
}
void Employee::showdata(){
      cout << "Empi d: " << empid << endl;
      cout << "Emp Name: " << name << endl;
      cout << "Emp Departments: " << dname << endl;
      cout << "Emp Salary: " << salary << endl;
}
class Emp_File{
      Employee buffer;
      public:
      void diskin();
      void diskout();
};
void Emp_File::diskin(){
      fstream fout("empInfo.txt",ios::app);
      if(fout.good()){ // if use is_open() method
         buffer.getdata();
         fout.write((char*)&buffer,sizeof(buffer));
      }else{
            cout << "File Error: " << endl;
      }

}

int main(){


return 0;
}