#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a > 100) cout << "A+";
    if (a>=90 && a<=100) cout << "A";
    if (a>=71 && a<=89 ) cout << "B";
    if (a>=60 && a<=70) cout << "C";
    if (a < 60) cout << "F";
}

