#include <iostream>
#include <math.h>

//���� ��� �Լ�. �迭�� ũ�⸦ ù �Ű������� ������ �迭 �Ű����� ��ü���� ũ�� ������ ����.
//��, ��Ȯ�� �迭 ũ�⸦ �����ϴ� ���� �Լ��� ȣ���ϴ� ����� å����
void vector_add(unsigned size, const double v1[], const double v2[], double s[])
{
    for (unsigned i = 0; i < size; ++i)
        s[i]= v1[i] + v2[i];
}

int main() {
    double x[] = {2, 3, 4}, y[] = {4, 2, 0}, sum[3];
    vector_add(3, x, y, sum);
    std::cout << sum[0] << sum[1] << sum[2] << '\n';

    vector_add(sizeof x / sizeof x[0], x, y, sum);      //�迭�� ũ�⸦ ����ϴ� �͵� ������ ��. ��, �� �迭�� ũ�Ⱑ ��ġ�ϴ����� ������ �� ����.
    std::cout << sum[0] << sum[1] << sum[2] << sum[3] << sum[4] << '\n';

    //������ ����. �Լ��� �迭 �Ű������� �����Ϳ� ȣȯ����.
    const int size= 3;
    double  *a= new double[size], *b= new double[size],
            *c= new double[3];
    for (unsigned i= 0; i < size; ++i)
        a[i]= i+2, b[i]= 4-2*i;
    vector_add(size, a, b, c);
    std::cout << c[0] << c[1] << c[2] << '\n';
}