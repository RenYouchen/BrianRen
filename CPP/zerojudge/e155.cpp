#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        queue<int> q;
        if (n == 0)
            break;

        for (int i = 0; i < n; i++) {
            q.push(i + 1);
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < n - 1; i++) {
            if (i != 0)
                cout << ", ";
            cout << q.front();
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << '\n' << "Remaining card: " << q.front() << '\n';
    }
}