#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
    int result =0;
    for(int i=x; i<=y; i++){
        result+=i;
    }
    return result;
}
int main(){
    cout<<sum_in_range(2,6);
    return 0;
}