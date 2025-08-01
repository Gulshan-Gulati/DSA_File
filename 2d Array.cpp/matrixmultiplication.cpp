#include<iostream>
using namespace std;
int main(){
    int r1;
    int c1;
    cin>>r1;
    cin>>c1;
    int arr[r1][c1];      //n rows & m Column  
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>arr[i][j];
        }
    }     
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }cout<<endl;
    int r2,c2;
    cin>>r2;
    cin>>c2;
    int brr[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>arr[i][j];
        }
    }     
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    int ans[r1][c2];
    int mul = 1;
    if(c1 != r2){
    cout<<"Invalid  matrix";
    }
    else{
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                
                ans[r1][c2]+=arr[r1][c1]*brr[r2][c2];
            }
        }
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}