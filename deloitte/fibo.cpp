#include <iostream>
#include <vector>
using namespace std;

void fibonacci(int n) {
    if (n <= 0) return;
    
    vector<int> fb(n);
    fb[0] = 0;
    fb[1] = 1;
    
    for (int i = 2; i < n; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    
    // Print Fibonacci series
    for (int i = 0; i < n; i++) {
        cout << fb[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
