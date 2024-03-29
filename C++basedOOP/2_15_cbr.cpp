#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, nSum=0;
    for (n = 1; n < 10; n++)
    {
        if (n > 6)      break;          //n=7이 되면 for() 탈출하여 while()로 이어짐.
        if (n % 2 == 1) continue;       //홀수이면 이하 문자 반복 없이 for()으로 다시 반복.

        nSum += n;
        cout << "1부터 " + to_string(n) + "까지 짝수의 합 = " << nSum << endl;
    }
    while(n>0)
    {
        int nProduct=n*10;
        cout<<n<<" x 10 =" << nProduct<< endl;
        if(n<6) return 0;               //n=5가 되면 main()함수를 빠져나감.
        n--;
    }

    cout << "Finish\n";
    return 0;
}