#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int RollNo;
    float marks;
    // Student(string n, int Rno, float m){
    //     name = n;
    //     RollNo = Rno;
    //     marks = m;
    // }
    Student(string name, int RollNo, float marks){
       this -> name = name;
        this -> RollNo = RollNo;
       this -> marks = marks;
    }
};
int main(){
    // Student S ={"Rohan",23,92.5};
    Student S("Codeji",99,99.5);
    cout<<S.name<<" "<<S.RollNo<<" "<<S.marks<<endl;
}