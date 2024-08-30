#include <iostream>
using namespace std;

int main()
{
    char strData1[6] = "korea";                                            //크기를 5로 할 경우 오류가 나옴. NULL문자가 포함되지 않기 때문인듯?
    char strData2[13] = "우리나라";
    char strData3[] = "김근식교수님";                                       //배열 크기를 직접 지정하지 않아도 알아서 지정됨.

    cout<< "메모리 크기= " << sizeof(strData1) <<", "<<strData1<< endl;
    //cout<< "메모리 크기= " << strData1.length() <<", "<<strData1<< endl;  //char형은 사용불가: 사용하려면 변수가 string 형식이어야 함.
    cout<< "메모리 크기= " << sizeof(strData2) <<", "<<strData2<< endl;     
    cout<< "메모리 크기= " << sizeof(strData3) <<", "<<strData3<< endl;     //UTF-8을 사용하고 있고 한글이므로 메모리 크기는  (글자수 x 3) + 1 byte 임.
                                                                           //EUC-KR(Visual studio) 인코딩에서는             (글자수 x 2) + 1 byte 임.

    strData1[0]='C';
    strData1[1]='A';
    strData1[2]='R';
    cout<< "메모리 크기= " << sizeof(strData1) <<", "<<strData1<< endl;

    return 0;
}