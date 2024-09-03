#include <iostream>
using namespace std;

class CEVCar
{
public:
    void Motor()
    {
        cout << "Motor control\n";
    }

    void Battery()
    {
        cout << "BMS control\n";
    }

    void Steer(int deg)
    {
        cout<<"Steer control : "<<deg<<endl;

    }
};

class CNewEVCar : public CEVCar
{
public:
    void Steer()
    {
        cout<<"자율주행차"<<endl;
    }
};

int main()
{
    CNewEVCar newcar;
    newcar.Motor();
    newcar.Steer();
    newcar.CEVCar::Steer(30);   //함수를 오버라이딩 했을 때 부모클래스 함수를 사용하는 방법
    return 0;
}