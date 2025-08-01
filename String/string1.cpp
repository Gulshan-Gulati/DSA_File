#include<iostream>
using namespace std;
int main(){
    char str[5]={'A','B','C','D','E'};
    // for(int i=0; str[i]!='\0'; i++){
    //     cout<<str[i]<<" ";
    // }
    for(int i=0; i<5; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<(int)(str[1]);
}