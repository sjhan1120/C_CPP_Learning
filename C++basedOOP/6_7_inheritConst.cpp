#include <iostream>
using namespace std;

class CMotor
{
public:
    CMotor()    //부모생성자
    {
        cout<<"부모 생성자\n";
    }
    ~CMotor()   //부모 소멸자
    {
        cout<<"부모 소멸자\n";
    }
};
class CNewMotor : public CMotor
{
public:
    CNewMotor() //자식 생성자
    {
        cout<<"자식 생성자"<<endl;
    }
    ~CNewMotor()    //자식 소멸자
    {
        cout<<"자식 소멸자"<<endl;
    }
};

int main()
{
    CNewMotor Grandeur, Genesis;    //2개 객체 생성
    cout<<"=========\n";
    return 0;
}       //2개 객체 소멸