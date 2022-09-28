#include <iostream>
#include <cstdlib>
using namespace std;
class score{
    int mai;
    public:
    int a,b,c;
    score(int a,int b)
    {
        c=a+b;
        mai=c;
        cout<<"mai="<<mai<<endl;
    }
    score(int c)
    {
        mai=c;
        cout<<"mai="<<mai<<endl;
    }
};

int main(void){
    score w1={3};
    score w2={456,7};
    system("pause");
    return 0;
}
//?m??h?? ?????????