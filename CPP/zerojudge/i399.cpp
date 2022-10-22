#include <bits/stdc++.h>
using namespace std;
int ans() {
    int a[3];
    int P = 1;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a + 3, greater<int>());

    for (int i = 0; i < 3; i++) {
        if (a[i] == a[i + 1 % 3]) {
            a[i] = 10;
            P++;
            }
    }
    cout << P << ' ';
    for (int i = 0; i < 3; i++) {
        if (a[i] != 10) {
            cout << a[i] << ' ';
        }
    }
}

int main() {
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     ans();
    // }
    ans();
}