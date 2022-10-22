#include <bits/stdc++.h>
using namespace std;
int ans() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        cout << a[i];
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