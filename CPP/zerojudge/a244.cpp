#include <bits/stdc++.h>
using namespace std;
int ans() {
    int a, b, c;
    cin >> a >> b >> c;
    switch (a) {
        case 1:
            cout << b + c;
            break;
        case 2:
            cout << b - c;
            break;
        case 3:
            cout << b * c;
            break;
        case 4:
            cout << b / c;
            break;
        default:
            break;
    }
    cout << '\n';
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ans();
    }
}