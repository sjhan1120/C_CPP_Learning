#include <iomanip>              //setprecision() �Լ��� ������ �ִ� ���
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>               //M_PI�� ������ �ִ� ���
#include <vector>


int main() {
    double pi= M_PI;
    std::cout << pi << '\n';                                            //�ε��Ҽ��� ���� ���ڵ� �Ϻθ� ����� ���е��� ������
    std::cout << "pi is " << std::setprecision(16) << pi << '\n';       //���е��� ���� ������ �� ���� ��ȿ���ڰ� ��µ�.

    std::cout << "pi is " << std::setw(30) << pi << '\n';               //setw()�� �ʺ� �����Ͽ� ������ ��ġ�� �� ���Ľ�Ű�� �Լ���
                                                                        //��, �ٷ� ���� ����� �ʺ� �ٲٸ�, ��µ� ���� ������ �ʺ񺸴� �� ��� ǥ�� ����.

    std::cout   << "pi is " << std::setfill('-') << std::left
                << std::setw(30) << pi << '\n';                         //���� �������� �����ϰ�, ���� ������ Ư�� ���ڷ� ä��
    
    return 0;
}