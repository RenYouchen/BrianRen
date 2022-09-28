#include <iostream>
#include <cstdlib>
using namespace std;
class box{
    public:
    char mane;
    int math;
    int chinese;
    void all(char n,int m,int c)
    {
    math=m;
    mane=n;
    chinese=c;
    cout<<mane<<"的成績加總為"<<math+chinese<<endl;
    }
    void all(int m,int c)
    {
    math=m;
    chinese=c;
    cout<<"成績加總為"<<math+chinese<<endl;
    }
};
int main(void){
box a1;
a1.all('n',96,45);
a1.all(96,45);
    system("pause");
    return 0;
}