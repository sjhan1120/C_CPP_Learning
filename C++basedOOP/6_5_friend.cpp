#include <iostream>
using namespace std;

class CEVCar
{
friend int main();      //(1)class CEVCar �ܺ��߿��� int main() �Լ��� CHEVCar class�� ������ �����ϵ��� friend ����
friend class CHEVCar;  

private:
    int m_nWidth=10;

    void Steer(int deg)
    {
        cout<<"Steer contorl : "<<deg<<endl;
    }
};

class CHEVCar
{
    CEVCar evcar2;
public:
    void Dimension()
    {
        evcar2.m_nWidth*=10;
        cout<<"width 2: "<<evcar2.m_nWidth<<endl;
    }
};

int main()
{
    CEVCar evcar;
    evcar.Steer(30);    //(2)class CEVCar�� ��ü evcar�� ����Լ� ȣ��
    cout<<"width 1 : "<<evcar.m_nWidth<<endl;   //(3)class CEVCar�� ��ü evcar�� ������� ���

    CHEVCar hevcar;
    hevcar.Dimension(); //(4)class CHEVCar ��ü hevcar�� ����Լ� ȣ�� 

    return 0;
}