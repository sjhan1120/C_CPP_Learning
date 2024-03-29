#include <iostream>
using namespace std;

int main()
{
    int nArray[5]={10,20,30,40,50};

    cout<<"nArray=";
    for(int i = 0; i<5; i++) cout << nArray[i] << ",";

    cout<<"\nnArray[0] 주소: "<<&nArray[0]<<endl;
    cout<<"nArray 주소: " << nArray<<endl<<endl;    //배열이름 nArray 자체는 배열의 데이터가 저장된 첫번째 주소,
                                                    //1차원 배열뿐만 아니라 n차원 배열도 배열이름은 첫번째 데이터가 저장된 곳의 주소를 의미함.

    cout<<"nArray[0]="<<nArray[0]<<endl;
    cout<<"*nArray ="<<*nArray<<endl<<endl;         //*nArray는 0번째 주소의 역참조 데이터

    cout<<"nArray[2] ="<<nArray[2]<<endl;
    cout<<"*(nArray+2) ="<<*(nArray+2)<<endl;       //nArray[2]와 *(nArray+2)와 동일한 위치의 역참조 데이터
                                                    //nArray[2]의 주소는 nArray+2와 같다.
    return 0;
}