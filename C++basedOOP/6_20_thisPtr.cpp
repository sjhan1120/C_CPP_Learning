#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth, m_nLength;

public:
    void Dimension(int m_nWidth, int m_nLength)
    {
        this->m_nWidth=m_nWidth;    //매개변수와 멤버함수의 이름이 똑같을 때 멤버변수를 가리키기 위한 this
        this->m_nLength=m_nLength;
    }
    CMotor* CalArea()   //CMotor& CalArea()
    {
        cout<<"Area:"<<m_nWidth*m_nLength<<endl;
        return this;    //return *this        //현재 실행하고 있는 객체의 포인터를 반환
    }
    void CarName(const char *strName)
    {
        cout<< "차종:"<<strName<<endl;
    }
};

int main()
{
    CMotor Genesis;
    Genesis.Dimension(1925, 4995);
    CMotor *pThis=Genesis.CalArea();    //CMotor pThis=Genesis.CalArea();

    pThis->CarName("Genesis");      //pThis.CarName("Genesis");     //반환된 포인터를 이용해 멤버함수를 호출하는 과정.
    Genesis.CarName("Genesis");     //제거
    cout << "객체주소 : " << &Genesis<< ", " << pThis << endl;  //this포인터를 통해 반환된 객체의 주소와 생성한 객체의 주소가 같은 주소임.

    return 0;   //this를 포인터가 아닌 참조자 형식으로 반환받을 수도 있음.
}