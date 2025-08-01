#include<iostream>
using namespace std;
void find(int n, int *num1, int *num2){
    *num2 = n%10;
    while(n>9){
        n = n/10;
    } 
    *num1 = n;
    return;

}

int main(){
    int n;
    cin>>n;
    int firstDigit,lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;

    find(n, ptr1, ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}