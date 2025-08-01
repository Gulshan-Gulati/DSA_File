
#include<iostream>
#include<vector>
using namespace std;

void printPascal(vector<vector<int>>& v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 8;
    vector<vector<int>> v(n);

    // Initialize the first row
    v[0].push_back(1);

    for(int i = 1; i < n; i++) {
        v[i].push_back(1); // First element is always 1

        for(int j = 1; j < i; j++) {
            // Calculate the value based on the above two values
            v[i].push_back(v[i-1][j-1] + v[i-1][j]);
        }

        v[i].push_back(1); // Last element is always 1
    }

    printPascal(v);
    return 0;
}
