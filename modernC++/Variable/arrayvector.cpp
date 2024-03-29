#include <iostream>
#include <math.h>

//벡터 계산 함수. 배열의 크기를 첫 매개변수로 받지만 배열 매개변수 자체에는 크기 정보가 없음.
//즉, 정확한 배열 크기를 제공하는 것은 함수를 호출하는 사람의 책임임
void vector_add(unsigned size, const double v1[], const double v2[], double s[])
{
    for (unsigned i = 0; i < size; ++i)
        s[i]= v1[i] + v2[i];
}

int main() {
    double x[] = {2, 3, 4}, y[] = {4, 2, 0}, sum[3];
    vector_add(3, x, y, sum);
    std::cout << sum[0] << sum[1] << sum[2] << '\n';

    vector_add(sizeof x / sizeof x[0], x, y, sum);      //배열의 크기를 계산하는 것도 가능은 함. 단, 세 배열의 크기가 일치하는지는 점검할 수 없음.
    std::cout << sum[0] << sum[1] << sum[2] << sum[3] << sum[4] << '\n';

    //포인터 버전. 함수의 배열 매개변수는 포인터와 호환가능.
    const int size= 3;
    double  *a= new double[size], *b= new double[size],
            *c= new double[3];
    for (unsigned i= 0; i < size; ++i)
        a[i]= i+2, b[i]= 4-2*i;
    vector_add(size, a, b, c);
    std::cout << c[0] << c[1] << c[2] << '\n';
}