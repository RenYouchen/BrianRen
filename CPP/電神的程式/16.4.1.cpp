#include <iostream>
#include <cstdlib>
using namespace std;
struct win
{
    int high;
    int width;
};
int area(struct win w){
    return w.high*w.width;
}
int main(void){
    int a1,a2;
    win set;
    cin>>a1;
    cin>>a2;
    set.high=a1;
    set.width=a2;
    cout<<area(set)<<endl;
    system("pause");
    return 0;
}

