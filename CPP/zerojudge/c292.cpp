#include <bits/stdc++.h>
using namespace std;

int ans() {
    int input[50][50];
    int n, path;
    cin >> n >> path;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }
    cout << ' ';
}

int main() {
    cout << ans() << '\n';
}