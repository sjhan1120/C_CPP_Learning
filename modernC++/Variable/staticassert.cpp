#include <iostream>

int main() {
    static_assert(sizeof(int) >= 4,
        "int is too small on this platform for 70000");
    const int capacity = 70000;

    return 0;
}

//���� ���ͷ� 70000�� int ������ ������ �Ѵ�. �� ���� �ڵ�� ���� �÷����� int�� ������ �� ������ ���� ���� �� �ִ� ũ������ �����Ѵ�.
//������ �������� �𸣰ڴ�....