#include <bits/stdc++.h>
using namespace std;

void ans() {
    int password[4];
    int tryPass[10000][4];
    int n;
    for (int i = 0; i < 4; i++) {
        cin >> password[i];
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tryPass[i][j];
        }
    }
    
    // printf("%dA%dB", )
}

int main() {
    // cout << ans() << '\n';
    ans();
}