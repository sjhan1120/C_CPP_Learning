#include <iostream>
#include <string>


using namespace std;
int main() {

    short i = 32768;            //short�� �ִ� 32767�̹Ƿ� 32768�� �ϸ� -32768�� ����.
    char c = 'f'+3;             //char�� ���ڿ� ��ġ�� �� ǥ���� �ȿ��� �Բ� ����� ���� ����.
    char a = 97;                //char�� �ƽ�Ű�ڵ忡 ����. 97�� a�� �ش���.
    char name[8] = "Herbert";   //���� C���ڿ��� �׻� char ������ �� 0���� ����.
    char name2[2] = "a";        //'a'�� �ϳ��� ���� a, "a"�� ���� 0�� �ִ� �ϳ��� ���� �迭�̴�.(������ const char[2])
    std::string name3 = "Herbert";  //���ڿ��� �ٷ�� ǥ�� ���̺귯���� Ŭ���� string�� <string>����� ���Խ��Ѿ���.
                                     //s��� ���̻縦 �ٿ� ���ڿ� ���ͷ��� string ��ü�� ����ϰ� ���� ���� �ִ�.
    bool boll = name == name3;  //name�� name3 ��� Herbert��� ���� �迭�̹Ƿ� �Ȱ���.
    name3 = name3 + ", our cool anti-hero";

    std::cout << i << "\n";
    std::cout << c << "\n";
    std::cout << a << "\n";
    std::cout << name << "\n";
    std::cout << name[11] << "\n";       //���ڿ� ���� �׻� 0���� ������ ����? name[11]�� ���� �� ���ڱ� a�� ������ ����?
    std::cout << name2 << "\n";
    std::cout << boll << "\n";
    std::cout << name3;

    return 0;
}