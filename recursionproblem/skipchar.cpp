#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
}
char ch = original[0];
if(ch=='o') removeChar(ans,original.substr(1));
else removeChar(ans+ch,original.substr(1));
}
int main(){
    string str = "HelloWorld";
    cout<<str.size();
    cout<<endl;
    // cout<<str.substr(1)<<endl;
    removeChar("",str);
    // char max = 'o';
    // string ptr = "";
    // for(int i=0; i<str.size(); i++){
    //     if(str[i]!= max){
    //         ptr += str[i];
    //     }
    // }
    
    // cout<<ptr;
}