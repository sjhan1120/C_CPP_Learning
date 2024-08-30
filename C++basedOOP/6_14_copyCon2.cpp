#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth, m_nLength;       
    int* m_pHeight = new int;       

public:
    CMotor()
    {
        cout<<"기본 생성자"<<endl;
    }
    CMotor(int x, int y, int z)
    {
        cout<<"오버로딩 생성자"<<endl;
        m_nWidth=x; m_nLength=y;    *m_pHeight=z;
    }
    CMotor(CMotor& motor)   //복사생성자. 
    {
        cout << "복사 생성자" << endl;
        m_nWidth = motor.m_nWidth;  m_nLength = motor.m_nLength; 
        *m_pHeight = *motor.m_pHeight;
    }
    void Change(int x, int y, int z)
    {
        m_nWidth=x; m_nLength=y;    *m_pHeight=z;
    }
    void Printout()
    {
        cout<<"폭:"<<m_nWidth<<", 길이:"<<m_nLength<<", 높이:"<<*m_pHeight<<endl;
    }
};


int main()
{
    CMotor* K5 = new CMotor(1860, 4905, 1000);               
    // CMotor* K7=K5;   <-이렇게 하면 한쪽이 바뀔때 다른쪽도 바뀌게됨
    CMotor* K7 = new CMotor(1890, 4900, 1200);     
    K5->Printout();  K7->Printout();             

    cout << "데이터 변동을 줍니다\n";
    K5->Change(1900, 5000, 2000);               
    K5->Printout();      K7->Printout();  
            
                                                 

    return 0;
}