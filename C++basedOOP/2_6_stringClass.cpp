#include <iostream>
//#include <string>     <-visual studio는 컴파일러에 기본 내제되어 있어 생략 가능
using namespace std;

int main() 
{
    string strData1= "Korea";
    cout << "메모리 크기= " << strData1.size() << ", " << strData1 << endl;         //string class는 문자열 끝에 NULL 포함하지 않는다 => 크기는 5

    string strData2("아아아아");
    cout << "메모리 크기= " << strData2.length() << ", " << strData2 << endl;
    
        //size() 와 length()는 동일한 명령어. NULL문자를 제외한 실제 메모리에 저장된 글자의 수를 반환함.
        //sizeof()는 메모리의 크기를 반환. size(), length()는 NULL을 제외한 글자의 수를 반환.
        //sizeof()를 string 문자열에 적용하면 char 문자열에서 적용했을 때와 다르게 나옴. 왜 그런거지...?
        //UTF-8을 사용하고 있고 한글이므로 메모리 크기는  글자수 x 3 byte 임.
        //EUC-KR(Visual studio) 인코딩에서는             글자수 x 2 byte 임.


    strData1.replace(1, 3, "Car");                                             //replace(n1, n2, 문자열): 문자열 위치 n1에서 n2까지 문자열로 대체
    cout << "메모리 크기= " << strData1.size() << ", " << strData1 << endl;

    cout << "1, 3번 위치 문자= " << strData1.at(1) << ", " << strData1[3] << endl;  //at(n1): n1 위치의 문자를 가리킴, 변수명[n1]과 동일
                                                                                   //string은 인덱스 0부터 시작이 아닌 1부터 시작인듯...?


    return 0;
}