#include <iostream>
using namespace std;

void Func(int &b)
{
    b=b+10;
    cout<<"b="<<b<<endl;    //b=20
}
int main()
{
    int a(10);
    Func(a);

    cout<<"a="<<a<<endl;    //a=20
    return 0;
}
//���� a�� ������ �޸� ������ ���� �� �ٸ� �̸�b�� �Լ����� �Ű������� �޴´ٸ� �߰��� �޸𸮴� �ҿ���� ���� ���̴�.
//���� ��� �ϳ��� ������ �ٲ�� �ٸ� �ϳ��� ������ ���ÿ� �ٲ� ���ۿ� ����.