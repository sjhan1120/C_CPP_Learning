#include <iostream>
#include <memory>
using namespace std;

int main() {

    unique_ptr<double> dp{new double};
    *dp= 7;

    //double d= 7.2;
    //unique_ptr<double> dd{&d};    <-�޸� ����� �߸� �����Ǿ� ���װ� �����ϴµ� �� �ȳ���...

    //unique_ptr<double> dp2{dp2}   <-����: ���� �Ұ�
    //dp2= dp;                      <-����: ���� �Ұ�

    unique_ptr<double> dp2{move(dp)}, dp3;  //�޸� �ּҸ� �ٸ� unique_ptr�� �Ѱ��ִ� ���� ������.
    dp3= move(dp2);

    cout << "The value of *dp3 is " << *dp3 << endl;
}