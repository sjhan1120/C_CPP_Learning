#include <iostream>
using namespace std;

int main()
{
    int A, B, C, same, Sum;
    cin >> A >> B >> C;

    if ((A == B)&&(B == C)) Sum = 10000 + A * 1000;
    else if ((A==B)||(B==C)||(A==C))
    {
        if(A==B) same = A;
        else if(B==C) same = B;
        else if(A==C) same = C;
        Sum = 1000 + same * 100;
    }
    else
    {
        if((A>B)&&(A>C)) same = A;
        else if((B>A)&&(B>C)) same = B;
        else same = C;
        Sum = same * 100;
    }
    cout << Sum;

    return 0;
}