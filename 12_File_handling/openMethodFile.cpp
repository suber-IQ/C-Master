// 👉  How to Open file using Open Method
#include<iostream>
#include<fstream>
using namespace std;


int main(){

//  Part 1
      // fstream fout;

      // fout.open("person.txt",ios::out);
      // fout<<"Sumit kumar";
      // fout.close();

      // fout.open("person2.txt",ios::out);
      // fout<<"Amit kumar";
      // fout.close();
      
      // cout << "Multiple files created..." << endl;

      
      // Part 2

      // char name[20];
      // char city[20];
      // char college[20];
      // fstream fin;
 
      // //  🎄 Name file
      // fin.open("name.txt",ios::in);
      // fin>>name;
      // fin.close();

      // //  🎄 City file
      // fin.open("city.txt",ios::in);
      // fin>>city;
      // fin.close();
      
      // //  🎄 College file
      // fin.open("college.txt",ios::in);
      // fin>>college;
      // fin.close();

      // cout << "Name: " << name << endl;
      // cout << "City: " << city << endl;
      // cout << "Collage: " << college << endl;
      
      // Part 3
      
      fstream fout;
      char name[50];
      char city[50];
      char college[50];

      fout.open("name.txt",ios::out);
      cout << "Enter Name: " << endl;
      cin>>name;
      fout<<name;
      fout.close();

      fout.open("city.txt",ios::out);
      cout << "Enter City: " << endl;
      cin>>city;
      fout<<city;
      fout.close();

      fout.open("college.txt",ios::out);
      cout << "Enter College: " << endl;
      cin>>college;
      fout<<college;
      fout.close();

     cout << "file is Created..." << endl;
      



      return 0;
}