#include <iostream>


struct NONONO {};           //�� �߰�ȣ �ְ� �����ݷ����� �� �� Ŭ������ �����ؼ� ���� �������� �����.


int main() {
    int i= 2;
    int j= 2;
    if(i + j != 3)
        throw NONONO{};     //i + j�� 3�� �ƴϹǷ� NONONO��� ���ܰ� ����.

    std::cout << i + j;     //���� �̰Ŵ� ���� �ȵ�.
    return 0;
}