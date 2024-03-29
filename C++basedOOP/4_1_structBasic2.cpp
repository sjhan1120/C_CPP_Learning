//두 학생의 성적과 총점을 구하는 예제. 구조체 별칭 사용
#include <iostream>
using namespace std;

typedef struct Score                // (1) 구조체 정의: 구조체 이름(설계도) : Score. typedef를 사용할때는 구조체 이름 생략가능.
                            //        멤버변수: 문자열 멤버변수, 정수형 멤버변수 3개, 실수형 멤버변수 1개가 각각 선언되었음.
{
    const char *strName;    //문자열 멤버변수
    int nKor;               //정수형 멤버변수
    int nEng;
    int nMath;
    double fAverage;        //실수형 멤버변수
}Mark;

int main()
{
    Mark    Student1;                           //(2) 구조체(설계도)를 바탕으로 메모리에 정적으로 Student1  객체 생성
    Mark    *pStudent2=new Mark;        //(3) 구조체(설계도)를 바탕으로 메모리에 동적으로 pStudent2 객체 생성

    Student1.strName="KsKim";       Student1.nKor=90;   //(4) 정적으로 생성된 객체 멤버변수 사용 : Student1.nKor
    Student1.nMath=95;              Student1.nEng=100;
    pStudent2->strName="UsChoi";    pStudent2->nKor=85; //(5) 동적으로 생성된 객체 멤버변수 사용 : pStudent2->nKor
    pStudent2->nMath=100;           pStudent2->nEng=95;

    Student1.fAverage=(Student1.nKor + Student1.nMath + Student1.nEng) / 3.0;           //(6) Student1 객체의 국영수 점수 평균 구하기
    pStudent2->fAverage=(pStudent2->nKor + pStudent2->nMath + pStudent2->nEng) / 3.0;   //(7) pStudent2 객체의 국영수 점수 평균 구하기

    cout<<"---------성적표------------\n";
    cout<<" 이름    국어 영어 수학 평균\n";
    cout<<"---------------------------\n";

    printf(" %8s%5d%4d%5d%5.1f\n", Student1.strName, Student1.nKor, Student1.nEng, Student1.nMath, Student1.fAverage);
    printf(" %8s%5d%4d%5d%5.1f\n", pStudent2->strName, pStudent2->nKor, pStudent2->nEng, pStudent2->nMath, pStudent2->fAverage);

    double fKorEaverage = (Student1.nKor + pStudent2->nKor) / 2.0;

    cout<<"국어 평균= "<< fKorEaverage << endl;

    delete pStudent2;
    return 0;
}