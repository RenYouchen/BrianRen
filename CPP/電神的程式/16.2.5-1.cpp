#include <iostream>
#include <cstdlib>
using namespace std;
void text(void);
int text(int);
int main(void){
    int a;
    cin >>a;
    text();
    cout << text(a);
    system("pause");
    return 0;
}
int text(int a){
return a*a;
}
void text(){
cout <<"你輸入的數字平方為";
}
//多載好酷