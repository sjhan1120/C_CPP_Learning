#include <iostream>
#include <fstream>

int main() {
    std::ifstream ifs("some_array.dat");
    int size;
    ifs >> size;
    float* v= new float[size];
    for (int i= 0; i < size; ++i)
        ifs >> v[i];
    std::cout << v << std::endl;

    int* p= new int;
    int i= 3;
    int* ip2= &i;       //ip2�� �ּ�
    int j= *ip2;        //j�� ip2�� �ּҰ� ����Ű�� ��ü
    std::cout << j << std::endl;

    int* ip3= nullptr;  //nullptr = 0 = �ƹ��͵� ����Ű�� �ʴ� �ּ�
    int* ip4{};         //���� ��������
    std::cout << ip3 << ip4 << std::endl;   //�ּҰ� 0�� ����.

    int *y= new int[10];
    y = new int[15];        //���� �Ҵ��ߴ� �޸� ����� ���� ���ٺҰ�, �����Ұ�.
    return 0;
}