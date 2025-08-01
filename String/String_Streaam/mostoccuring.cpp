//Given a sentence 'str', return the word that is occuring
//  most number of times in that sentence.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="Gulshan is bestfriend of Gulati and Gulshan support RCB";
    stringstream gs(str);
    string temp;

    vector<string>v;
    while(gs>>temp){
        // cout<<temp<<endl;
        v.push_back(temp);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    cout<<endl;
    sort(v.begin(), v.end());
     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    int count = 1;
    int maxcount = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1])
        count++;
        else count = 1;
        maxcount=max(maxcount,count);
    }

    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1])
        count++;
        else count = 1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}