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
�迭 ����
�Է¹޴� ���� ����
������ ���� t = 0

for 10��
    cin
    �Է¹��� �� % 42�� �迭�� ����

for 10�� i
    for 10�� j
        ���� ���i������ -1�� �ƴ϶��
            ���i���� ���j���� ���Ͽ� ������ �� ���j������ -1�� ����
    t++

cout t;
*/