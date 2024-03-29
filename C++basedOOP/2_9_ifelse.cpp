//정수를 입력받아 값이 0보다 크면 10을 더하고 아니면 10을 빼는 프로그램
#include <iostream>
using namespace std;

int main() {

    int i;
    cout << "정수를 입력하시오: " << endl;
    cin >> i;

    if (i > 0)
    {
        i += 10;
    }
    else
    {
        i -= 10;
    }

    cout << i << endl;

    return 0;
}