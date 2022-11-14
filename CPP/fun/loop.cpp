#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int count;
    while (cin >> a >> b) {
        count = 0;
        while (a > 0) {
            a /= b;
            count++;
        }
        cout << count;
    }
}