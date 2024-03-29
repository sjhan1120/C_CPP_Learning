#include <iostream>
#include <fstream>

int main() {
    std::ifstream ifs("some_array.dat");
    int size;
    ifs >> size;
    float* v= new float[size];
    for (int i= 0; i < size; ++i)
        ifs >> v[i];
    std::cout << v << std::endl;

    int* p= new int;
    int i= 3;
    int* ip2= &i;       //ip2는 주소
    int j= *ip2;        //j는 ip2의 주소가 가리키는 객체
    std::cout << j << std::endl;

    int* ip3= nullptr;  //nullptr = 0 = 아무것도 가리키지 않는 주소
    int* ip4{};         //위와 마찬가지
    std::cout << ip3 << ip4 << std::endl;   //주소값 0이 나옴.

    int *y= new int[10];
    y = new int[15];        //원래 할당했던 메모리 블록은 이제 접근불가, 해제불가.
    return 0;
}