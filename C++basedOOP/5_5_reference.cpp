#include <iostream>
using namespace std;
int main()
{
    int a = 100;    //
    int &b = a;     //���� a�� �� �ٸ� �̸�(����)�� b��� ����

    a = a + 100;            //a�� ������ �Ͼ�� b�� ������ �޸𸮸� ����Ű�Ƿ� b�� ����Ű�� �����͵� ���� ������ �Ͼ.
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    b*=10;
    cout<<"a="<<a<<endl;
    return 0;
}
//�����ڴ� �����Ϳ� �ٸ� ���������� ������ �������� ����� �� �ִ�.