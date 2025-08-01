#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    for(int i=0; i<n; i++){
        cout<<str[i];
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            str[i]='s';
    }
        cout<<str[i];
    }
    cout<<endl;
}