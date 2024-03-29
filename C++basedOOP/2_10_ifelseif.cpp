//성적의 결과를 학점으로 표현해주는 프로그램
#include <iostream>
using namespace std;

int main() {
    int nA;
    cout << "점수를 입력하시오: " << endl;
    cin >> nA;
    cout << endl;
    cout << nA + 4 << endl;

    if (nA >= 90)           cout << "학점: A" << endl;
    else if (nA >= 80)      cout << "학점: B" << endl;
    else if (nA >= 70)      cout << "학점: C" << endl;
    else if (nA >= 60)      cout << "학점: D" << endl;
    else                    cout << "학점: F" << endl;

    return 0;
}