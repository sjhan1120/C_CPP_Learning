#include <iostream>
#include <cstring>      //<-Visual studio에서는 생략가능하긴 개뿔뜯어먹는 소리 하고 있네...
using namespace std;

int main()
{
    const char *pstrData1 = "대한민국";
    cout << "메모리 크기 = " << strlen(pstrData1) << ", " << pstrData1 << endl;

    const char *pstrData2 = "Korea";
    cout << "메모리 크기 = " << strlen(pstrData2) << ", " << pstrData2 << endl;
    cout << "2번째 문자 = " << pstrData2[2] << endl;
    //strlen()은 char* 혹은 char[] 형식에다가 써야하는 듯...?
    //pstrData2[2]면 3번째 문자지 왜 2번째 문자냐 저자 멍청한놈아....

    

    return 0;
}