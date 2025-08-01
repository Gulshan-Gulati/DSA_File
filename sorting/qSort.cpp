#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElem = arr[si];
    int count = 0;
    for(int i = si+1; i<ei; i++){
        if(arr[i]<=pivotElem){
            count++;
        }
    }
    int pivotIdx = count+si;
        swap(arr[si],arr[pivotIdx]);
        int i = si;
        int j = ei;
        if(arr[i]<=pivotElem) i++;
        if(arr[j]>pivotElem) j--;
        else if(arr[i] > arr[pivotIdx] && arr[j] < arr[pivotIdx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return pivotIdx;
}
void quckSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quckSort(arr,si,pi-1);
    quckSort(arr,pi+1,ei);
}
int main(){
    int arr[] = {2,1,4,3,5,6,7,8,97,6,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    quckSort(arr,0,n-1);
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}