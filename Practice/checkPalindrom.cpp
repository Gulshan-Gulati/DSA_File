#include <iostream>
using namespace std;
bool checkPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str = "GuluG";
    cout << checkPalindrome(str);
    return 0;
}