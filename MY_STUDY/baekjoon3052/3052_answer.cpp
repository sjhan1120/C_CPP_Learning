#include <iostream>
using namespace std;

int main()
{
    int arr[42] = {};                   //배열을 42개의 요소로 선언함
    int n, t;
    t = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n%42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] > 0) t++;
    }
    cout << t;

    return 0;
}