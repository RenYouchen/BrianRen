#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    int howMuch = 0;
    char temp;
    int skip;
    char board[50][50];
    int sI = 0;
    string s;

    cin >> R >> C;
    cin >> s;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> temp;
            board[i][j] = temp;
            if (temp == '.') {
                howMuch++;
            }
        }
    }
    skip = (howMuch - s.size()) / 2;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == '.') {
                if (skip == 0 && sI < s.size()) {
                    board[i][j] = s[sI];
                    sI++;
                } else {
                    skip--;
                }
            }
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }
}
