#include <iostream>
using namespace std;
typedef struct
{
    const char *strName;
    int nKor, nEng, nMath;
    double fAverage;
}Mark;

int main()
{
    Mark Student[30];

    Student[0].strName="KsKim";     Student[0].nKor=90;
    Student[0].nEng=95;             Student[0].nMath=100;

    Student[1]={"Choi", 85, 100, 95};

    cout << "-------------성적표-------------\n";
    cout << "이름          국어 영어 수학 평균\n";
    cout << "--------------------------------\n";

    double fKorSum=0;
    for(int i=0; i<2; i++)
    {
        Student[i].fAverage=(Student[i].nKor + Student[i].nMath + Student[i].nEng)/3.0;

        printf(" %8s%5d%4d%5d%5.1f\n", Student[i].strName, Student[i].nKor, Student[i].nEng, Student[i].nMath, Student[i].fAverage);

        fKorSum += Student[i].nKor;
    }
    cout<<"국어 평균= "<< fKorSum/2.0 << endl;
    return 0;
}