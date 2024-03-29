#include <iostream>
using namespace std;

void Sum(int x, int y=2, int z=3)
{
    int s=x+y+z;
    cout << "x+y+z= "<<s<<endl;
}

int main()
{
    Sum(1);
    Sum(1, 10);
    Sum(1, 10, 20);
    return 0;
}