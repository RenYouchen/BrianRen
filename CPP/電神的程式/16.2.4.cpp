#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    bool tf;
    int a;
    cout <<"块计";
    cin >>a;
    if (a%2==0)
    tf=true;
    else if (a%2!=0)
    tf=false;
    if (tf)
    cout <<"案计";
    else
    cout<<"计";
    system("pause");
    return 0;
}
//bool絤策