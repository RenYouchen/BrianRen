#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, tempJ = 4;
    int ans1 = 0, ans2 = 0;
    char board[5][5];
    int bingo[25] = {0};
    memset(bingo,0,25);
    // input
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> bingo[i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> temp;
            for (int k = 0; k < 25; k++) {
                if (temp == bingo[k]) {
                    board[i][j] = '#';
                    break;
                } else {
                    board[i][j] = '.';
                }
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        temp = 0;
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == '#') {
                temp++;
            }
        }
        if (temp == 5) {
            ans1++;
        } else if (temp == 4) {
            ans2++;
        }
    }
    for (int i = 0; i < 5; i++) {
        temp = 0;
        for (int j = 0; j < 5; j++) {
            if (board[j][i] == '#') {
                temp++;
            }
        }
        if (temp == 5) {
            ans1++;
        } else if (temp == 4) {
            ans2++;
        }
    }
    temp = 0;
    for (int i = 0; i < 5; i++) {
        if (board[i][i] == '#') {
            temp++;
        }
    }
    if (temp == 5) {
        ans1++;
    } else if (temp == 4) {
        ans2++;
    }
    temp = 0;
    for (int i = 0; i < 5; i++) {
        if (board[i][tempJ] == '#') {
            temp++;
        }
        tempJ--;
    }

    if (temp == 5) {
        ans1++;
    } else if (temp == 4) {
        ans2++;
    }

    cout << ans1 << ' ' << ans2 << '\n';
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         cout << board[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}
// for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 5; j++) {
//         cout << board[i][j] << ' ';
//     }
//     cout << endl;
// }
/*
20
6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/