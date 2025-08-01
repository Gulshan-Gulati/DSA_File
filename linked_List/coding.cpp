#include <bits/stdc++.h>
using namespace std;

string getEncryptedString(string s) {
    stack<char> stk;
    string result = "";
    int i = 0;
    int n = s.size();

    while (i < n) {
        stk.push(s[i]);

        while (!stk.empty() && (i + 1 == n || stk.top() <= s[i + 1])) {
            result += stk.top();
            stk.pop();
        }

        i++;
    }

    while (!stk.empty()) {
        result += stk.top();
        stk.pop();
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    cout << getEncryptedString(s) << '\n';

    return 0;
}
