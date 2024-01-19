// 👉 C++ Program For Friend Function and Accessing Private Data
#include<iostream>
#include<string.h>
using namespace std;

class FriendFunction{
      char name[50];
      int rolln;
         public:
          FriendFunction(const char *name, int rolln){
              if(strlen(name) < 50){
                  strcpy(this->name,name);
              }else{
                 cerr << "Name string is too long!" << endl;
              }
              this->rolln = rolln;
          }
          void display();
          friend void show(FriendFunction F);
          
};

void FriendFunction::display(){
      cout << "Display Method of class member method" << endl;
      cout << "Name: " << name  << endl;
      cout << "Roll no: " << rolln << endl;
}

void show(FriendFunction F){
      cout<<"Show Method of class friend method" << endl;
      cout << "Name: " << F.name << endl;
      cout << "Roll no: " << F.rolln << endl;
}


int main(){
       
       FriendFunction F1("Sumit",25);
       FriendFunction F2("Anil",35);
       show(F1);
       F1.display();
       F2.display();

      return 0;
}