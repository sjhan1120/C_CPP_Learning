#include <iostream>
using namespace std;

class CMotor
{
protected:
    int m_nWidth, m_nLength;
public:
    CMotor()
    {
        cout<<"부모 기본 생성자"<<endl;
    }
    CMotor(int x, int y)
    {
        cout<<"부모 오버로딩 생성자"<<endl;
        m_nWidth=x; m_nLength=y;
    }
    void Printout()
    {
        cout<<"폭:"<<m_nWidth<<", 길이"<<m_nLength<<endl;
    }
};

class CNewMotor : public CMotor     //자식 calss CNewMotor
{
public:
    CNewMotor()
    {
        cout<<"자식 기본 생성자\n";
    }
    CNewMotor(int x, int y)
    {
        cout<<"자식 오버로딩 생성자\n";
        m_nWidth=x; m_nLength=y;
    }
};

int main()
{
    CNewMotor K5(1860, 4905);   //부모 기본생성자, 자식오버로딩 생성자
    K5.Printout();  cout<<"K5=====\n\n";
    
    CNewMotor K7(K5);           //기본 복사생성자
    K5.Printout();  cout<<"K7=====\n\n";

    CMotor K9(K5);           //기본 복사생성자
    K9.Printout();  cout<<"K9=====\n\n";

    CMotor SM5(1800, 5000);     //부모 오버로딩 생성자
    SM5.Printout(); cout<<"SM5=====\n\n";

    //CNewMotor SM7(SM5); //에러. 자식class의 객체가 기 생성된 부모 class의 객체의 초기값을 복사해 생성하려했기 때문.
    return 0;

}