#include <iostream>
#include <cstdlib>
using namespace std;
int text(int,int);
int text(int);
int main(void){
    int a1,a2,b=2;
    cin >>a1>>a2;
    cout <<"�A��J��"<<text(b)<<"�ӼƬۥ[��"<<endl;
    cout << text(a1,a2);
    system("pause");
    return 0;
}
int text(int a1,int a2){
return a1+a2;
}
int text(int b){
return b;
}
