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
        cout<<"��"<<count<<"����Ƥw����"<<endl;
    }
    
    void show(){
        cout<<"��"<<count<<"������`����"<<eng+math<<endl;
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
