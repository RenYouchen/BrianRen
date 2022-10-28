#include <bits/stdc++.h>
using namespace std;

char in[8][8];

void s() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> in[i][j];
        }
    }
    for (int i = 0; i < 8; i++) {
        int count = 0;
        for (int j = 0; j < 8; j++) {
            if (in[i][j] == '#') {
                count++;
            }
        }
        if (count == 1) {
            count = 0;
            for (int j = 0; j < 8; j++) {
                if (in[j][i] == '#') {
                    count++;
                }
            }
            if (count == 1) {
                for (int j = 0; j < 8; j++) {
                    if (in[i][j] == '#') {
                        if (in[i - 1][j + 1] == '#' &&
                            in[i - 1][j - 1] == '#' &&
                            in[i + 1][j + 1] == '#' &&
                            in[i + 1][j - 1] == '#') {
                            cout << i << ' ' << j << '\n';
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        s();
    }
}