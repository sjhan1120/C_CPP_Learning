#include <iostream>
using namespace std;

int main()
{  
    string S;
    cin >> S;

    for(char i = 'a'; i <= 'z'; i++)
    {
        cout << (int)S.find(i) << ' ';
    }
    return 0;
}
/*
�ܾ� S
�迭 arr[26]

a = 97
b = 98
z = 122

*/