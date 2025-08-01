#include<iostream>
int main(){
    int n;
   std::cin>>n;
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
            }
               std::cout<<factorial<<std::endl;
    return 0;
}