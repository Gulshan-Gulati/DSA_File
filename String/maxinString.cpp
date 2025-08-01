#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    string maxS;
    for(int i=0; i<6; i++){
        int x = stoi(arr[i]);
        if(x>max){
            max=x;    //maximum  value
            maxS = arr[i];    //maximum values string
        }
    }
    cout<<max;
    cout<<endl;
    cout<<maxS;
}