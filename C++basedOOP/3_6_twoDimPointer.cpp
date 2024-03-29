#include <iostream>
using namespace std;

int main()
{
    int nArray[4][3]={ {10,20,30}, {40,50,60}, {70,80,90}, {100,110,120} };
                    // {10,20,30,40,50,60,70,80,90,100,110,120}; 와 동일
    cout<<"nArray[0][0] 주소: " <<&nArray[0][0]<<endl;
    cout<<"nArray[0] 주소   : " <<nArray[0]<<endl;
    cout<<"nArray 주소      : " <<nArray<<endl<<endl;

    cout<<"nArray[2][0] 주소: " <<&nArray[2][0]<<endl;
    cout<<"nArray[2] 주소   : " <<nArray[2]<<endl;

    cout<<"nArray[3][1] : " <<nArray[3][1]<<endl;
    cout<<"nArray[3]+1  : " <<*(nArray[3]+1)<<endl;

    
    return 0;
}