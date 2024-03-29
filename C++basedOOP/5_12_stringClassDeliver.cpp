#include <iostream>
#include <string>
using namespace std;

void StringOut(string StrData)
{
    cout<<"문자열 "<<StrData<<endl;
}
int main()
{
    string strData="I like C !!!";
    StringOut(strData);     //strData==&strData[0]
    StringOut(&strData[4]);
    return 0;
}