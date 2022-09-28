#include <iostream>
#include <cstdlib>
using namespace std;
class box{
    public:
    char mane;
    int math;
    int chinese;
    void pri()
    {
        cout<<mane<<"的成績加總為"<<math+chinese<<endl;
    }
    void all(char n,int m,int c)
    {
    math=m;
    mane=n;
    chinese=c;
    }
};
int main(void){
box a1;
a1.all('n',96,45);
a1.pri();
    system("pause");
    return 0;
}