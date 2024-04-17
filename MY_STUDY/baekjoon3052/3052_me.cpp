#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, t;
    t = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[i] = n % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != -1)
        {
            int a = arr[i];
            for (int j = 0; j < 10; j++)
            {
                if (a == arr[j]) arr[j] = -1;
            }
            t++;
        }
    }
    cout << t;
    return 0;
}

/*
배열 선언
입력받는 변수 선언
나머지 개수 t = 0

for 10번
    cin
    입력받은 값 % 42를 배열에 저장

for 10번 i
    for 10번 j
        만약 요소i번값이 -1이 아니라면
            요소i번과 요소j번을 비교하여 같으면 그 요소j번값을 -1로 만듦
    t++

cout t;
*/