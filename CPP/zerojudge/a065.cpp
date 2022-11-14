#include <bits/stdc++.h>
using namespace std;
void ans() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; i++) {
        // s[i] = (abs((int)s[i] - (int)s[i+1]));
        cout << (abs((int)s[i] - (int)s[i+1]));
    }
}

int main() {
    ans();
}