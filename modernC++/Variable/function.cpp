#include <iostream>
#include <cmath>

using namespace std;
void increment(int x)       //�� ����. �Լ��ۿ� ���� ����
{
    x++;
}
void increment2(int& x)     //���� ����. �Լ��ۿ��� ���� ��.
{
    x++;
}
void increment3(int& x)     //
{
    int e = 0;
    e = x;
    cout << e << "\n";
}
inline double square(double x) { return x*x; }

int divide(int a, int b) {
    return a / b;
}
float divide(float a, float b) {
    return std::floor( a / b );
}



int main() {
    int i = 4;
    int j = 4;
    increment(i);
    increment2(j);
    cout << "i is " << i << '\n';
    cout << "j is " << j << '\n';

    const int a = 4;
    //increment2(a); <-�Լ� ������ a��� �μ��� ������ ��������� a�� �����.
    //����� ������ �º��� �� �� �����Ƿ� ������ ������ �������� ������

    cout << square(4) << std::endl;

    //overload resolution(�ߺ����� �ؼ�)
    int x = 4, y = 2;
    float n = 5.0, m= 2.0;
    std::cout << divide(x,y) << std::endl;
    std::cout << divide(n,m) << std::endl;
    //std::cout << divide(x,m) << std::endl;    //����: ������ ȣ��: ��Ȯ�� ��ġ�ϴ� ������ ����
                                                //�μ����� inplicit conversion(�Ϲ��� ��ȯ) ����� �� ���� ��ο� ������.

    return 0;
}