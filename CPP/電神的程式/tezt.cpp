// prog16_15, 建構元的使用 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
   private:
     int width, height;
     
   public:     
     CWin(int w,int h)   // CWin()建構元，可接收三個引數
     {
        width=w;
        height=h;
        cout << "CWin 建構元被呼叫了..." << endl;
     }
     void show_member(void)  // 函數成員，用來顯示資料成員的值
     {
        cout<<"width="<< width<<", height="<<height<<endl;
     }
};

int main(void)
{
   CWin win1(50,40); 	// 宣告win1物件,並設定初值
   CWin win2(60,70); 	// 宣告win2物件,並設定初值
      
   //win1.show_member();  
   //win2.show_member();
   system("pause");
   return 0;
}