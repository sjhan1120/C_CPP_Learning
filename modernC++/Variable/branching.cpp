#include <iostream>

using namespace std;
int main() {
    int op_code = 2;
    int z, x, y;
    x = 2;
    y = 3;

    switch(op_code) {
        case 0: z= x + y; break;                            //op_code가 0일 때
        case 4: z= x - y; cout<< "compute diff\n"; break;   //op_code가 4일 때
        case 2: [[fallthrough]];                            //break가 없으므로 바로 다음인 case11이 이어짐.
                                                            //[[fallthrough]]를 추가하여 의도적으로 실행이 아래로 흘러간다는걸 알려줄 수 있음.
                                                            //이를 추가하면 경고 메시지가 안나옴.(안써도 안나오긴 하는데...)
        case 11: z= x * y; break;
        default: z= x / y;                                  //op_code가 case 앞에 재시된 것들 이외의 것일 때. 즉 else와 같음
        }
    cout << z;




    return 0;
}