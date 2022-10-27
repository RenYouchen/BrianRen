#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string S;
    cin >> S;
    if (S == "YES" || S == "YEs" || S == "Yes" || S == "yES" || S == "yeS" || S == "yes" || S == "yEs" || S == "YeS")
    {
        cout << "Yes" << '\n';
    }else{
        cout << "No" << '\n';
    }
    
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ans();
    }
    
}