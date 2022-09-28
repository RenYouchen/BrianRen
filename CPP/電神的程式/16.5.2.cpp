#include <iostream>
#include <cstdlib>
using namespace std;
class win
{
    int height;
    int lon;
    public:
    int area(void)
    {
        return lon*height;
    }
    void show_area(void)
    {
        cout<<"area is"<<area()<<endl;
    }
    void set(int h,int l)
    {
        if (h>0 && lon>0)
        {
            height=h;
            lon=l;
        }
        else
        {
            height=0;
            lon=0;
            cout<<"error"<<endl;
        }
    }
};

int main(void)
{   
    win a1;
    int h,l;
    cin>>h;
    cin>>l;
    a1.set(h,l);
    a1.show_area();
    system("pause");
    return 0;
}

