#include <iostream>
using namespace std;     //wrong code
int main() {
    int arr[] = {1,2,2,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int temp[n];
    int j=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=0; k<n; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
