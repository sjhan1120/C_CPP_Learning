#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth, m_nLength;
    int* m_pHeight = new int(300);   //(1) ���� �޸� �Ҵ翡�� �ʱ�ȭ

public:
    CMotor() : m_nWidth(1000), m_nLength(2000)  //(2) �⺻ �����ڸ� �̿��� ������� �ʱ�ȭ. ��, ���� �޸��� ��� �� �ʱ�ȭ�� { }���� ó��
    {
        *m_pHeight=800;
    }
    CMotor(int x, int y)    //(3) �Ϲ����� �ʱ�ȭ ���
    {
        m_nWidth = x; m_nLength = y;
    }

    //(4) (3)�� �ٸ� ���, ���⼭ ���� ��������� �ּҸ� �̿��Ͽ� �ʱ�ȭ�Ͽ��� �Ѵ�.
    //    �� �Ϻ� �����Ϸ������� �����ͷ� ����� ��� ���װ� �߻��� �� �ִ�.
    CMotor(int x, int y, int z) : m_nWidth(x), m_nLength(y), m_pHeight(&z)
    {

    }
    void Printout()
    {
        cout<<m_nWidth<<","<<m_nLength<<","<<*m_pHeight << endl;
    }
};

int main()
{
    CMotor K5;
    CMotor K7(1860, 4905);
    CMotor K9(2000, 5000, 1000);
    K5.Printout();
    K7.Printout();
    K9.Printout();
    return 0;
}