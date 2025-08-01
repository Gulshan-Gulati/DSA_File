#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    float percent;
    // Student(string n, int r, float p){  //Constructure ----------method = 1
    // name = n;
    // rollNo = r;
    // percent = p;
    // }
    // Student(){    //Constructure --------method = 2
    //     name = "Dhanraj";
    //     rollNo = 22;
    //     percent = 88.9;
    // }
};
int main(){
    
        Student boy{"Dhanraj", 22, 88.8};  //method = 1
        cout<<boy.name<<" "<<boy.rollNo<<" "<<boy.percent;
        // Student Boy;                                                       //method = 2
        // cout<<Boy.name<<" "<<Boy.rollNo<<" "<<Boy.percent;
}