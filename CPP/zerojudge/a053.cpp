#include <bits/stdc++.h>
using namespace std;
void ans() {
    int n;
    cin >> n;
    if (n <= 10) {
        n = n * 6;
    } else if (n <= 20) {
        n = 10 * 6 + (n - 10) * 2;
    } else if (n <= 40) {
        n = 10 * 6 + 10 * 2 + (n - 20) * 1;
    } else if (n > 40) {
        n = 100;
    }
    cout << n;
}

int main() {
    ans();
}