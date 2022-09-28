#include <iostream>
#include <cstdlib>
using namespace std;
class fe{
    public:
    int f[1000];
    int feb(int i){ 
    if (i==1||i==2)
        return 1;
    else
        return feb(i-1)+feb(i-2);
}
};
int main(void){
    fe win;
    int count;
    cout<<"輸入求到第幾\n"<<endl;
    cin >> count;

    for (int i = 1; i < count+1; i++){
        win.f[i]=win.feb(i);
        cout<<win.f[i]<<" ";
    }
    system("pause");
    return 0;
}