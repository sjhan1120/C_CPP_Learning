//두 학생의 성적과 총점을 구하는 예제. 구조체 초기화 방법
#include <iostream>
using namespace std;

struct Score                // (1) 구조체 정의: 구조체 이름(설계도) : Score
                            //        멤버변수: 문자열 멤버변수, 정수형 멤버변수 3개, 실수형 멤버변수 1개가 각각 선언되었음.
{
    const char *strName;    //문자열 멤버변수
    int nKor;               //정수형 멤버변수
    int nEng;
    int nMath;
    double fAverage;        //실수형 멤버변수
};

int main()
{
    //Student1.strName="KsKim";       Student1.nKor=90;
    //Student1.nMath=95;              Student1.nEng=100;
    //pStudent2->strName="UsChoi";    pStudent2->nKor=85;
    //pStudent2->nMath=100;           pStudent2->nEng=95;

    struct Score Student1 = {"KsKim", 90,95,100};
    struct Score *pStudent2 = new struct Score;
    *pStudent2={"UsChoi",85,100,95};

    cout<<"---------성적표------------\n";
    cout<<" 이름    국어 영어 수학 평균\n";
    cout<<"---------------------------\n";

    Student1.fAverage=(Student1.nKor + Student1.nMath + Student1.nEng) / 3.0;           //(6) Student1 객체의 국영수 점수 평균 구하기
    pStudent2->fAverage=(pStudent2->nKor + pStudent2->nMath + pStudent2->nEng) / 3.0;   //(7) pStudent2 객체의 국영수 점수 평균 구하기

    printf(" %8s%5d%4d%5d%5.1f\n", Student1.strName, Student1.nKor, Student1.nEng, Student1.nMath, Student1.fAverage);
    printf(" %8s%5d%4d%5d%5.1f\n", pStudent2->strName, pStudent2->nKor, pStudent2->nEng, pStudent2->nMath, pStudent2->fAverage);

    double fKorEaverage = (Student1.nKor + pStudent2->nKor) / 2.0;

    cout<<"국어 평균= "<< fKorEaverage << endl;

    delete pStudent2;

    return 0;
}