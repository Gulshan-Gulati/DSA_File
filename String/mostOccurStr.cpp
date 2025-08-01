#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="physicswallah";
    int n = str.length();
    int max=0;

    for(int i=0; i<n; i++){
        int ch = str[i];
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(str[j]==str[i])
                count++;            
        }
        if(max<count)
            max=count;
        cout<<max;
    }
    for(int i=0; i<n; i++){
        int ch = str[i];
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(str[j]==str[i])
                count++;            
            }
             if(max==count){
                cout<<ch<<" "<<max<<endl;
        }
    }
}

//this code has some error..!!
//this is not the efficient wayy to don this tyoe of question..!!