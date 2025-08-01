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
void mergeSort(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i = 0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i =0; i<n2; i++){
        b[i] = v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}
int main(){
    int arr[] = {1,6,7,8,9,10,22,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}