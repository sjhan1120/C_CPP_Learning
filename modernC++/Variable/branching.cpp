#include <iostream>

using namespace std;
int main() {
    int op_code = 2;
    int z, x, y;
    x = 2;
    y = 3;

    switch(op_code) {
        case 0: z= x + y; break;                            //op_code�� 0�� ��
        case 4: z= x - y; cout<< "compute diff\n"; break;   //op_code�� 4�� ��
        case 2: [[fallthrough]];                            //break�� �����Ƿ� �ٷ� ������ case11�� �̾���.
                                                            //[[fallthrough]]�� �߰��Ͽ� �ǵ������� ������ �Ʒ��� �귯���ٴ°� �˷��� �� ����.
                                                            //�̸� �߰��ϸ� ��� �޽����� �ȳ���.(�Ƚᵵ �ȳ����� �ϴµ�...)
        case 11: z= x * y; break;
        default: z= x / y;                                  //op_code�� case �տ� ��õ� �͵� �̿��� ���� ��. �� else�� ����
        }
    cout << z;




    return 0;
}