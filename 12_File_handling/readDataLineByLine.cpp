// 👉 how to Read data from file line by line
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){


      //  Open file in read mode
      fstream fin;
      fin.open("info.txt",ios::in);
      if(fin.is_open()){
            string st;
            int i = 0;
            while(getline(fin,st)){  // till file is not reach to end
            cout << st << endl;
            i++;
            }
            cout << "Total lines: " << i << endl;
      }else{
            cout << "file error" << endl;
      }




      return 0;
}
