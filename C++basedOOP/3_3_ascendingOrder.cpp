//1차원 배열을 이용한 오름차순 정렬 알고리즘.
#include <iostream>
#include <string>
using namespace std;

#define SIZE 6
int main()
{
    int nData[SIZE] = {3, 6, 2, 5, 4, 1};

    int i, j, a;
    cout << "오름차순 정리: ";
    for (i = 0; i < SIZE-1; i++)
    {
        for (j = i+1; j < SIZE; j++)
        {
            if (nData[i] > nData[j])
            {
                a= nData[i];
                nData[i] = nData[j];
                nData[j] = a;
            }
        }
    }
    cout << "오름차순 정리: ";
    for (i = 0; i < SIZE; i++) cout<<nData[i]<<" ";
    return 0;
}