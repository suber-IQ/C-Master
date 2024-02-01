// 👉 How to open a File Using Constructor in C++
#include<iostream>
#include<fstream>
using namespace std;


int main(){

      // char name[50];
      // fstream fout("/media/sumit/E Drive/C++ Master/student.txt",ios::out);  // 🎉 using constructor write file
      // fstream fout("/media/sumit/E Drive/C++ Master/student.txt",ios::app);  // 🎉 using constructor append file
      // fstream fout("student.txt",ios::app);  //using constructor
      // cout << "Enter Name of Student: " << endl;
      // cin>>name;
      // // cout << name;
      // fout << name;
      // fout.close();
      // cout << "File Created....." << endl;


      // part 2 
      // fstream fin("student.txt",ios::in);  //🎉 using constructor read file
      // char name[50];
      // fin>>name;
      // cout << name << endl;
      // fin.close();

      // part 3 :- copy file

      // char name[50];
      // fstream fin("student.txt",ios::in);  //🎉 using constructor read file
      // fstream fout("student1.txt",ios::app);  //🎉 using constructor append file
      // fin>>name;
      // fout<<name;
      // cout << "Copied Success..." << endl;

      // part 4 :- merge file
      char temp[50];
      fstream fin1("student.txt",ios::in); 
      fstream fin2("student1.txt",ios::in); 
      fstream fout("info.txt",ios::app); 

// 🎄  Read data from first file and write in second file
      fin1>>temp;
      fout<<temp;
      fin1.close();
      
// 🎄 Read data from city file and write in info file

      fin2>>temp;
      fout<<temp;
      fin2.close();
      fout.close();

      cout << "merge data: " << endl;








      
      return 0;
}