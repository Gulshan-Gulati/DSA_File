#include<iostream>
using namespace std;
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;   
}
int main(){
int x=10;
int y=30;
swap(x,y);
cout<<x<<" "<<y;

return 0;
}