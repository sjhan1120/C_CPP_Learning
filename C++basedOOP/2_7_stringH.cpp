#include <iostream>
#include <cstring>    //<-또는 #inlcude <string.h>. Visual studio에서는 생략가능하긴 개뿔 안되잖아...
using namespace std;

int main() 
{
    char strData1[] = "대한민국";
    cout << "메모리 크기 = " << sizeof(strData1) << ", " << strData1 << endl;

    char strData2[6];
    strcpy(strData2, "Korea");
    //strcpy() 함수 사용하려면 인코딩이 UTF-8이어야 하고 #include <cstring>이 있어야함(적어도 내 vscode 에서는...)
    //인코딩 UTF-8이어야 하는걸로 봐선 한글이 안깨지는 인코딩으로 해야 하는 듯...?
    cout << "메모리 크기 = " << sizeof(strData2) << ", " << strData2 << endl;

    char strData3[12] = "Car";
    strcat(strData3, strData2);
    cout << "메모리 크기 = " << sizeof(strData3) << ", " << strData3 << endl;

    //Visual studio에서는 strcpy_s(), strcat_s() 이렇게 사용하라고 했는데 안해도 문제 없는듯...?

    return 0;
}