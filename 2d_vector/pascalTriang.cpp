#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascal(int numRow){
    int m = numRow;
vector< vector<int>> v;
for(int i=0; i<m; i++){
    vector<int> a(i+1);
    v.push_back(a);
    for(int j=0; j<m; j++){
        if(i==0 || j==i)
            v[i][j] = 1;
        else 
        v[i][j] = v[i-1][j] + v[i-1][j-1];
    }
  }
return v;
}
int main(){
    vector< vector<int>> v = pascal(10);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<=i; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}







// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> pascal(int numRows) {
//     vector<vector<int>> triangle(numRows);

//     for(int i = 0; i < numRows; i++) {
//         triangle[i].resize(i + 1);
//         // vector<int> a(i);
//         triangle[i][0] = triangle[i][i] = 1;  // First and last values in each row are 1

//         for(int j = 1; j < i; j++) {
//             triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//             // triangle.push_back(a);       
//          }
//     }

//     return triangle;
// }

// int main() {
//     vector<vector<int>> triangle = pascal(10);
//     for(int i = 0; i < triangle.size(); i++) {
//         for(int j = 0; j <= i; j++) {
//             cout << triangle[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
