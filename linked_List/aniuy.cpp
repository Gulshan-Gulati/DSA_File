#include <bits/stdc++.h>
using namespace std;

string getEncryptedString(string originalString) {
    string temporaryString = "";
    string encryptedString = "";
    int n = originalString.size();

    vector<char> suffixMin(n + 1, '{'); 
    for (int i = n - 1; i >= 0; i--) {
        suffixMin[i] = min(suffixMin[i + 1], originalString[i]);
    }

    int idx = 0;

    while (idx < n || !temporaryString.empty()) {
        if (!temporaryString.empty() &&
            (idx == n || temporaryString.back() <= suffixMin[idx])) {
            encryptedString.push_back(temporaryString.back());
            temporaryString.pop_back();
        } else {
            temporaryString.push_back(originalString[idx]);
            idx++;
        }
    }

    return encryptedString;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    cout << getEncryptedString(s) << "\n";

    return 0;
}
