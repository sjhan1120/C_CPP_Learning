#define NDEBUG              //�ܾ��� ��Ȱ��ȭ ��Ŵ

#include <iostream>
#include <cassert>

int main() {
    int a = 1;
    int b = 2;

    assert(a + b == 2);     //a + b�� 2�� �ƴϹǷ� ������ ����ϰ� ���α׷��� ����
    return 0;
}