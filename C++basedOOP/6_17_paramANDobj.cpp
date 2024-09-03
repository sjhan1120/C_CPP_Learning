#include <iostream>
using namespace std;

class CMotor
{
    private:
        int m_nWidth, m_nLength;
    
    public:
        CMotor(int x, int y)
        {
            m_nWidth=x; m_nLength=y;
        }
        void Change(int x, int y)
        {
            m_nWidth=x; m_nLength=y;
        }
        void Printout()
        {
            cout<<"폭:"<<m_nWidth<<", 길이"<<m_nLength<<endl;
        }
};

void ShowData(CMotor& motor)//실행함수에는 참조자 형식으로 받아 복사하여 프로그램 수행, &생략시 별도 메모리 공간이 할당됨.
                            //참조자를 사용하면 K5객체 멤버변수와 motor멤버변수가 동일한 메모리를 가리키며 이를 생략하면 별도 메모리 공간이므로
                            //중간에 값이 변동될 수 있으므로 참조자 사용 여부를 결정하여야 함.
{
    cout<<"일반 실행함수"<<endl;
    motor.Printout();
}

int main()
{
    CMotor K5(1860, 4905);  //객체 K5를 생성하고 객체의 멤버변수를 초기화
    ShowData(K5);           //K5 객체 전체를 실행함수의 매개변수에 전달하여,
    return 0;
}