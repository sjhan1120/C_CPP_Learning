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

void ShowData(CMotor& motor)  
{
    cout<<"일반 실행함수"<<endl;
    motor.Printout();
}

CMotor Initial()        //만약 CMotor& Initial()로 참조자로 받으면 motor객체가 return 후 }를 만나 메모리에서 사라지므로
                        //Compoiler에 따라 엉뚱한 데이터를 출력할 수 있으므로 주의해야함.
{
    cout<<"초기화"<<endl;
    CMotor motor(1860, 4905);
    return motor;
}

int main()
{
    CMotor K5=Initial();
    K5.Printout();          
    return 0;
}