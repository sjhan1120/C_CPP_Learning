#include <iostream>


using namespace std;

int main() {
    char s1[] = "aaaaa";
    string s2 = "aaaaa"s;
    string s3 = "abcde"
                "fghij";
    bool stm = s1 == s2;
    
    cout << stm;


    return 0;
}