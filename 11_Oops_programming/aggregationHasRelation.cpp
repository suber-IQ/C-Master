// Program for Aggrigation(Has A Relation)
#include<iostream>
#include<string.h>
using namespace std;
class Personal
{
    public:
    char name[50];
    char address[50];
    int mobile;
    public:
    Personal(char name[],char address[],int mobile)
    {
        strcpy(this->name,name);
        strcpy(this->address,address);
        this->mobile=mobile;
    }
};
class EmpInfo
{

    Personal *P;  // Has A Relation
    int empid;
    char deptname[50];
    int salary;
    public:
    EmpInfo(Personal &P,int empid,char deptname[],int salary)
    {
           
           this->P=&P;
           this->empid=empid;
           strcpy(this->deptname,deptname);
           this->salary=salary;
    }
    void display()
    {
       cout<<"Employee Name: "<<P->name;
       cout<<"\nEmployee Address: "<<P->address;
       cout<<"\nEmployee Mobile: "<<P->mobile;
       cout<<"\nEmployee Id: "<<empid;
       cout<<"\nEmployee Department: "<<deptname;
       cout<<"\nEmployee Salary: "<<salary;

    }
};
int main()
{
    Personal P1("sumit kumar","XYZ Jaipur",12345);
    EmpInfo E(P1,101,"CSE",80000);
    E.display();
return 0;
}