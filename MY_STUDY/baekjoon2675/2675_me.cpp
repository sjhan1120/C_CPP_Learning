#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T, R;
    string S;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        string P = "";
        cin >> R >> S;
        for(int j = 0; j < S.length(); j++)
        {
            int a = R;
            while(a--)
            {
                P += S[j];
            }
        }
        cout << P << '\n';
    }
    return 0;
}