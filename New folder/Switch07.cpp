#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday ji"<<endl;
        break;
        case 2:
        cout<<"Tuesday ji"<<endl;
        break;
        case 3:
        cout<<"Wednesday ji"<<endl;
        break;
       case 4:
       cout<<"Thrusday ji"<<endl;
       break;
       case 5:
       cout<<"Friday ji"<<endl;
       break;
       case 6:
       cout<<"Saturday ji"<<endl;
       break;
       case 7:
       cout<<"Sunday ji"<<endl;
       break;
       default:
       cout<<"Enter the correct number";
    }
    return 0;
}