#include <bits/stdc++.h>
using namespace std;
bool isArms(int x)
{
    int digits = 0;
    int sum = 0;
    int n = x;
    while (n > 0)
    {
        digits++;
        n = n / 10;
    }
    n = x;
    while (n > 0)
    {
        int digit = n % 10;
        sum += round(pow(digit, digits));
        n = n / 10;
    }
    return (x == sum);
}
int main()
{
    int x = 153;
    cout <<boolalpha<<isArms(x);
    return 0;
}