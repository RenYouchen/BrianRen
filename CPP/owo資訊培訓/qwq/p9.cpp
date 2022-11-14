#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int tempI = 0,tempInt;
    string tempLine, tempS;
    pair<string, int> p[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin, tempLine);
        is.str(tempLine);
        tempI = 0;
        while (is >> tempS) {
            p[tempI].first = tempS;
            tempI++;
        }
        getline(cin,tempLine);
        is.str(tempLine);
        tempI = 0;
        while (is >> tempInt) {
            p[tempI].second = tempInt;
            tempI++;
        }
    }

    sort(p, p + 100);
    cout <<' ';
}
