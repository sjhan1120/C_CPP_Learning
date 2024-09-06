#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth;
    static int m_nLength;

public:
    static void Dimension(int x, int y)
    {
        //m_nWidth=x;     //Error. 정적멤버함수내에서 class내 멤버변수를 직접 사용 불가능.
        m_nLength=y;
        int z= x * y;
        cout<<"x="<< x <<", y="<< y << endl;
    }
};

int CMotor::m_nLength;

int main()
{
    CMotor::Dimension(1875, 4990);

    return 0;
}