#include <iostream>
#include <cstdlib>
using namespace std;
int count=0;
class scor
{
    private:
    int math;
    int eng;
    int mun;
    
    public:
    void sor(int m,int e)
    {
        math=m;
        eng=e;
        mun=++count;
        cout<<"第"<<count<<"筆資料已完成"<<endl;
    }
    
    void show(){
        cout<<"第"<<count<<"筆資料總分為"<<eng+math<<endl;
    }
};
int main(void)
{   
    scor data1;
    scor data2;
    data1.sor(65,80);

    data1.show();
    data2.show();


    system("pause");
    return 0;
}
