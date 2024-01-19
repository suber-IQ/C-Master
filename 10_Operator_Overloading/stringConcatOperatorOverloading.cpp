// 👉 String Concatenation using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;

class MyString{
      char str[500];
      public:
      MyString(const char *str){
            if(strlen(str) < 500){

          strcpy(this->str,str);
            }else{
                 cerr << "Input string is too long!" << endl;
            }
      }
      MyString(){}
      void display();
      MyString operator+(MyString &k);
};

void MyString::display(){
      cout << str << endl;
}

MyString MyString::operator+(MyString &k){
      MyString Temp;
      strcpy(Temp.str, str);
      strcat(Temp.str,k.str);
      return Temp;
}


int main(){

     MyString S1("sumit");
     MyString S2(" kumar");
     MyString S3;
     S3 = S1 + S2;
     S3.display();


      return 0;
}

