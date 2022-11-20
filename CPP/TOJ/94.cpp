#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 3 && n <= 5) cout << "Spring!" << '\n';
    else if (n >= 6 && n <= 8) cout << "Summer!"<< '\n';
    else if (n >= 9 && n <= 11) cout << "Autumn!"<< '\n';
    else cout << "Winter!"<< '\n';
}