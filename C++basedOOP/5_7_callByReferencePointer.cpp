#include <iostream>
using namespace std;

void Func(int &b)
{
    b=b+10;
    cout << "b=" << b << endl;
}
int main()
{
    int *a = new int;
    *a = 10;
    Func(*a);

    cout<<"a="<<*a<<endl;
    return 0;
}
//�����ͺ��� *a�� ������ �޸� ������ ���� �� �ٸ� �̸� �Ű����� b�� �Լ����� �޴´ٸ� �߰��� �޸𸮴� �ҿ���� �ʴ´�.
//���� ������ ���������� �ΰ��� ���� �� �ϳ��� �����Ͱ� �ٲ�� �� ���� ���� ���� ���ÿ� �ٲ� ���ۿ� ���� ���� �������� Ư¡�̴�.