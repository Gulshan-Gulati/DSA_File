#include<iostream>  //wrong solution
#include<vector>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=n; i>0; i--){
        int max_index=i;
        for(int j=n-1; j>0; j--){
            if(v[j]>v[max_index]){
                max_index=j;
            }
            if(i!=max_index){
                swap(v[i],v[max_index]);
            }
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
       cin>>v[i];
    }
    selectionSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}