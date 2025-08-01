#include<iostream>
using namespace std;
int main(){
    int fact = 1;
    for(int i =1; i<5; i++){
        fact *=i;
    }
    cout<<fact;
}