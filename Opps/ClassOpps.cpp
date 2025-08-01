#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float percent;
    Student( string n,int r, float p){  // Constructor -> We can use multiple constructor in a single code,
        name = n;                       // Jo construcor calling se match karega wo work karega;
        rno = r;
        percent = p;
    }
    // Student(int r, string n, float p){
    //     name = n;
    //     rno = r;
    //     percent = p; 
    // }
};
int main(){
    // Student s;
    // s.name = "Gulshan";
    // s.rno = 26;
    // s.percent = 98.5;
    Student s{"Gulshan", 26, 76.5};

    //  Student s{26,"Gulshan",76.5};

    cout<<s.name<<" "<<s.rno<<" "<<s.percent<<endl; 

    }