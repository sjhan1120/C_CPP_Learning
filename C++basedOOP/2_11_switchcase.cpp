//숫자를 입력받아 입력된 숫자에 따라 실행하는 프로그램.
#include <iostream>
using namespace std;

int main ()
{
    int nA;
    cout << "1~5 페이지 중 하나를 선택하시오: ";
    cin >> nA;
    cout << "선택한 페이지: " << nA << endl;

    switch(nA)
    {
        case 1 : cout << "안녕하세요" << endl;
        case 2 : cout << "헬로" << endl;
        case 3 : cout << "쿠니치와" << endl;
        case 4 : cout << "띵하오" << endl;
        case 5 : cout << "엔타로 아둔" << endl; break;
        default : cout << "해당 페이지는 없습니다." << endl;
    }

    return 0;
}