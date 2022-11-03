#include <bits/stdc++.h>
using namespace std;
int n;
string ans = "";

int main() {
    while (cin >> n) {
        while (n != 0) {
            ans += to_string(n % 2);
            n /= 2;
        }
        reverse(ans.begin(),ans.end());
        cout << ans << '\n';
        ans.clear();
    }
}
