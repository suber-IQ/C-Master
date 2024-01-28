// 👉 How to Call Constructor in Inheritance in C++;

#include<iostream>
using namespace std;

// 🎄 Program 1:

// class First{
//       public:
//        First(){
//             cout << "This is a constructor of first class: "<< endl;
//        }
// };

// class Second{
//       public:
//       Second(){
//             cout << "This is a constructor of Second class: " << endl;
//       }
// };


// int main(){
       
//        Second S;

//       return 0;
// }

// 🎄 Program 2:



class First
{
        protected:
          int a,b;
       public:   
        First(int a,int b)  
        {
            cout<<"\nConstructor of First Class Parameterized"; 
            this->a=a;
            this->b=b;
        }
        First()
        {
            cout<<"\nConstructor of First Class Non Parameterized"; 
        }
        void addition();
};
class Second:public First
{
       public:
       Second(int x,int y):First(x,y)
       {
           cout<<"\nConstructor of Second Class Parameterized"; 
       }
       Second()
       {
           cout<<"\nConstructor of Second Class Non Parameterized"; 
       }
       void sub();
       void div();
};
void First::addition()
{
    int c;
    c=a+b;
    cout<<"\n"<<c;
}
void Second::sub()
{
    int c;
    c=a-b;
    cout<<"\n"<<c << endl;
}
void Second::div()
{
    int c;
    c=a/b;
    cout<<"\n"<<c;
}
int  main()
{
      Second S(50,10);
      S.addition();
      S.div();
      S.sub();

      return 0;
}







