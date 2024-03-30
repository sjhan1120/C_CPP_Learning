#include <iostream>
using namespace std;

class CMotor
{
//private:    // (2)
public:
    const char *m_pCarName;
    int m_nWidth, m_nLength;
public:
    void Dimension(const char *strName, int x, int y);
};

void CMotor::Dimension(const char *strName, int x, int y) // (2) �ܺο� ����Լ� ������ ���� ���ڵ� �Է�
{
    m_pCarName=strName;
    m_nWidth=x; m_nLength=y;

    cout<<"���� : " << m_pCarName<<", ";
    cout<<"�� : " << m_nWidth<<", ";
    cout<<"���� : " << m_nLength<<endl;
}

/*int main()
{
    CMotor Grandeur, Genesis;
    Grandeur.Dimension("�׷���", 1875, 4990);
    Genesis.Dimension("���׽ý�", 1925, 4995);
    //cout<<Grandeur.m_nWidth<<endl; // (1) Grandeur ��ü ������� m_nWidth ���ٽõ� : �����߻�
    cout<<Grandeur.m_nWidth<<endl;
    return 0;
}*/

//Ŭ������ �������� ��ü �����ϴ� ���� ����ü�� ���� ����� �����. main()�� ������ ���� �����ϸ� ������ ����� ����.
int main()
{
    CMotor Grandeur;
    CMotor* pGenesis = new CMotor;
    Grandeur.Dimension("�׷���", 1875, 4990);
    pGenesis->Dimension("���׽ý�", 1925, 4995);
    cout << Grandeur.m_nWidth << endl;
    cout << pGenesis->m_nWidth << endl;
}