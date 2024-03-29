#include <iostream>
using namespace std;

void StringOut(const char *pStrData)
{
    cout<<"문자열 : "<<pStrData<<endl;
}

int main()
{
    const char *strData="i like C !!!";
    StringOut(strData); //strData==&strData[0]
    StringOut(&strData[4]);
    return 0;
}