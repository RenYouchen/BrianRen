#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
        {
            cout << "Yes" << '\n';
        }else{
            cout << "No" << '\n';
        }
    }
}