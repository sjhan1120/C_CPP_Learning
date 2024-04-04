#include <iostream>
using namespace std;

class CNewMotor
{
public:
    CNewMotor()
    {
        cout<<"생성자1\n";
    }
    ~CNewMotor()
    {
        cout<<"소멸자1\n";
    }
};

class CMotor
{
protected:
    int m_nWidth, m_nLength;

public:
    CNewMotor Motor;    //CNewMotor 객체 Motor 객체 생성
    CMotor()
    {
        cout<<"생성자2"<<endl;
    }
    ~CMotor()
    {
        cout<<"소멸자2"<<endl;
    }
};

int main()
{
    CMotor Grandeur;
    cout<<"=========\n";
    return 0;
}