// prog16_15, �غc�����ϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     int width, height;
     
   public:     
     CWin(int w,int h)   // CWin()�غc���A�i�����T�Ӥ޼�
     {
        width=w;
        height=h;
        cout << "CWin �غc���Q�I�s�F..." << endl;
     }
     void show_member(void)  // ��Ʀ����A�Ψ���ܸ�Ʀ�������
     {
        cout<<"width="<< width<<", height="<<height<<endl;
     }
};

int main(void)
{
   CWin win1(50,40); 	// �ŧiwin1����,�ó]�w���
   CWin win2(60,70); 	// �ŧiwin2����,�ó]�w���
      
   //win1.show_member();  
   //win2.show_member();
   system("pause");
   return 0;
}