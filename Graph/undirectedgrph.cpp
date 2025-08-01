#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(v);
        }
    }
    void printAdjlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the value of m :"<<endl;
    cin>>m;

    graph g;
    cout<<"Enter the value of u and v : "<<endl;
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;

        
        // Creating an directed graph
        g.addEdge(u,v,0);
    }
    g.printAdjlist();
}