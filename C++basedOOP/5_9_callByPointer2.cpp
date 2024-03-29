#include <iostream>
using namespace std;
void Func(int *b)
{
    *b=*b+10;
    cout<<"b="<<*b<<endl;   //b=20
}

int main()
{
    int *a=new int(10);
    Func(a);

    cout<<"a="<<*a<<endl;   //a=20
    return 0;
}