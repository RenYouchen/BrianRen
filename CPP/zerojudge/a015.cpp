#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, r;
    int A[100][100];
    while (cin >> c >> r) {
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << A[j][i] << ' ';
            }
            cout << '\n';
        }
    }
}