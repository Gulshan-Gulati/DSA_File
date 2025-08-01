#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        int current_elem=v[i];
        int j=i-1;
        while(j>=0 && v[j]>current_elem){
            v[j+1]=v[j];  //3 2 5 4 1
            j--;
            }
            v[j+1]=current_elem;
     }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    insertionsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}