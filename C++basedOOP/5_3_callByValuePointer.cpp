#include <iostream>
using namespace std;

void Func(int b)
{
    b=b+10;
    cout<<"b="<<b<<endl;    //b=20
}

int main()
{
    int *a=new int;  //a=10�� ����
    *a=10;
    Func(*a);

    cout<<"a="<<*a<<endl;    //a=10
    return 0;
}
//�������� �������� �����͸� �Ѱ��ִ� ���. ���� ����� 5_2�� ����.