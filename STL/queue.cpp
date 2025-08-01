#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Gulshan");
    q.push("G");
    q.push("Series");

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
}