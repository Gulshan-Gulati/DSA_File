#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    float percent;
    // Student(string n, int r, float p){  //Constructure
    // name = n;
    // rollNo = r;
    // percent = p;
    // }
};
int main(){
    // Student Boy;
        // Boy.name = "Dhanraj";
        // Boy.rollNo = 22;
        // Boy.percent = 88.8;
        // cout<<Boy.name<<" "<<Boy.rollNo<<" "<<Boy.percent;

        // Student boy{"Dhanraj", 22, 88.8};
        // cout<<boy.name<<" "<<boy.rollNo<<" "<<boy.percent;

        Student *Girls = new Student();
        Girls->name = "kumari";
        Girls -> rollNo = 22;
        Girls -> percent = 88.8;
        cout<<Girls->name<<" "<<Girls->rollNo<<" "<<Girls->percent; 
}