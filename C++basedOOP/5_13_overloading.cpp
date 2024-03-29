#include <iostream>
using namespace std;

void Sum(int a)
{
    int c=a;
    cout<<a<<" + 0 = "<<c<<endl;
}
void Sum(int a, int b)
{
    int c=a+b;
    cout<<a<<" + "<<" = "<< c << endl;
}
void Sum(double a, double b)
{
    double c=a+b;
    cout<<a<<" + "<<b<<" = "<<c<<endl;
}
int main()
{
    Sum(10);
    Sum(10, 20);
    Sum(10.5, 20.5);
    return 0;
}