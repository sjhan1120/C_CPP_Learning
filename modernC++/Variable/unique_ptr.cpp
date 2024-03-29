#include <iostream>
#include <memory>
using namespace std;

int main() {

    unique_ptr<double> dp{new double};
    *dp= 7;

    //double d= 7.2;
    //unique_ptr<double> dd{&d};    <-메모리 블록이 잘못 해제되어 버그가 나야하는데 왜 안나지...

    //unique_ptr<double> dp2{dp2}   <-오류: 복사 불가
    //dp2= dp;                      <-오류: 복사 불가

    unique_ptr<double> dp2{move(dp)}, dp3;  //메모리 주소를 다른 unique_ptr에 넘겨주는 것은 가능함.
    dp3= move(dp2);

    cout << "The value of *dp3 is " << *dp3 << endl;
}