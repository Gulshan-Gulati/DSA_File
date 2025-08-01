#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string color;
};
int main(){
    fruit Apple;
    Apple.name = "apple";
    Apple.color = "Red";
    cout<<Apple.color<<endl;
    cout<<Apple.name;
}