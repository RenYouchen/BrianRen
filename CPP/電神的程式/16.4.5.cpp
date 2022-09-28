#include <iostream>
#include <cstdlib>
using namespace std;
class win{
    public:
        int side;
        int high;
        int area(void)
        {
        return side*high;
        }
};

int main(void){
    win set;
    set.high=40;
    set.side=50;
    cout<<"high="<<set.high<<endl;
    cout<<"side="<<set.side<<endl;
    cout<<"area="<<set.area()<<endl;
    system("pause");
    return 0;
}

