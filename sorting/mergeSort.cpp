#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &abrr){
    int i = 0;  //arr
    int j = 0;  //brr
    int k = 0;  //abrr
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            abrr[k] = a[i];
            k++;
            i++;
        }
        else{
            abrr[k] = b[j];
            k++;
            j++;
        }
    }
    if(i == a.size()){
        while(j<b.size()){
            abrr[k] = b[j];
            k++;
            j++;

        }
    }
    if(j == b.size()){
        while(i<a.size()){
            abrr[k] = a[i];
            k++;
            i++;
        }
    }
}
int main(){
    int arr[] = {1,6,7,8,9,10,22,100};
    int brr[] = {2,3,5,7,8,9,10,24,55,69,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n);
    vector<int> b(brr,brr+m);
    vector<int> abrr(n+m);
    merge(a,b,abrr);
    for(int i = 0; i<abrr.size(); i++){
        cout<<abrr[i]<<" ";
    }
}