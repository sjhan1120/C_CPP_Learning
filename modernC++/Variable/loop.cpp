#include <iostream>

int main() {
    //while문 콜라츠 추측
    {
        int x = 19;
        while(x != 1) {
            std::cout << x << std::endl;
            if (x % 2 == 1)                 //x가 홀수 일때
                x = 3*x + 1;
            else                            //x가 짝수 일때
                x = x / 2;
        }
    }

    //do-while문
    {
        double eps = 0.001;
        do {
            std::cout << "eps = " << eps << std::endl;
            eps /= 2.0;
        }while (eps > 0.0001);             //조건식이 루프 본문의 끝에서 판정하여 무조건 한번은 실행됨.
    }




    //for 루프 벡터 합 구하기
    {
        double v[3], w[] = {2., 4., 6.}, x[] = {6., 5., 4};
        for (int i = 0; i < 3; ++i)
            v[i] = w[i] + x[i];
    
        for (int i = 0; i < 3; ++i)
            std::cout << "v[" << i << "]=" << v[i] << "\n";
    }


    //for 루프를 이용한 테일러 급수 계산(이건 공식을 내가 이해를 못하겠다... 수학공부좀 하고오자..)
    {
        double x = 2.0, xn = 1.0, exp_x = 1.0;
        unsigned long fac = 1;
        for (unsigned long n = 1; n <= 10; ++n) {
            xn*= x;
            fac*= n;
            exp_x+= xn / fac;
            std::cout << "e^x is " << exp_x << '\n';
        }
    }



    return 0;
}