#include <iostream>

int main() {
    //while�� �ݶ��� ����
    {
        int x = 19;
        while(x != 1) {
            std::cout << x << std::endl;
            if (x % 2 == 1)                 //x�� Ȧ�� �϶�
                x = 3*x + 1;
            else                            //x�� ¦�� �϶�
                x = x / 2;
        }
    }

    //do-while��
    {
        double eps = 0.001;
        do {
            std::cout << "eps = " << eps << std::endl;
            eps /= 2.0;
        }while (eps > 0.0001);             //���ǽ��� ���� ������ ������ �����Ͽ� ������ �ѹ��� �����.
    }




    //for ���� ���� �� ���ϱ�
    {
        double v[3], w[] = {2., 4., 6.}, x[] = {6., 5., 4};
        for (int i = 0; i < 3; ++i)
            v[i] = w[i] + x[i];
    
        for (int i = 0; i < 3; ++i)
            std::cout << "v[" << i << "]=" << v[i] << "\n";
    }


    //for ������ �̿��� ���Ϸ� �޼� ���(�̰� ������ ���� ���ظ� ���ϰڴ�... ���а����� �ϰ����..)
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