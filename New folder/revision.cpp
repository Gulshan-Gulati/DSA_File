//Write a C++ program that uses the vector container to store a 
// list of integers. The program should prompt the user to enter 
// a series of integers and store them in the vector. Once the user
//  finishes entering the numbers, the program should calculate 
// and display the sum and average of all the integers in the vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>number;
int n;
cout<<"Enter n: ";
cin>>n;
    for(int i=0; i<n; i++){
        int lelo;
        cout<<"Enter lelo : ";
        cin>>lelo;
    }
    int sum=0;
    number.push_back(n);
    for(int i=0; i<number.size(); i++){
        sum+=i;
    }
    cout<<sum;
}