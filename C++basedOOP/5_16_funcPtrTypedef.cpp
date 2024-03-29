#include <iostream>
using namespace std;

int Add(int a, int b)
{
    int c = a + b;
    return c;
}
int Sub(int a, int b)
{
    int c = a - b;
    return c;
}
int main()
{
    int i=1, j=3, k;
    typedef int (*fpAddSub)(int, int);          
    fpAddSub FP;                                

    FP=Add;                                     // (2)
    k=FP(i, j);                                 // (3)              
    printf("%d+%d=%d\n", i, j, k);

    FP=Sub;                                     
    k=FP(i, j);                                 
    printf("%d-%d=%d\n", i, j, k);
    return 0;
}