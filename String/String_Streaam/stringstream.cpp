#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="Gulshan is an unique student";
    stringstream ss(str);    //yeha pe ss ke place pe koi aur diff name bhi use kar sakte hai..!!
    string temp;
    while(ss>>temp){    //ss mera input de raha hai temp ko..!!
        cout<<temp<<endl;
    }
}