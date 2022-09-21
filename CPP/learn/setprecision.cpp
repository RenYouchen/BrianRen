#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a = 5,
	b = 3;
    cout << setprecision(10) << 10.0*a/b << "    without fixed" << '\n';
    cout << fixed << setprecision(10) << 10.0*a/b << "    with fixed" << '\n';
    //setprecision(a)代表的是保留a位數字;
    //如果加了fixed的話就會保留小數點下面的a位數字;
    return 0;
}
